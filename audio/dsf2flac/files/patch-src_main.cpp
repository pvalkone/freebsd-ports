--- src/main.cpp.orig	2020-12-05 22:13:18 UTC
+++ src/main.cpp
@@ -37,16 +37,16 @@
 
 #include <boost/timer/timer.hpp>
 #include <boost/filesystem.hpp>
+#include <dsd_decimator.h>
+#include <dsf_file_reader.h>
+#include <dsdiff_file_reader.h>
+#include <tagConversion.h>
 #include <FLAC++/metadata.h>
 #include <FLAC++/encoder.h>
-#include <sstream>
 #include <math.h>
-#include "cmdline.h"
-#include "dsd_decimator.h"
-#include "dsf_file_reader.h"
-#include "dsdiff_file_reader.h"
-#include "tagConversion.h"
-#include "dop_packer.h"
+#include <cmdline.h>
+#include <sstream>
+#include <dop_packer.h>
 
 #define flacBlockLen 1024
 
@@ -108,7 +108,7 @@ boost::filesystem::path muti_track_name_helper(boost::
  * converts a track at a time to PCM FLAC
  * 
  */
-bool pcm_track_helper(
+int pcm_track_helper(
 	boost::filesystem::path outpath,
 	DsdDecimator* dec,
 	int bits,
@@ -135,7 +135,7 @@ bool pcm_track_helper(
 	// setup the encoder
 	if(!encoder) {
 		fprintf(stderr, "ERROR: allocating encoder\n");
-		return false;
+		return 0;
 	}
 	ok &= encoder.set_verify(true);
 	ok &= encoder.set_compression_level(5);
@@ -214,15 +214,14 @@ bool pcm_track_helper(
  *
  * this function uses a dsdDecimator to do the conversion into PCM.
  */
-bool do_pcm_conversion(
+int do_pcm_conversion(
 		DsdSampleReader* dsr,
 		int fs,
 		int bits,
 		bool dither,
 		dsf2flac_float64 userScale,
 		boost::filesystem::path inpath,
-		boost::filesystem::path outpath,
-		bool onefile
+		boost::filesystem::path outpath
 		)
 {
 
@@ -232,7 +231,7 @@ bool do_pcm_conversion(
 	DsdDecimator dec(dsr,fs);
 	if (!dec.isValid()) {
 		fprintf(stderr,"%s\n",dec.getErrorMsg().c_str());
-		return false;
+		return 0;
 	}
 
 	// calc real scale and dither amplitude
@@ -246,43 +245,32 @@ bool do_pcm_conversion(
 
 	setupTimer(dsr->getPositionInSeconds());
 
-	if(onefile) {
-		// convert whole file
-		dsf2flac_float64 trackStart = dec.getFirstValidSample();
-		dsf2flac_float64 trackEnd = dec.getLastValidSample();
+	// convert each track in the file in turn
+	for (dsf2flac_uint32 n = 0; n < dsr->getNumTracks();n++) {
 
-		printf("Output file\n\t%s\n",outpath.c_str());
-		// use the pcm_track_helper
-		ok &= pcm_track_helper(outpath,&dec,bits,scale,tpdfDitherPeakAmplitude,clipAmplitude,trackStart,trackEnd,NULL);
-	} else {
-		// convert each track in the file in turn
-		for (dsf2flac_uint32 n = 0; n < dsr->getNumTracks();n++) {
+		// get and check the start and end samples
+		dsf2flac_float64 trackStart = (dsf2flac_float64)dsr->getTrackStart(n) / dec.getDecimationRatio();
+		dsf2flac_float64 trackEnd = (dsf2flac_float64)dsr->getTrackEnd(n) / dec.getDecimationRatio();
+		if (trackStart < dec.getFirstValidSample())
+			trackStart = dec.getFirstValidSample();
+		if (trackStart >= dec.getLastValidSample() )
+			trackStart = dec.getLastValidSample() - 1;
+		if (trackEnd <= dec.getFirstValidSample())
+			trackEnd = dec.getFirstValidSample() + 1;
+		if (trackEnd > dec.getLastValidSample())
+			trackEnd = dec.getLastValidSample();
 
-			// get and check the start and end samples
-			dsf2flac_float64 trackStart = (dsf2flac_float64)dsr->getTrackStart(n) / dec.getDecimationRatio();
-			dsf2flac_float64 trackEnd = (dsf2flac_float64)dsr->getTrackEnd(n) / dec.getDecimationRatio();
-			if (trackStart < dec.getFirstValidSample())
-				trackStart = dec.getFirstValidSample();
-			if (trackStart >= dec.getLastValidSample() )
-				trackStart = dec.getLastValidSample() - 1;
-			if (trackEnd <= dec.getFirstValidSample())
-				trackEnd = dec.getFirstValidSample() + 1;
-			if (trackEnd > dec.getLastValidSample())
-				trackEnd = dec.getLastValidSample();
-
-			// construct an appropriate filename for multi track files.
-			boost::filesystem::path trackOutPath;
-			if (dsr->getNumTracks() > 1) {
-				trackOutPath = muti_track_name_helper(outpath,n);
-			} else {
-				trackOutPath = outpath;
-			}
-
-			printf("Output file\n\t%s\n",trackOutPath.c_str());
-			// use the pcm_track_helper
-			ok &= pcm_track_helper(trackOutPath,&dec,bits,scale,tpdfDitherPeakAmplitude,clipAmplitude,trackStart,trackEnd,dsr->getID3Tag(n));
-
+		// construct an appropriate filename for multi track files.
+		boost::filesystem::path trackOutPath;
+		if (dsr->getNumTracks() > 1) {
+			trackOutPath = muti_track_name_helper(outpath,n);
+		} else {
+			trackOutPath = outpath;
 		}
+
+		fprintf(stderr,"Output file\n\t%s\n",trackOutPath.c_str());
+		// use the pcm_track_helper
+		ok &= pcm_track_helper(trackOutPath,&dec,bits,scale,tpdfDitherPeakAmplitude,clipAmplitude,trackStart,trackEnd,dsr->getID3Tag(n));
 	}
 
 	return ok;
@@ -291,7 +279,7 @@ bool do_pcm_conversion(
 /**
  *	dop_track_helper
  */
-bool dop_track_helper(
+int dop_track_helper(
 	boost::filesystem::path outpath,
 	DsdSampleReader* dsr,
 	dsf2flac_int64 startPos,
@@ -317,7 +305,7 @@ bool dop_track_helper(
 	// setup the encoder
 	if(!encoder) {
 		fprintf(stderr, "ERROR: allocating encoder\n");
-		return false;
+		return 0;
 	}
 	ok &= encoder.set_verify(true);
 	ok &= encoder.set_compression_level(5);
@@ -330,7 +318,7 @@ bool dop_track_helper(
 		ok &= encoder.set_sample_rate(352800);
 	} else {
 		fprintf(stderr, "ERROR: sample rate not supported by DoP\n");
-		return false;
+		return 0;
 	}
 	ok &= encoder.set_total_samples_estimate((endPos - startPos)/16);
 
@@ -400,6 +388,9 @@ bool dop_track_helper(
 	FLAC__metadata_object_delete(metadata[1]);
 
 	return ok;
+
+
+	return ok;
 }
 /**
  * int do_dop_conversion
@@ -407,7 +398,7 @@ bool dop_track_helper(
  * this function handles conversion into DoP encoded flac
  *
  */
-bool do_dop_conversion(
+int do_dop_conversion(
 		DsdSampleReader* dsr,
 		boost::filesystem::path inpath,
 		boost::filesystem::path outpath
@@ -460,7 +451,6 @@ int main(int argc, char **argv)
 	int fs = args_info.samplerate_arg;
 	int bits = args_info.bits_arg;
 	bool dither = !args_info.nodither_flag;
-	bool onefile = args_info.onefile_flag;
 	bool dop = args_info.dop_flag;
 	dsf2flac_float64 userScaleDB = (dsf2flac_float64) args_info.scale_arg;
 	dsf2flac_float64 userScale = pow(10.0,userScaleDB/20);
@@ -485,7 +475,7 @@ int main(int argc, char **argv)
 	else if (inpath.extension() == ".dff" || inpath.extension() == ".DFF")
 		dsr = new DsdiffFileReader((char*)inpath.c_str());
 	else {
-		fprintf(stderr,"Sorry, only .dsf or .dff input files are supported\n");
+		fprintf(stderr,"Sorry, only .dff or .dff input files are supported\n");
 		return 0;
 	}
 
@@ -497,20 +487,18 @@ int main(int argc, char **argv)
 	}
 	
 	// do the conversion into PCM or DoP
-	bool ok = false;
 	if (!dop) {
 		// feedback some info to the user
 		fprintf(stderr,"Input file\n\t%s\n",inpath.c_str());
 		fprintf(stderr,"Output format\n\tSampleRate: %dHz\n\tDepth: %dbit\n\tDither: %s\n\tScale: %1.1fdB\n",fs, bits, (dither)?"true":"false",userScaleDB);
 		//printf("\tIdleSample: 0x%02x\n",dsr->getIdleSample());
-    
-		ok = do_pcm_conversion(dsr,fs,bits,dither,userScale,inpath,outpath,onefile);
+
+		return do_pcm_conversion(dsr,fs,bits,dither,userScale,inpath,outpath);
 	} else {
 		// feedback some info to the user
 		fprintf(stderr,"Input file\n\t%s\n",inpath.c_str());
 		fprintf(stderr,"Output format\n\tDSD samples packed as DoP\n");
 
-		ok = do_dop_conversion(dsr,inpath,outpath);
+		return do_dop_conversion(dsr,inpath,outpath);
 	}
-	return ok? 0 : 1;
 }

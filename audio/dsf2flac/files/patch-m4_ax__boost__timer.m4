--- m4/ax_boost_timer.m4.orig	2018-01-02 05:00:23.000000000 +0200
+++ m4/ax_boost_timer.m4	2025-01-06 11:42:45.756720000 +0200
@@ -8,13 +8,14 @@
 #
 # DESCRIPTION
 #
-#   Test for Timer library from the Boost C++ libraries. The macro requires
+#   Test for System library from the Boost C++ libraries. The macro requires
 #   a preceding call to AX_BOOST_BASE. Further documentation is available at
 #   <http://randspringer.de/boost/index.html>.
 #
 #   This macro calls:
 #
 #     AC_SUBST(BOOST_TIMER_LIB)
+#     AC_SUBST(BOOST_TIMER_STATIC_LIB)
 #
 #   And sets:
 #
@@ -23,13 +24,14 @@
 # LICENSE
 #
 #   Copyright (c) 2012 Xiyue Deng <manphiz@gmail.com>
+#   Copyright (c) 2012 Murray Cumming <murrayc@openismus.com>
 #
 #   Copying and distribution of this file, with or without modification, are
 #   permitted in any medium without royalty provided the copyright notice
 #   and this notice are preserved. This file is offered as-is, without any
 #   warranty.
 
-#serial 1
+#serial 2 (based on serial 1 of ax_boost_locale.m4 with some simple find/replace by Murray Cumming)
 
 AC_DEFUN([AX_BOOST_TIMER],
 [
@@ -64,55 +66,94 @@
 
         AC_CACHE_CHECK(whether the Boost::Timer library is available,
 					   ax_cv_boost_timer,
-        [AC_LANG_PUSH([C++])
+            [AC_LANG_PUSH([C++])
 			 CXXFLAGS_SAVE=$CXXFLAGS
 
-			 AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[@%:@include <boost/timer.hpp>]],
-                                   [[boost::timer timer;]])],
+			 AC_COMPILE_IFELSE([AC_LANG_PROGRAM([[@%:@include <boost/timer/timer.hpp>]],
+                                   [[boost::timer::cpu_timer().stop();]])],
                    ax_cv_boost_timer=yes, ax_cv_boost_timer=no)
 			 CXXFLAGS=$CXXFLAGS_SAVE
              AC_LANG_POP([C++])
-		])
-		if test "x$ax_cv_boost_timer" = "xyes"; then
-			AC_SUBST(BOOST_CPPFLAGS)
+            ]
+        )
+		
+        if test "x$ax_cv_boost_timer" = "xyes"; then
+            AC_SUBST(BOOST_CPPFLAGS)
 
-			AC_DEFINE(HAVE_BOOST_TIMER,,[define if the Boost::Timer library is available])
+            AC_DEFINE(HAVE_BOOST_TIMER,,[define if the Boost::Timer library is available])
             BOOSTLIBDIR=`echo $BOOST_LDFLAGS | sed -e 's/@<:@^\/@:>@*//'`
 
-			LDFLAGS_SAVE=$LDFLAGS
+            ax_lib=""
+            ax_static_lib=""
+            no_find="yes"
+            no_link="yes"
+            link_timer="no"
+            link_timer_static="no"
+
+            LDFLAGS_SAVE=$LDFLAGS
             if test "x$ax_boost_user_timer_lib" = "x"; then
-                for libextension in `ls $BOOSTLIBDIR/libboost_timer*.so* $BOOSTLIBDIR/libboost_timer*.dylib* $BOOSTLIBDIR/libboost_timer*.a* 2>/dev/null | sed 's,.*/,,' | sed -e 's;^lib\(boost_timer.*\)\.so.*$;\1;' -e 's;^lib\(boost_timer.*\)\.dylib.*$;\1;' -e 's;^lib\(boost_timer.*\)\.a.*$;\1;'` ; do
-                     ax_lib=${libextension}
-				    AC_CHECK_LIB($ax_lib, exit,
-                                 [BOOST_TIMER_LIB="-l$ax_lib"; AC_SUBST(BOOST_TIMER_LIB) link_timer="yes"; break],
-                                 [link_timer="no"])
-				done
+                for libextension in `ls $BOOSTLIBDIR/libboost_timer*.so* $BOOSTLIBDIR/libboost_timer*.dylib* 2>/dev/null | sed 's,.*/,,' | sed -e 's;^lib\(boost_timer.*\)\.so.*$;\1;' -e 's;^lib\(boost_timer.*\)\.dylib.*$;\1;'` ; do
+                    ax_lib=${libextension}
+                    AC_CHECK_LIB($ax_lib, exit,
+                        [BOOST_TIMER_LIB="-l$ax_lib"; AC_SUBST(BOOST_TIMER_LIB) link_timer="yes"; break],
+                        [link_timer="no"])
+                done
                 if test "x$link_timer" != "xyes"; then
-                for libextension in `ls $BOOSTLIBDIR/boost_timer*.dll* $BOOSTLIBDIR/boost_timer*.a* 2>/dev/null | sed 's,.*/,,' | sed -e 's;^\(boost_timer.*\)\.dll.*$;\1;' -e 's;^\(boost_timer.*\)\.a.*$;\1;'` ; do
-                     ax_lib=${libextension}
-				    AC_CHECK_LIB($ax_lib, exit,
-                                 [BOOST_TIMER_LIB="-l$ax_lib"; AC_SUBST(BOOST_TIMER_LIB) link_timer="yes"; break],
-                                 [link_timer="no"])
-				done
+                    for libextension in `ls $BOOSTLIBDIR/boost_timer*.dll* 2>/dev/null | sed 's,.*/,,' | sed -e 's;^\(boost_timer.*\)\.dll.*$;\1;'` ; do
+                        ax_lib=${libextension}
+                        AC_CHECK_LIB($ax_lib, exit,
+                            [BOOST_TIMER_LIB="-l$ax_lib"; AC_SUBST(BOOST_TIMER_LIB) link_timer="yes"; break],
+                            [link_timer="no"])
+                    done
                 fi
+                for libextension in `ls $BOOSTLIBDIR/libboost_timer*.a* 2>/dev/null` ; do
+                    ax_static_lib=${libextension}
+                    AC_CHECK_FILE($ax_static_lib,
+                        [BOOST_TIMER_STATIC_LIB="$ax_static_lib"; AC_SUBST(BOOST_TIMER_STATIC_LIB) link_timer_static="yes"; break],
+                        [link_timer_static="no"])
+                done
 
+                no_find="no"
+                if [[ -z "$ax_lib" ]] && [[ -z "$ax_static_lib" ]]; then
+                    no_find="yes"
+                fi
+
+                no_link="no"
+                if [[ "$link_timer" == "no" ]] && [[ "$link_timer_static" == "no" ]]; then
+                    no_link="yes"
+                fi
+
             else
-               for ax_lib in $ax_boost_user_timer_lib boost_timer-$ax_boost_user_timer_lib; do
-				      AC_CHECK_LIB($ax_lib, exit,
-                                   [BOOST_TIMER_LIB="-l$ax_lib"; AC_SUBST(BOOST_TIMER_LIB) link_timer="yes"; break],
-                                   [link_timer="no"])
-                  done
+                for ax_lib in $ax_boost_user_timer_lib boost_timer-$ax_boost_user_timer_lib; do
+                    AC_CHECK_LIB($ax_lib, exit,
+                        [BOOST_TIMER_LIB="-l$ax_lib"; AC_SUBST(BOOST_TIMER_LIB) link_timer="yes"; break],
+                        [link_timer="no"])
+                done
 
             fi
-            if test "x$ax_lib" = "x"; then
-                AC_MSG_ERROR(Could not find a version of the library!)
+            if [[ -z "$ax_lib" ]]; then
+                AC_MSG_WARN(Could not find a dynamic version of boost_timer)
             fi
-			if test "x$link_timer" = "xno"; then
-				AC_MSG_ERROR(Could not link against $ax_lib !)
-			fi
-		fi
+            if [[ -z "$ax_static_lib" ]]; then
+                AC_MSG_WARN(Could not find a static version of boost_timer)
+            fi
+            if [[ "$no_find" == "yes" ]]; then
+                AC_MSG_ERROR(Could not find any version boost_timer to link to)
+            fi
 
-		CPPFLAGS="$CPPFLAGS_SAVED"
+            if [[ "$link_timer" == "no" ]]; then
+                AC_MSG_WARN(Could not dynamic link against boost_timer)
+            fi
+            if [[ "$link_timer_static" == "no" ]]; then
+                AC_MSG_WARN(Could not static link against boost_timer)
+            fi
+            if [[ "$no_link" == "yes" ]]; then
+                AC_MSG_ERROR(Could not link against any boost_timer lib)
+            fi
+
+        fi
+        
+        CPPFLAGS="$CPPFLAGS_SAVED"
 	LDFLAGS="$LDFLAGS_SAVED"
-	fi
-])
+    fi
+])
\ No newline at end of file

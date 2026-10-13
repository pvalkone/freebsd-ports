--- collector/cmd/collector-zfs/collector-zfs.go.orig	2026-10-13 18:18:28 UTC
+++ collector/cmd/collector-zfs/collector-zfs.go
@@ -251,12 +251,12 @@ func CreateLogger(appConfig config.Interface) (*logrus
 	var logFile *os.File
 	var err error
 	if appConfig.IsSet(configKeyLogFile) && len(appConfig.GetString(configKeyLogFile)) > 0 {
-		logFile, err = os.OpenFile(appConfig.GetString(configKeyLogFile), os.O_CREATE|os.O_WRONLY, 0644)
+		logFile, err = os.OpenFile(appConfig.GetString(configKeyLogFile), os.O_CREATE|os.O_WRONLY|os.O_APPEND, 0644)
 		if err != nil {
 			logger.Logger.Errorf("Failed to open log file %s for output: %s", appConfig.GetString(configKeyLogFile), err)
 			return nil, logFile, err
 		}
 		logger.Logger.SetOutput(io.MultiWriter(os.Stderr, logFile))
 	}
 	return logger, logFile, nil
 }

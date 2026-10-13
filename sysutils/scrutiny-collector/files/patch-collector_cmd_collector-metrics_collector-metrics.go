--- collector/cmd/collector-metrics/collector-metrics.go.orig	2026-10-02 13:35:25 UTC
+++ collector/cmd/collector-metrics/collector-metrics.go
@@ -3,7 +3,6 @@ import (
 import (
 	"encoding/json"
 	"fmt"
-	"io"
 	"log"
 	"os"
 	"os/signal"
@@ -301,12 +300,12 @@ func CreateLogger(appConfig config.Interface) (*logrus
 	var logFile *os.File
 	var err error
 	if appConfig.IsSet("log.file") && len(appConfig.GetString("log.file")) > 0 {
-		logFile, err = os.OpenFile(appConfig.GetString("log.file"), os.O_CREATE|os.O_WRONLY, 0644)
+		logFile, err = os.OpenFile(appConfig.GetString("log.file"), os.O_CREATE|os.O_WRONLY|os.O_APPEND, 0644)
 		if err != nil {
 			logger.Logger.Errorf("Failed to open log file %s for output: %s", appConfig.GetString("log.file"), err)
 			return nil, logFile, err
 		}
-		logger.Logger.SetOutput(io.MultiWriter(os.Stderr, logFile))
+		startup.AddPlainFileHook(logger.Logger, logFile)
 	}
 	return logger, logFile, nil
 }

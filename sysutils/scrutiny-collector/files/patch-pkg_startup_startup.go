--- pkg/startup/startup.go.orig	2026-10-13 18:17:28 UTC
+++ pkg/startup/startup.go
@@ -1,6 +1,7 @@ import (
 package startup
 
 import (
+	"io"
 	"os"
 	"strconv"
 	"strings"
@@ -50,4 +51,26 @@ func logoSuppressed(value string) bool {
 	}
 	parsed, err := strconv.ParseBool(strings.TrimSpace(value))
 	return err == nil && parsed
+}
+
+func AddPlainFileHook(logger *logrus.Logger, w io.Writer) {
+	logger.AddHook(&plainFileHook{w: w, formatter: &logrus.TextFormatter{DisableColors: true}})
+}
+
+type plainFileHook struct {
+	w         io.Writer
+	formatter logrus.Formatter
+}
+
+func (h *plainFileHook) Levels() []logrus.Level {
+	return logrus.AllLevels
+}
+
+func (h *plainFileHook) Fire(entry *logrus.Entry) error {
+	line, err := h.formatter.Format(entry)
+	if err != nil {
+		return err
+	}
+	_, err = h.w.Write(line)
+	return err
 }

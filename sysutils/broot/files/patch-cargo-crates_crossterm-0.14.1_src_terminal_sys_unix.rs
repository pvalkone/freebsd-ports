--- cargo-crates/crossterm-0.14.1/src/terminal/sys/unix.rs.orig	2020-01-10 09:35:07 UTC
+++ cargo-crates/crossterm-0.14.1/src/terminal/sys/unix.rs
@@ -33,7 +33,7 @@ pub(crate) fn size() -> Result<(u16, u16)> {
         ws_ypixel: 0,
     };
 
-    if let Ok(true) = wrap_with_result(unsafe { ioctl(STDOUT_FILENO, TIOCGWINSZ, &mut size) }) {
+    if let Ok(true) = wrap_with_result(unsafe { ioctl(STDOUT_FILENO, TIOCGWINSZ.into(), &mut size) }) {
         Ok((size.ws_col, size.ws_row))
     } else {
         tput_size().ok_or_else(|| std::io::Error::last_os_error().into())

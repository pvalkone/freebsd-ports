--- build.rs.orig	2017-05-11 23:12:20 UTC
+++ build.rs
@@ -3,7 +3,6 @@ extern crate clap;
 #[macro_use]
 extern crate lazy_static;
 
-use std::env;
 use std::fs;
 
 use clap::Shell;
@@ -13,10 +12,7 @@ use clap::Shell;
 mod app;
 
 fn main() {
-    let outdir = match env::var_os("OUT_DIR") {
-        None => return,
-        Some(outdir) => outdir,
-    };
+    let outdir = "%%CARGO_OUTDIR%%";
     fs::create_dir_all(&outdir).unwrap();
 
     let mut app = app::app();

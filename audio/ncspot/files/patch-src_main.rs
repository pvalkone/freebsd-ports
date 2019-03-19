--- src/main.rs.orig	2019-03-16 07:36:32 UTC
+++ src/main.rs
@@ -65,11 +65,18 @@ fn init_logger(content: TextContent, write_to_file: bo
                 buffer.append(line.clone());
 
                 if write_to_file {
+                    let logfile = match env::var_os("HOME") {
+                        None => {
+                            eprintln!("$HOME not set");
+                            process::exit(1);
+                        }
+                        Some(homedir) => PathBuf::from(format!("{0}/.config/ncspot.log", homedir.into_string().unwrap())),
+                    };
                     let mut file = OpenOptions::new()
                         .create(true)
                         .write(true)
                         .append(true)
-                        .open("ncspot.log")
+                        .open(logfile)
                         .unwrap();
                     if let Err(e) = writeln!(file, "{}", line) {
                         eprintln!("Couldn't write to file: {}", e);

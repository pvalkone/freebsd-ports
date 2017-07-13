--- render_sdl.c.orig	2017-06-02 08:44:36 UTC
+++ render_sdl.c
@@ -155,7 +155,7 @@ static GLuint load_shader(char * fname, 
 	FILE * f = fopen(shader_path, "rb");
 	free(shader_path);
 	if (!f) {
-		parts[0] = get_exe_dir();
+		parts[0] = "/usr/local/share/blastem";
 		parts[1] = "/shaders/";
 		shader_path = alloc_concat_m(3, parts);
 		f = fopen(shader_path, "rb");

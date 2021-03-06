--- src/gui.cpp.orig	2016-12-04 19:21:14 UTC
+++ src/gui.cpp
@@ -72,11 +72,11 @@ void init()
                                      SDL_PIXELFORMAT_ARGB8888, SDL_TEXTUREACCESS_STREAMING,
                                      WIDTH, HEIGHT);
 
-    font = TTF_OpenFont("res/font.ttf", FONT_SZ);
+    font = TTF_OpenFont("%%DATADIR%%/font.ttf", FONT_SZ);
     keys = SDL_GetKeyboardState(0);
 
     // Initial background:
-    SDL_Surface* backSurface  = IMG_Load("res/init.png");
+    SDL_Surface* backSurface  = IMG_Load("%%DATADIR%%/init.png");
     background = SDL_CreateTextureFromSurface(renderer, backSurface);
     SDL_SetTextureColorMod(background, 60, 60, 60);
     SDL_FreeSurface(backSurface);

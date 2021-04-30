--- streamrip/clients.py.orig	2021-04-30 16:33:05.672672000 +0300
+++ streamrip/clients.py	2021-04-30 16:29:26.648956000 +0300
@@ -764,7 +764,8 @@
         if media_type in ("playlist", "album"):
 
             resp = self._api_request(f"{url}/items")
-            if (tracks_left := item["numberOfTracks"]) > 100:
+            tracks_left = item["numberOfTracks"]
+            if tracks_left > 100:
                 offset = 0
                 while tracks_left > 0:
                     offset += 100

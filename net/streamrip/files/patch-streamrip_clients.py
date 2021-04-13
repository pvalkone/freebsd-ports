--- streamrip/clients.py.orig	2021-04-13 14:39:02 UTC
+++ streamrip/clients.py
@@ -637,7 +637,8 @@ class TidalClient(ClientInterface):
         if media_type in ("playlist", "album"):
 
             resp = self._api_request(f"{url}/items")
-            if (tracks_left := item["numberOfTracks"]) > 100:
+            tracks_left = item["numberOfTracks"]
+            if tracks_left > 100:
                 offset = 0
                 while tracks_left > 0:
                     offset += 100

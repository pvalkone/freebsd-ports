--- streamrip/tracklists.py.orig	2021-04-30 16:36:50.479311000 +0300
+++ streamrip/tracklists.py	2021-04-30 16:37:13.084385000 +0300
@@ -660,7 +660,8 @@
         """
         groups: Dict[str, list] = {}
         for album in self:
-            if (t := self.essence(album.title)) not in groups:
+            t = self.essence(album.title)
+            if t not in groups:
                 groups[t] = []
             groups[t].append(album)
 

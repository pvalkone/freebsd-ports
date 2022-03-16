--- drivers/gpu/drm/i915/i915_utils.h.orig	2022-01-20 10:57:53 UTC
+++ drivers/gpu/drm/i915/i915_utils.h
@@ -123,12 +123,6 @@ static inline u64 ptr_to_u64(const void *ptr)
 
 #include <linux/list.h>
 
-static inline int list_is_first(const struct list_head *list,
-				const struct list_head *head)
-{
-	return head->next == list;
-}
-
 static inline void __list_del_many(struct list_head *head,
 				   struct list_head *first)
 {

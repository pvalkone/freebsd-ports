--- drivers/gpu/drm/i915/i915_drv.c.orig	2020-11-03 20:17:09 UTC
+++ drivers/gpu/drm/i915/i915_drv.c
@@ -1078,8 +1078,6 @@ static void i915_mmio_cleanup(struct drm_i915_private 
 #ifndef __linux__
 	bus_release_resource(pdev->dev.bsddev, dev_priv->mmio_restype,
 	    dev_priv->mmio_rid, dev_priv->mmio_res);
-#else
-	pci_iounmap(pdev, dev_priv->regs);
 #endif
 }
 

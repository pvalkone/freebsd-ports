--- drivers/gpu/drm/radeon/radeon_device.c.orig	2020-11-03 20:14:46 UTC
+++ drivers/gpu/drm/radeon/radeon_device.c
@@ -1545,8 +1545,6 @@ void radeon_device_fini(struct radeon_device *rdev)
 	if (rdev->flags & RADEON_IS_PX)
 		vga_switcheroo_fini_domain_pm_ops(rdev->dev);
 	vga_client_register(rdev->pdev, NULL, NULL, NULL);
-	if (rdev->rio_mem)
-		pci_iounmap(rdev->pdev, rdev->rio_mem);
 	rdev->rio_mem = NULL;
 	iounmap(rdev->rmmio);
 	rdev->rmmio = NULL;

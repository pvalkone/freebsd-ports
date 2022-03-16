--- drivers/gpu/drm/amd/amdgpu/amdgpu_device.c.orig	2020-11-03 20:13:39 UTC
+++ drivers/gpu/drm/amd/amdgpu/amdgpu_device.c
@@ -2755,8 +2755,6 @@ void amdgpu_device_fini(struct amdgpu_device *adev)
 	if (adev->flags & AMD_IS_PX)
 		vga_switcheroo_fini_domain_pm_ops(adev->dev);
 	vga_client_register(adev->pdev, NULL, NULL, NULL);
-	if (adev->rio_mem)
-		pci_iounmap(adev->pdev, adev->rio_mem);
 	adev->rio_mem = NULL;
 	iounmap(adev->rmmio);
 	adev->rmmio = NULL;

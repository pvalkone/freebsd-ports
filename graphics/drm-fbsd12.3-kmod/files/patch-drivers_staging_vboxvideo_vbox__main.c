--- drivers/staging/vboxvideo/vbox_main.c.orig	2020-11-03 18:50:17 UTC
+++ drivers/staging/vboxvideo/vbox_main.c
@@ -180,8 +180,6 @@ static void vbox_accel_fini(struct vbox_private *vbox)
 
 	for (i = 0; i < vbox->num_crtcs; ++i)
 		vbva_disable(&vbox->vbva_info[i], vbox->guest_pool, i);
-
-	pci_iounmap(vbox->ddev.pdev, vbox->vbva_buffers);
 }
 
 /* Do we support the 4.3 plus mode hint reporting interface? */
@@ -294,7 +292,6 @@ int vbox_hw_init(struct vbox_private *vbox)
 err_destroy_guest_pool:
 	gen_pool_destroy(vbox->guest_pool);
 err_unmap_guest_heap:
-	pci_iounmap(vbox->ddev.pdev, vbox->guest_heap);
 	return ret;
 }
 
@@ -302,7 +299,6 @@ void vbox_hw_fini(struct vbox_private *vbox)
 {
 	vbox_accel_fini(vbox);
 	gen_pool_destroy(vbox->guest_pool);
-	pci_iounmap(vbox->ddev.pdev, vbox->guest_heap);
 }
 
 int vbox_gem_create(struct vbox_private *vbox,

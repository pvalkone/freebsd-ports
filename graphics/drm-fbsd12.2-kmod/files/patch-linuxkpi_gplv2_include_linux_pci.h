--- linuxkpi/gplv2/include/linux/pci.h.orig	2020-10-28 18:51:44 UTC
+++ linuxkpi/gplv2/include/linux/pci.h
@@ -172,17 +172,4 @@ pcie_get_readrq(struct pci_dev *dev)
 	return 128 << ((ctl & PCI_EXP_DEVCTL_READRQ) >> 12);
 }
 
-static inline void *
-pci_iomap(struct pci_dev *dev, int bar, unsigned long maxlen)
-{
-
-	panic("pci_iomap is not supported");
-}
-
-static inline void
-pci_iounmap(struct pci_dev *dev, void *addr)
-{
-	/* NOP */
-}
-
 #endif /* _LINUX_GPLV2_PCI_H_ */

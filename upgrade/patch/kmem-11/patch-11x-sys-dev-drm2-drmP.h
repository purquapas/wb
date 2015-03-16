--- drmP.h.bak	2015-01-29 12:22:43.000000000 +0300
+++ drmP.h	2015-01-29 12:22:35.000000000 +0300
@@ -252,7 +252,7 @@
 
 #define PAGE_ALIGN(addr) round_page(addr)
 /* DRM_SUSER returns true if the user is superuser */
-#define DRM_SUSER(p)		(priv_check(p, PRIV_DRIVER) == 0)
+#define DRM_SUSER(p)		(priv_check(p, PRIV_DRI_DRIVER) == 0)
 #define DRM_AGP_FIND_DEVICE()	agp_find_device()
 #define DRM_MTRR_WC		MDF_WRITECOMBINE
 #define jiffies			ticks

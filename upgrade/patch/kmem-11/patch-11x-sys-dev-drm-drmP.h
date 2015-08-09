--- drmP.h-o	2015-08-09 12:57:00.520279000 +0300
+++ drmP.h	2015-08-09 12:57:40.468087000 +0300
@@ -221,7 +221,7 @@
 
 #define PAGE_ALIGN(addr) round_page(addr)
 /* DRM_SUSER returns true if the user is superuser */
-#define DRM_SUSER(p)		(priv_check(p, PRIV_DRIVER) == 0)
+#define DRM_SUSER(p)		(priv_check(p, PRIV_DRI_DRIVER) == 0
 #define DRM_AGP_FIND_DEVICE()	agp_find_device()
 #define DRM_MTRR_WC		MDF_WRITECOMBINE
 #define jiffies			ticks

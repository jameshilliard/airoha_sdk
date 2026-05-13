ROOTPATH=$(shell pwd)
include $(BSP_ROOTDIR)/ecnt-function.mk

KERNELDIR=$(KERNEL_DIR)

EXTRA_CFLAGS += -O0 
#-save-temps
EXTRA_CFLAGS += -D CONFIG_DEBUG \
#              	-D CONFIG_SUPPORT_TEST \

ifneq ($(strip $(TCSUPPORT_OPENWRT))$(strip $(TC_BUILD_RELEASECODE)),)
ifc-objs 	:= ifc_tcam.o ifc_util.o ifc_api.o ifc_dev.o ifc_gen.o
else
UNOPENDIR := ../../../BSP/critical_ip_bsp/dp_bsp/ifc
EXTRA_CFLAGS += -I$(MODULES_IFC_DIR)
ifc-objs := ifc_gen.o 
ifc-objs += $(UNOPENDIR)/ifc_tcam.o $(UNOPENDIR)/ifc_util.o $(UNOPENDIR)/ifc_api.o $(UNOPENDIR)/ifc_dev.o
endif
#ifc-objs += ./test/ifc_test.o
obj-m		+= ifc.o


all:
	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded ifc.ko
ifneq ($(strip $(TCSUPPORT_OPENWRT))$(strip $(TC_BUILD_RELEASECODE)),)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), ifc_api.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), ifc_dev.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), ifc_util.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), ifc_tcam.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
else
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_IFC_DIR), ifc_api.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_IFC_DIR), ifc_dev.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_IFC_DIR), ifc_util.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_IFC_DIR), ifc_tcam.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/IFC)
endif

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean



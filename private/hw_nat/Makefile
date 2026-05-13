ROOTPATH=$(shell pwd)
include $(BSP_ROOTDIR)/ecnt-function.mk

KERNELDIR := $(KERNEL_DIR)
#obj-$(CONFIG_RA_HW_NAT) += hw_nat.o
obj-m = hw_nat.o
EXTRA_CFLAGS += -DCONFIG_HNAT_V2 -DCONFIG_RA_HW_NAT_IPV6 -DTCSUPPORT_RA_HWNAT_ENHANCE_HOOK
ifneq ($(strip $(TCSUPPORT_OPENWRT))$(strip $(TC_BUILD_RELEASECODE)),)
EXTRA_CFLAGS += -Wall -Wframe-larger-than=5120
hw_nat-objs := ra_nat_dev.o foe_fdb.o util.o hwnat_ioctl.o ppe_api.o ra_nat_multicast.o ra_nat_ety.o ra_nat_offload.o ra_nat_gen.o ra_nat_cust.o ra_nat_adp.o ra_nat_npu.o ra_nat_wifi.o ra_nat_entry.o
else
UNOPENDIR := ../../../BSP/critical_ip_bsp/dp_bsp/ra_hwnat_v3
EXTRA_CFLAGS += -I$(MODULES_RA_HWNAT_V3_DIR)
hw_nat-objs := hwnat_ioctl.o ppe_api.o ra_nat_multicast.o ra_nat_offload.o ra_nat_gen.o ra_nat_cust.o ra_nat_adp.o ra_nat_npu.o ra_nat_wifi.o ra_nat_entry.o
hw_nat-objs += $(UNOPENDIR)/foe_fdb.o $(UNOPENDIR)/ra_nat_dev.o $(UNOPENDIR)/ra_nat_ety.o $(UNOPENDIR)/util.o 
ifeq ($(strip $(TCSUPPORT_GCC_VER)),1010)
EXTRA_CFLAGS += -Werror -Wall -Wframe-larger-than=5120 -Wno-misleading-indentation
else
EXTRA_CFLAGS += -Werror -Wall -Wframe-larger-than=5120
endif
endif

ifneq ($(strip $(TCSUPPORT_CPU_EN7580)),)
EXTRA_CFLAGS += -Wno-array-bounds
endif

ifneq ($(strip $(TCSUPPORT_CPU_EN7581)),)
EXTRA_CFLAGS += -Wno-misleading-indentation
EXTRA_CFLAGS += -Wno-int-conversion
endif

all:
	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded hw_nat.ko
ifneq ($(strip $(TCSUPPORT_OPENWRT))$(strip $(TC_BUILD_RELEASECODE)),)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), ra_nat_dev.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), ra_nat_ety.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), foe_fdb.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
	$(call EcntBSPReleaseInstall,  $(ROOTPATH), util.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
else
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_RA_HWNAT_V3_DIR), ra_nat_dev.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_RA_HWNAT_V3_DIR), ra_nat_ety.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_RA_HWNAT_V3_DIR), foe_fdb.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
	$(call EcntBSPReleaseInstall,  $(MODULES_CRITICAL_DP_RA_HWNAT_V3_DIR), util.o, $(RELEASE_BSP_DIR)/$(TCPLATFORM)/modules/private/ra_hwnat_v3)
endif

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean


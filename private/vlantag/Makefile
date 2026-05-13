KERNELDIR=$(KERNEL_DIR)

ifneq ($(strip $(TCSUPPORT_OPENWRT_MULTI_WAN)),)
obj-m += vlantag.o
vlantag-objs := vlan_tag_ct.o 
else
obj-m += vlantag_ct.o
vlantag_ct-objs := vlan_tag_ct.o 
endif

all:
	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded *.ko
	
clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean


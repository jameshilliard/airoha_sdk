KERNELDIR=$(KERNEL_DIR)

EXTRA_CFLAGS += -DXSI_DEBUG

XSIMAC_SRC += hsgmii_lan_mac.c hsgmii_lan_api.c hsgmii_lan_proc.c serdes.c 
XSIMAC_OBJ := $(XSIMAC_SRC:%.c=%.o)

hsgmii_lan-objs 	:= $(XSIMAC_OBJ)
obj-m		+= hsgmii_lan.o


all:
	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded hsgmii_lan.ko

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean
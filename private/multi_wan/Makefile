KERNELDIR=$(KERNEL_DIR)

obj-m += multiwan.o
multiwan-objs := tc_multiwan.o

EXTRA_CFLAGS+= $(call cc-option,-Wno-error=date-time)

all:

	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded *.ko

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean



ROOTPATH=$(shell pwd)
include $(BSP_ROOTDIR)/ecnt-function.mk

#KERNELDIR := ../../../linux
KERNELDIR=$(KERNEL_DIR)
include $(BSP_ROOTDIR)/ecnt-function.mk

obj-m += tr471_open.o

tr471_open-objs := udpst.o udpst_control.o	udpst_data.o udpst_srates.o tr471.o   tr471_npu.o

			
REMOVEJO = tr471_open.ko

all:
	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded *.ko

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean
	$(call EcntCleanKo, $(REMOVEJO))

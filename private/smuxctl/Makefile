ROOTPATH=$(shell pwd)
include $(BSP_ROOTDIR)/ecnt-function.mk

AR=$(CROSS)ar
LD=$(CROSS)ld
STRIP=$(CROSS)strip
RANLIB=$(CROSS)ranlib
SIZE=$(CROSS)size


ifneq ($(BSP_CFLAGS), )
CFLAGS+=$(BSP_CFLAGS)
endif

CFLAGS += $(BSPAPP_CFLAG0)

COMPILE_LIBS		= $(BSPAPP_LDFLAG0)  $(COMPILEOPTION_LIB)

SMUXOBJS=smuxctl.o
EXECS=smuxctl

all: smuxctl install

.c.o:
	$(CC) -c $(ARHT_SECURE_OBJ_FLAGS)$(CFLAGS) $<

smuxctl: $(SMUXOBJS) 
	$(CC) $(ARHT_SECURE_APP_FLAGS) $(SMUXOBJS) -o $@ $(COMPILE_LIBS)
	$(STRIP) --strip-unneeded $(EXECS) 

install:
	$(call BspAppUsrBinInstall, $(ROOTPATH), $(EXECS))

clean:
	rm -f *.o *.a $(EXECS)
	$(call BspAppUsrBinClean, $(EXECS))

ROOTPATH=$(shell pwd)
include $(BSP_ROOTDIR)/ecnt-function.mk

#CROSS=mips-linux-gnu-
#CROSS=mips-linux-
#CC=$(CROSS)gcc
AR=$(CROSS)ar
LD=$(CROSS)ld
STRIP=$(CROSS)strip
RANLIB=$(CROSS)ranlib
SIZE=$(CROSS)size

CFLAGS= -DTRENDCHIP
ifneq ($(strip $(TCSUPPORT_CODE_SHRINK)),)
CFLAGS += -Os
endif
#CFLAGS= -mips32r2 -msoft-float -DTRENDCHIP -muclibc
ifneq ($(BSP_CFLAGS), )
        CFLAGS+=$(BSP_CFLAGS)
endif

INCLUDE = -I$(TOOLS_TRX_DIR) -I$(GLOBAL_FLASH_LAYOUT_INC_DIR)

all: airoha_network

%.o: %.c
	$(CC) $(CFLAGS) $(EXTRA_CFLAGS) $(INCLUDE) -c -o $@ $^

airoha_network: uci.o airoha_network.o
	$(CC) -o $@ $^ -luci
	$(STRIP) $@

clean:
	rm -f *.o airoha_network

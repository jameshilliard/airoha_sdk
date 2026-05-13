KERNELDIR=$(KERNEL_DIR)

EXTRA_CFLAGS += -I$(MODULES_XSI_AIR8811_DIR)/ -O0 
#-save-temps

# Compile Flag from config.bba

$(eval $(call compileFlagsFromFile,BBA_FLAGS,$(MODEL_PATH)/config.bba))
EXTRA_CFLAGS += $(BBA_FLAGS)

WANDETECT_SRC += wan_detect_main.c  air_en8811h_api.c
WANDETECT_OBJ := $(WANDETECT_SRC:%.c=%.o)

TOTAL_OBJ	:= $(WANDETECT_OBJ)

wan_detect-objs 	:= $(TOTAL_OBJ)
obj-m		:= wan_detect.o

all:
	@echo $(MODULES_XSI_AIR8811_DIR)
	$(MAKE) -C $(KERNELDIR) M=`pwd` modules
	$(STRIP) --strip-unneeded wan_detect.ko 

clean:
	$(MAKE) -C $(KERNELDIR) M=`pwd` clean





	

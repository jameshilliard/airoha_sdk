#CONFIG_HSDMA_TEST=y

ifeq ($(CONFIG_HSDMA_TEST), y)
EXTRA_CFLAGS += -DHSDMA_TEST
endif

obj-$(CONFIG_ECNT_HSDMA) += ecnt-hsdma.o

ifeq ($(CONFIG_HSDMA_TEST), y)
obj-$(CONFIG_ECNT_HSDMA) += ecnt-hsdma-test.o
endif

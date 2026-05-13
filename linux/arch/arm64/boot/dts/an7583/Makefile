ifneq ($(strip $(TCSUPPORT_CPU_AN7583)),)
dtb-$(CONFIG_ARCH_ECONET) += an7583.dtb
dtb-$(CONFIG_ARCH_ECONET) += an7583_evb.dtb
endif

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb

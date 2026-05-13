ifneq ($(strip $(TCSUPPORT_CPU_EN7581)),)
ifeq ($(strip $(TCSUPPORT_CPU_AN7583)),)
ifeq ($(strip $(TCSUPPORT_KERNEL_API)),)
dtb-$(CONFIG_ARCH_ECONET) += $(DTB_FILE)
endif
dtb-$(CONFIG_ARCH_ECONET) += en7581_evb.dtb
dtb-$(CONFIG_ARCH_ECONET) += en7581_evb_combo_pon.dtb
dtb-$(CONFIG_ARCH_ECONET) += en7581_new_spi.dtb
endif
endif

always		:= $(dtb-y)
subdir-y	:= $(dts-dirs)
clean-files	:= *.dtb

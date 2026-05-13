ifdef TCSUPPORT_CPU_AN7583
	obj-y += an7583/ecnt_serdes_common_phy.o	
	obj-y += an7583/xfi_pma/src/xfi_pma.o
	obj-y += an7583/pon_pma/src/pon_pma.o
	obj-y += an7583/pcie0_pma/src/pcie0_pma.o
else
ifdef TCSUPPORT_CPU_EN7581
	obj-y += en7581/ecnt_ssusb2_phy.o en7581/ecnt_serdes_common_phy.o
endif
ifdef TCSUPPORT_CPU_AN7552
	obj-y += an7552/serdes_cmn_phy_7552.o
endif
endif
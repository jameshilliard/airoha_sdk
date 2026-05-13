#ifndef AIR_PCIE2L_XSGMII_INI
#define AIR_PCIE2L_XSGMII_INI
	
static void RG_W_PL(RgAddr Base,RgAddr Base_start,RgAddr Addr,u32 Data);
static u32 RG_R_PL(RgAddr Base,RgAddr Base_start,RgAddr Addr);
static inline void xsgmii_ini(volatile p2l_xsgmii_base * _pxSGMII, u8 Lane){
    printk("xsgmii_ini\n");
	if (Lane ==0)
	{
        RG_W_PL(_pxSGMII->ra_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x0 ,0xc000c00 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x0 ,0x12040000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x4c ,0xff0000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1c ,0x3000004 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb828 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x20 ,0x30000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x24 ,0x5010100 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x3c ,0x820082 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x38 ,0x10100 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x40 ,0x101031b );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x30 ,0x305 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x4 ,0x180000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x8 ,0x101f0a );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xc ,0x2ff0000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x2c ,0x4010100 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb800 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb79c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x14 ,0x10000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x10 ,0x1000300 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x50 ,0x10010 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x28 ,0x10400 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x8c ,0x101031b );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x6c ,0x400 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x68 ,0x1000001 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb854 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x70 ,0x3000003 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x74 ,0x3010000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x88 ,0x820082 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x84 ,0x10000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x54 ,0xc000001 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x58 ,0x51f0500 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x5c ,0xff000000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x7c ,0x1030000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x80 ,0x40404 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb798 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb794 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x60 ,0x30003 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x64 ,0x1000001 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x9c ,0x10010 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x78 ,0x1040009 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb414 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xcc ,0x10400 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb874 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb77c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb910 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb778 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb780 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb260 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb178 ,0x20403 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb184 ,0x40003ff );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x17c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x180 ,0x40000000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x148 ,0x4000000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x170 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x150 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb320 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb004 ,0xc100a00 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb48c ,0x1000203 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x104 ,0x100 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb814 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x13c ,0x20000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x134 ,0x60000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x130 ,0x10000 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb80c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb88c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb768 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb390 ,0x100010 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb394 ,0x19000d );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb39c ,0x3307 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xfc ,0xcaab1030 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb100 ,0xc80064 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb08c ,0x101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb104 ,0x2 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb090 ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb09c ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb094 ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb098 ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb76c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x110 ,0x2000000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x120 ,0x4010808 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x124 ,0x80606 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb120 ,0x503 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb088 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb38c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb000 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb33c ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb330 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x144 ,0x4 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x138 ,0x7 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb824 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb81c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb894 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb84c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb34c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x140 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb350 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb16c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x100 ,0x100000a );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xf4 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb818 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb460 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb150 ,0x19000d );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb14c ,0x100010 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb158 ,0x3307 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb154 ,0x19000d );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x11c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb820 ,0x0 );
		//RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb530 ,0x2cda0330 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb19c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb174 ,0x4010000 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb308 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb15c ,0x700 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb118 ,0xa000a01 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb204 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb328 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb334 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb31c ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb318 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb324 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb110 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb108 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb30c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb114 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb10c ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb304 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb32c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb338 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb084 ,0x101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb200 ,0x101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb208 ,0x10101 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb144 ,0x10 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb360 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb898 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb840 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb83c ,0x0 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[0],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x100 ,0x10001 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x900 ,0x2040 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xb2c ,0x4c4c );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc0 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc4 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc8 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbcc ,0x0);
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe0 ,0x0 );
		//#2
	    RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe8 ,0x7070707 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc20 ,0x0 );
		RG_W_PL(_pxSGMII->ra_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x2c ,0x4 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbfc ,0x1601 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x930 ,0xc );
		RG_W_PL(_pxSGMII->pcs1_base[0],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf8 ,0x6330001 );
		//#3 H
		RG_W_PL(_pxSGMII->pcs2_base[0],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xb04 ,0x88010 );
		
		RG_W_PL(_pxSGMII->multi_sgmii_base[0],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x18 ,0x0 );
		RG_W_PL(_pxSGMII->ra_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x100 ,0x80000000 );
		RG_W_PL(_pxSGMII->an_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x0 ,0x1140 );
		RG_W_PL(_pxSGMII->pcs2_base[0],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa00 ,0xc9cc000 );
		//#4
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb474 ,0x0 );
		//#5 S1
		RG_W_PL(_pxSGMII->an_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x10 ,0x4001 );
		RG_W_PL(_pxSGMII->ra_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x18 ,0x100009c );
		RG_W_PL(_pxSGMII->ra_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x20 ,0x11 );
		RG_W_PL(_pxSGMII->ra_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x4 ,0x50f010f );
		RG_W_PL(_pxSGMII->pcs2_base[0],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xb5c ,0x7 );
		RG_W_PL(_pxSGMII->pcs2_base[0],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa14 ,0x13 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[0],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x14c ,0x1 );
		RG_W_PL(_pxSGMII->an_base[0],SGMII_AN_BASE_OFFSET,(RgAddr) 0x34 ,0x31120009 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[0],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x14 ,0x0 );
		RG_W_PL(_pxSGMII->pcs2_base[0],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa20 ,0x113 );
		//#6 S2
		RG_W_PL(_pxSGMII->pcs2_base[0],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa24 ,0x0 );
	} else {
		RG_W_PL(_pxSGMII->ra_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x0 ,0xc000c00 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x0 ,0x12040000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x4c ,0xff0000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1c ,0x3000004 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb828 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x20 ,0x30000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x24 ,0x5010100 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x3c ,0x820082 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x38 ,0x10100 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x40 ,0x101031b );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x30 ,0x305 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x4 ,0x180000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x8 ,0x101f0a );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xc ,0x2ff0000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x2c ,0x4010100 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb800 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb79c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x14 ,0x10000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x10 ,0x1000300 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x50 ,0x10010 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x28 ,0x10400 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x8c ,0x101031b );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x6c ,0x400 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x68 ,0x1000001 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb854 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x70 ,0x3000003 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x74 ,0x3010000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x88 ,0x820082 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x84 ,0x10000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x54 ,0xc000001 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x58 ,0x51f0500 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x5c ,0xff000000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x7c ,0x1030000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x80 ,0x40404 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb798 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb794 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x60 ,0x30003 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x64 ,0x1000001 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x9c ,0x10010 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x78 ,0x1040009 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc414 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xe8 ,0x10400 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc874 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc77c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc910 ,0x0 );    
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc778 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc780 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc260 ,0x0 );		
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc178 ,0x20403 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc184 ,0x40003ff );		
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x234 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x238 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x200 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x228 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x208 ,0x8 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc320 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc004 ,0xc100a00 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc48c ,0x1000203 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1bc ,0x100 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc814 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1f0 ,0x7 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1ec ,0x60000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1e8 ,0x10000 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc80c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc88c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc768 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc390 ,0x100010 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc394 ,0x19000d );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc39c ,0x3307 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1b4 ,0xcaab1030 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc100 ,0xc80064 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc08c ,0x101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc104 ,0x2 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc090 ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc09c ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc094 ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc098 ,0x3e80002 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc76c ,0x0 );		
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1c8 ,0x2000000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1d8 ,0x4010808 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1dc ,0x80606 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc120 ,0x503 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc088 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc38c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc000 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc33c ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc330 ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1fc ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc824 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc81c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc894 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc84c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc34c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1f8 ,0x40000 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1f4 ,0x2 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc350 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc16c ,0x0 );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1b8 ,0x100000a );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1ac ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc818 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc460 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc150 ,0x19000d );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc14c ,0x100010 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc158 ,0x3307 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc154 ,0x19000d );
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0x1d4 ,0x0 );
        RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) 0xf4 ,0x0 );        
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc820 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc794 ,0x0 );
		//RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc530 ,0xffff0300 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc19c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc174 ,0x4010000 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc308 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc15c ,0x700 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc118 ,0xa000a01 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc204 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc328 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc334 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc31c ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc318 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc324 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc110 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc108 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc30c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc114 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc10c ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc304 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc32c ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc338 ,0x1010101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc084 ,0x101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc200 ,0x101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc208 ,0x10101 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc144 ,0x10 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc360 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc898 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc840 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc83c ,0x0 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[1],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x100 ,0x10001 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x900 ,0x2040 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xb2c ,0x4c4c );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc8 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbcc ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe0 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb360 ,0x0 );
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) 0xb380 ,0x18000600 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0x930 ,0xc );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf8 ,0x6330001 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc474 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe8 ,0x7070707 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbd8 ,0x1010101 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf0 ,0xff );
		//RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbdc ,0x1010100 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbf4 ,0x0 );
		//RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbe4 ,0x1 );
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc47c ,0x10000 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc0 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbc4 ,0x0 );
		//#U2
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc20 ,0x0 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xbfc ,0x1601 );
		RG_W_PL(_pxSGMII->ra_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x2c ,0x4 );
		RG_W_PL(_pxSGMII->pcs1_base[1],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c ,0x0 );
		//#H1
		RG_W_PL(_pxSGMII->pcs2_base[1],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa00 ,0xc9cc000 );
		RG_W_PL(_pxSGMII->pcs2_base[1],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xb04 ,0x80010 );
		RG_W_PL(_pxSGMII->an_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x0 ,0x1140 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[1],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x18 ,0x0 );
		RG_W_PL(_pxSGMII->ra_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x100 ,0x80000000 );
		//#S1
		RG_W_PL(_pxSGMII->pcs2_base[1],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa14 ,0x13 );
		RG_W_PL(_pxSGMII->ra_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x20 ,0x11 );
		RG_W_PL(_pxSGMII->ra_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x18 ,0x100009c );
		RG_W_PL(_pxSGMII->pcs2_base[1],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa20 ,0x113 );
		RG_W_PL(_pxSGMII->an_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x10 ,0x1 );
		RG_W_PL(_pxSGMII->an_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x34 ,0x31120009 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[1],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x14 ,0x0 );
		RG_W_PL(_pxSGMII->multi_sgmii_base[1],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) 0x14c ,0x1 );
		//#S2
		RG_W_PL(_pxSGMII->pcs2_base[1],USXGMII_PCS2_BASE_OFFSET,(RgAddr) 0xa24 ,0x0 );
		RG_W_PL(_pxSGMII->ra_base[1],SGMII_AN_BASE_OFFSET,(RgAddr) 0x4 ,0x50f010f );
		//#
		RG_W_PL(_pxSGMII->pma_base[1],L1_PMA_BASE_OFFSET,(RgAddr) 0xc79c ,0x0 );		
	}
}

inline static void dump(volatile xsgmii_base * _pxSGMII){

}	
	
#endif


#ifndef AIR_PCIE2L_DBG_FUNCTION
#define AIR_PCIE2L_DBG_FUNCTION

#include <asm/delay.h>
	
static void RX_FMeter(u8 xsgmii,u8 Lane);

inline static void RX_OSCAL_READ(volatile p2l_xsgmii_base * _pxSGMII, u8 Lane){
	rg_type_t(HAL_RX_DEBUG_0) RX_DEBUG_0;
    rg_type_t(HAL_RX_TORGS_DEBUG_2) RX_TORGS_DEBUG_2;
    rg_type_t(HAL_RX_TORGS_DEBUG_0) RX_TORGS_DEBUG_0;
    rg_type_t(HAL_RX_TORGS_DEBUG_1) RX_TORGS_DEBUG_1;
    rg_type_t(HAL_RGS_PXP_RX0_OSCAL_FE_VOS) RGS_PXP_RX0_OSCAL_FE_VOS;
    rg_type_t(HAL_RGS_PXP_RX1_OSCAL_FE_VOS) RGS_PXP_RX1_OSCAL_FE_VOS;
	rg_type_t(HAL_ADD_RO_RX2ANA_2) ADD_RO_RX2ANA_2;
	
	RgAddr pma_base;RgAddr pma_start;
	
	u32 ro_pi_cal_data_out = 0;
	u32 ro_dac_do = 0;
	u32 ro_dac_d1 = 0;
	u32 ro_dac_eo = 0;
	u32 ro_dac_e1 = 0;
	u32 ro_dac_eye = 0;
	u32 rgs_pxp_rx_oscal_fe_vos = 0;
	u32 ro_da_xpon_rx_sigdet_os = 0;
	
    if(Lane == 0){
         pma_base  = _pxSGMII->pma_base[0];
         pma_start = L0_PMA_BASE_OFFSET;
    } else {
         pma_base  = _pxSGMII->pma_base[1];
         pma_start = L1_PMA_BASE_OFFSET - 0x1000; //offset os 0x1000
    }  

    RX_DEBUG_0.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x1;
    RG_W_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);
	udelay(10);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x0;
    RG_W_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);

    RX_TORGS_DEBUG_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_TORGS_DEBUG_2);
    ro_pi_cal_data_out = RX_TORGS_DEBUG_2.hal.ro_pi_cal_data_out;

    RX_TORGS_DEBUG_0.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_TORGS_DEBUG_0);
    ro_dac_do = RX_TORGS_DEBUG_0.hal.ro_dac_do;
    ro_dac_d1 = RX_TORGS_DEBUG_0.hal.ro_dac_d1;
    ro_dac_eo = RX_TORGS_DEBUG_0.hal.ro_dac_eo;
    ro_dac_e1 = RX_TORGS_DEBUG_0.hal.ro_dac_e1;

    RX_TORGS_DEBUG_1.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_TORGS_DEBUG_1);
    ro_dac_eye = RX_TORGS_DEBUG_1.hal.ro_dac_eye;

	if (Lane == 0)
	{
		RGS_PXP_RX0_OSCAL_FE_VOS.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RGS_PXP_RX0_OSCAL_FE_VOS);
		rgs_pxp_rx_oscal_fe_vos = RGS_PXP_RX0_OSCAL_FE_VOS.hal.rgs_pxp_rx0_oscal_fe_vos;
	}
	else
	{
		RGS_PXP_RX1_OSCAL_FE_VOS.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RGS_PXP_RX1_OSCAL_FE_VOS);
		rgs_pxp_rx_oscal_fe_vos = RGS_PXP_RX1_OSCAL_FE_VOS.hal.rgs_pxp_rx1_oscal_fe_vos;
	}

    ADD_RO_RX2ANA_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_RO_RX2ANA_2);
    ro_da_xpon_rx_sigdet_os = ADD_RO_RX2ANA_2.hal.ro_da_xpon_rx_sigdet_os;	

	printk("ro_pi_cal_data_out = 0x%x\n",ro_pi_cal_data_out);
	printk("ro_dac_do = 0x%x\n",ro_dac_do);
	printk("ro_dac_d1 = 0x%x\n",ro_dac_d1);
	printk("ro_dac_eo = 0x%x\n",ro_dac_eo);
	printk("ro_dac_e1 = 0x%x\n",ro_dac_e1);
	printk("ro_dac_eye = 0x%x\n",ro_dac_eye);
	printk("rgs_pxp_rx_oscal_fe_vos = 0x%x\n",rgs_pxp_rx_oscal_fe_vos);
	printk("ro_da_xpon_rx_sigdet_os = 0x%x\n",ro_da_xpon_rx_sigdet_os);
}

inline static void xSGMII_RX_OSCAL_Read_and_Sync_Test(volatile p2l_xsgmii_base * _pxSGMII, u8 xsgmii, u8 flag, u8 Lane){
	u32 sync[100]={};
	u32 an[100]={};
	u8 sync_cnt = 0;
	u8 i = 0;
	printk("RX_OSCAL_Result_Read\n");
	
	RX_OSCAL_READ(_pxSGMII,Lane);	

	for (i =0;i<100;i++)
	{
		if(xsgmii==USXGMII)
		{
			sync[i] = RG_R_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);
			if (sync[i] == 0x100d) sync_cnt+=1;
			RG_W_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x01);
			RG_W_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,0x00);
			an[i] = RG_R_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
			udelay(10);
		}
		else
		{
			sync[i] = RG_R_PL(_pxSGMII->pcs2_base[Lane],USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_state_2);
			if (((sync[i]>>5)&1) == 1) sync_cnt+=1;
			an[i] = RG_R_PL(_pxSGMII->an_base[Lane],SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_5);
			udelay(10);
		}
	}
	printk("\nSync = %d in 100 rounds\n\n",sync_cnt);

	if (flag == 1)
	{
		for (i =0;i<100;i++)
		{
			printk("Round %d : 0x%x, AN= 0x%x\n",i+1,sync[i],an[i]);
		}
	}
}

inline static void xSGMII_Dbg_Cal2(volatile p2l_xsgmii_base * _pxSGMII, u8 xsgmii, u8 Lane){
    rg_type_t(HAL_RGS_PXP_JCPLL_KBAND_CODE) RGS_PXP_JCPLL_KBAND_CODE;
    rg_type_t(HAL_rg_usxgmii_an_control_6) rg_usxgmii_an_control_6;
    rg_type_t(HAL_ADD_DIG_RESERVE_0) ADD_DIG_RESERVE_0;
    rg_type_t(HAL_ADD_DIG_RO_RESERVE_2) ADD_DIG_RO_RESERVE_2;
    rg_type_t(HAL_SS_RX_FLL_6) SS_RX_FLL_6;
    rg_type_t(HAL_RX_DEBUG_0) RX_DEBUG_0;
    rg_type_t(HAL_ADD_LCPLL_RO_1) ADD_LCPLL_RO_1;
    rg_type_t(HAL_RX_TORGS_DEBUG_12) RX_TORGS_DEBUG_12;
    rg_type_t(HAL_SS_RX_FLL_9) SS_RX_FLL_9;
    rg_type_t(HAL_SS_RX_FLL_a) SS_RX_FLL_a;
    rg_type_t(HAL_RO_RX_FREQDET) RO_RX_FREQDET;
	
	rg_type_t(HAL_msg_rx_sts_15) _msg_rx_sts_15;
//	rg_type_t(HAL_ro_usxgmii_an_stats_0)ro_usxgmii_an_stats_0;
	//RGDATA_t rg;
	
	RgAddr pma_base;RgAddr pma_start;
	//u8 jc,tx,pcs_rdy,rx_rdy1,rx_os_rdy,rx_injosc_rdy,ad_pxp_cdr_lpf_lck2data,fblock,ad_pxp_rx_sigdet_out;
	u16 sync = 0;//,ad_pxp_cdr_pr_idac,ro_idacf,ro_fll_idac,ro_da_idacf;
	u32 ANability = 0;//,probe1,ad_pxp_cdr_lpf_snapshotvalue,probe3,probe4;

    if(Lane == 0){
        pma_base = _pxSGMII->pma_base[0];
        pma_start = L0_PMA_BASE_OFFSET;
    } else {
        pma_base = _pxSGMII->pma_base[1];
        pma_start = L1_PMA_BASE_OFFSET - 0x1000; //offset os 0x1000
    }	
	switch (xsgmii)
	{
		case USXGMII:			
			sync = RG_R_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_base_r_10gb_t_pcs_stus1);

			//RG_W_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c,0x1);
			//RG_W_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) 0xc1c,0x0);
			
			rg_usxgmii_an_control_6.dat.value =RG_R_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6);
			rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 0x1;
			RG_W_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
			rg_usxgmii_an_control_6.hal.rg_tog_pcs_autoneg_sts = 0x0;
			RG_W_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _rg_usxgmii_an_control_6,rg_usxgmii_an_control_6.dat.value);
	
			ANability = RG_R_PL(_pxSGMII->pcs1_base[Lane],USXGMII_PCS1_BASE_OFFSET,(RgAddr) _ro_usxgmii_an_stats_0);
			break;
		case HSGMII:	
		case SGMII:
			sync = RG_R_PL(_pxSGMII->pcs2_base[Lane],USXGMII_PCS2_BASE_OFFSET,(RgAddr) _rg_hsgmii_pcs_state_2);
			_msg_rx_sts_15.dat.value = RG_R_PL(_pxSGMII->multi_sgmii_base[Lane],USXGMII_MULTI_SGMII_BASE_OFFSET,(RgAddr) msg_rx_sts_15);
			//printk("link status %x,link spd %x\n",_msg_rx_sts_15.hal.ro_lnk_sts_p0,_msg_rx_sts_15.hal.ro_speed_sts_p0);
			
			//ANability = _msg_rx_sts_15.hal.ro_speed_sts_p0;
			ANability = RG_R_PL(_pxSGMII->an_base[Lane],SGMII_AN_BASE_OFFSET,(RgAddr) _sgmii_reg_an_5);
			break;	
	}
	printk("pcs---------------------------------------------\n");
	printk("sync 0x%x\n",sync);
	printk("AN ability 0x%x\n",ANability);

    RGS_PXP_JCPLL_KBAND_CODE.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RGS_PXP_JCPLL_KBAND_CODE);
	printk("pll---------------------------------------------\n");
	printk("load band 0x%x, 0x%x\n",RGS_PXP_JCPLL_KBAND_CODE.hal.rgs_pxp_jcpll_kband_code,RGS_PXP_JCPLL_KBAND_CODE.hal.rgs_pxp_txpll_kband_code);

    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= (0xd << 16);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_DIG_RO_RESERVE_2);
    SS_RX_FLL_6.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _SS_RX_FLL_6);
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_1_latch_en = 0x0;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_2_latch_en = 0x0;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_3_latch_en = 0x0;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_4_latch_en = 0x0;
	RG_W_PL(pma_base,pma_start,(RgAddr) _SS_RX_FLL_6,SS_RX_FLL_6.dat.value);
	udelay(100);
	SS_RX_FLL_6.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _SS_RX_FLL_6);
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_1_latch_en = 0x1;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_2_latch_en = 0x1;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_3_latch_en = 0x1;
    SS_RX_FLL_6.hal.ro_lnx_sw_fll_ro_4_latch_en = 0x1;
    RG_W_PL(pma_base,pma_start,(RgAddr) _SS_RX_FLL_6,SS_RX_FLL_6.dat.value);
    RX_DEBUG_0.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x1;
    RG_W_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);
	udelay(100);
    RX_DEBUG_0.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0);
    RX_DEBUG_0.hal.rg_ro_toggle = 0x0;
    RG_W_PL(pma_base,pma_start,(RgAddr) _RX_DEBUG_0,RX_DEBUG_0.dat.value);
    ADD_LCPLL_RO_1.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_LCPLL_RO_1);
    RX_TORGS_DEBUG_12.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RX_TORGS_DEBUG_12);
	printk("rx----------------------------------------------\n");
	if(Lane == 0)
		printk("pcs_rdy=  0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 5) & 0x1);
	else
		printk("pcs_rdy=  PCIE1 pcs_rdy probe unknown\n");
	printk("rx rdy=  0x%x\n",(ADD_LCPLL_RO_1.hal.ro_rx_sequence >> 0) & 0x1);
	printk("rx_os_rdy=  0x%x\n",(ADD_LCPLL_RO_1.hal.ro_rx_sequence >> 2) & 0x1);
	printk("rx_injosc_rdy=  0x%x\n",RX_TORGS_DEBUG_12.hal.ro_injosc_rdy);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= ((0x1+Lane*0x15) << 16);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("cdr cal---------------------------------------------\n");
	printk("probe1 = 0x%x\n",ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2);
	printk("ad_pxp_cdr_pr_idac = 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 19) & 0x1fff);
	printk("fll ad_pxp_cdr_lpf_snapshotvalue = 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 0) & 0x7ffff);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= ((0x0+Lane*0x15) << 16);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("ad_pxp_cdr_lpf_lck2data 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 2) & 0x1);
	
    SS_RX_FLL_9.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _SS_RX_FLL_9);
    SS_RX_FLL_a.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _SS_RX_FLL_a);
    RO_RX_FREQDET.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _RO_RX_FREQDET);
	printk("ro_idacf 0x%x\n",SS_RX_FLL_9.hal.ro_idacf);
	printk("ro_fll_idac 0x%x\n",SS_RX_FLL_9.hal.ro_fll_idac);
	printk("ro_da_idacf 0x%x\n",SS_RX_FLL_a.hal.ro_da_idac);
	printk("fblock 0x%x\n",RO_RX_FREQDET.hal.ro_fbck_lock);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= ((0x3+Lane*0x15) << 16);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("FE TOP---------------------------------------------\n");
	printk("probe3 = 0x%x\n",ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2);
	printk("ad_pxp_rx_sigdet_out = 0x%x\n",(ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2 >> 8) & 0x1);
	
    ADD_DIG_RESERVE_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0);
	ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 &= ~(0x1f << 16);
    ADD_DIG_RESERVE_0.hal.rg_dig_reserve_0 |= ((0x4+Lane*0x15) << 16);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _ADD_DIG_RESERVE_0,ADD_DIG_RESERVE_0.dat.value);
    ADD_DIG_RO_RESERVE_2.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_DIG_RO_RESERVE_2);
	printk("probe4 = 0x%x\n",ADD_DIG_RO_RESERVE_2.hal.ro_dig_reserve_2);
}
	
inline static void xSGMII_R2T(volatile p2l_xsgmii_base * _pxSGMII, u8 xsgmii, u8 delay, u8 Lane){
    //rg_type_t(HAL_rg_force_da_pxp_cdr_lpf_lck2data) rg_force_da_pxp_cdr_lpf_lck2data;
    //rg_type_t(HAL_BISTCTL_CONTROL) BISTCTL_CONTROL;
    rg_type_t(HAL_SS_LCPLL_TDC_PCW_1) SS_LCPLL_TDC_PCW_1;
    rg_type_t(HAL_SS_LCPLL_TDC_PCW_2) SS_LCPLL_TDC_PCW_2;
    rg_type_t(HAL_RG_PXP_TXPLL_SDM_DI_LS) RG_PXP_TXPLL_SDM_DI_LS;
    rg_type_t(HAL_RG_PXP_TXPLL_REFIN_DIV) RG_PXP_TXPLL_REFIN_DIV;
    rg_type_t(HAL_RG_PXP_TXPLL_SDM_OUT) RG_PXP_TXPLL_SDM_OUT;
    rg_type_t(HAL_RG_PXP_TXPLL_POSTDIV_EN) RG_PXP_TXPLL_POSTDIV_EN;
    rg_type_t(HAL_RG_PXP_TXPLL_POSTDIV_D256_EN) RG_PXP_TXPLL_POSTDIV_D256_EN;
    rg_type_t(HAL_RG_PXP_TDC_RXCK_SEL) RG_PXP_TDC_RXCK_SEL;
    rg_type_t(HAL_RG_PXP_RX0_PHYCK_DIV) RG_PXP_RX0_PHYCK_DIV;
    rg_type_t(HAL_RG_PXP_RX1_PHYCK_DIV) RG_PXP_RX1_PHYCK_DIV;
//    rg_type_t(HAL_RG_PXP_TX0_MULTLANE_EN) RG_PXP_TX0_MULTLANE_EN;
//    rg_type_t(HAL_RG_PXP_TX1_MULTLANE_EN) RG_PXP_TX1_MULTLANE_EN;
//    rg_type_t(HAL_SS_LCPLL_PWCTL_SETTING_0) SS_LCPLL_PWCTL_SETTING_0;
    rg_type_t(HAL_SS_LCPLL_PWCTL_SETTING_1) SS_LCPLL_PWCTL_SETTING_1;
    rg_type_t(HAL_SS_DA_XPON_PWDB_0) SS_DA_XPON_PWDB_0;
    rg_type_t(HAL_RG_PXP_PLL_CMN_RESERVE0) RG_PXP_PLL_CMN_RESERVE0;
    rg_type_t(HAL_rg_force_da_pxp_cdr_pr_idac) rg_force_da_pxp_cdr_pr_idac;
    rg_type_t(HAL_SS_LCPLL_TDC_FLT_1) SS_LCPLL_TDC_FLT_1;
    rg_type_t(HAL_SS_LCPLL_TDC_FLT_3) SS_LCPLL_TDC_FLT_3;
    rg_type_t(HAL_SS_LCPLL_TDC_FLT_5) SS_LCPLL_TDC_FLT_5;
    rg_type_t(HAL_SS_LCPLL_TDC_PW_4) SS_LCPLL_TDC_PW_4;
    rg_type_t(HAL_SS_LCPLL_TDC_PW_0) SS_LCPLL_TDC_PW_0;
    rg_type_t(HAL_ADD_XPON_MODE_1) ADD_XPON_MODE_1;	
    RgAddr pma_base;RgAddr pma_start;
	u8 i,j=0;
    if(Lane == 0){
        pma_base = _pxSGMII->pma_base[0];
        pma_start = L0_PMA_BASE_OFFSET;
    } else {
        pma_base = _pxSGMII->pma_base[1];
        pma_start = L1_PMA_BASE_OFFSET - 0x1000; //offset os 0x1000
    }
		
	// turn it off at the beginning ***
    ADD_XPON_MODE_1.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_XPON_MODE_1);
    ADD_XPON_MODE_1.hal.rg_r2t_fifo_en = 0x0;
    ADD_XPON_MODE_1.hal.rg_r2t_mode = 0x0;
    ADD_XPON_MODE_1.hal.rg_tx_bist_gen_en = 0x0;
	
    RG_W_PL(pma_base,pma_start,(RgAddr) _ADD_XPON_MODE_1,ADD_XPON_MODE_1.dat.value);
	SS_LCPLL_TDC_PW_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0);
    SS_LCPLL_TDC_PW_0.hal.rg_lcpll_tdc_dig_pwdb = 0x0;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0,SS_LCPLL_TDC_PW_0.dat.value);		
	// turn it off at the beginning ***
	
    //rg_force_da_pxp_cdr_lpf_lck2data.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data);
    //rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_sel_da_pxp_cdr_lpf_lck2data = 0x1;
    //rg_force_da_pxp_cdr_lpf_lck2data.hal.rg_force_da_pxp_cdr_lpf_lck2data = 0x1;
    //RG_W_PL(pma_base,pma_start,(RgAddr) _rg_force_da_pxp_cdr_lpf_lck2data,rg_force_da_pxp_cdr_lpf_lck2data.dat.value);

    //BISTCTL_CONTROL.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _BISTCTL_CONTROL);
    //BISTCTL_CONTROL.hal.rg_bistctl_pat_rx_check_en = 0x0;
    //RG_W_PL(pma_base,pma_start,(RgAddr) _BISTCTL_CONTROL,BISTCTL_CONTROL.dat.value);
	
    SS_LCPLL_TDC_PCW_1.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_1);
    SS_LCPLL_TDC_PCW_2.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_2);
	
	if(xsgmii == USXGMII)
	{
		SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x10800000;
		SS_LCPLL_TDC_PCW_2.hal.rg_lcpll_pon_hrdds_pcw_ncpo_epon = 0x10800000;
	}
	else if (xsgmii == HSGMII)
	{
		SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x14000000;
		SS_LCPLL_TDC_PCW_2.hal.rg_lcpll_pon_hrdds_pcw_ncpo_epon = 0x14000000;
	}
	else  // SGMII
	{
		SS_LCPLL_TDC_PCW_1.hal.rg_lcpll_pon_hrdds_pcw_ncpo_gpon = 0x10000000;
		SS_LCPLL_TDC_PCW_2.hal.rg_lcpll_pon_hrdds_pcw_ncpo_epon = 0x10000000;
	}
	
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_1,SS_LCPLL_TDC_PCW_1.dat.value);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PCW_2,SS_LCPLL_TDC_PCW_2.dat.value);

    RG_PXP_TXPLL_SDM_DI_LS.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_LS);
    RG_PXP_TXPLL_SDM_DI_LS.hal.rg_pxp_txpll_sdm_ifm = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_DI_LS,RG_PXP_TXPLL_SDM_DI_LS.dat.value);

    RG_PXP_TXPLL_REFIN_DIV.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_DIV);
    RG_PXP_TXPLL_REFIN_DIV.hal.rg_pxp_txpll_sdm_di_en = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_REFIN_DIV,RG_PXP_TXPLL_REFIN_DIV.dat.value);

    RG_PXP_TXPLL_SDM_OUT.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_OUT);
    RG_PXP_TXPLL_SDM_OUT.hal.rg_pxp_txpll_sdm_hren = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_SDM_OUT,RG_PXP_TXPLL_SDM_OUT.dat.value);

    RG_PXP_TXPLL_POSTDIV_EN.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_POSTDIV_EN);
    RG_PXP_TXPLL_POSTDIV_EN.hal.rg_pxp_txpll_postdiv_en = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_POSTDIV_EN,RG_PXP_TXPLL_POSTDIV_EN.dat.value);
	
	if(xsgmii == HSGMII)
	{
		RG_PXP_TXPLL_POSTDIV_D256_EN.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_POSTDIV_D256_EN);
		RG_PXP_TXPLL_POSTDIV_D256_EN.hal.rg_pxp_txpll_postdiv_d256_en = 0x1;
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TXPLL_POSTDIV_D256_EN,RG_PXP_TXPLL_POSTDIV_D256_EN.dat.value);
	}
	
	RG_PXP_TDC_RXCK_SEL.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TDC_RXCK_SEL);
	RG_PXP_TDC_RXCK_SEL.hal.rg_pxp_tdc_rxck_sel = Lane;
	RG_PXP_TDC_RXCK_SEL.hal.rg_pxp_tdc_ft_ck_en = 0x0;
	RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TDC_RXCK_SEL,RG_PXP_TDC_RXCK_SEL.dat.value);
	
	if(Lane==0)
	{
		RG_PXP_RX0_PHYCK_DIV.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX0_PHYCK_DIV);
		RG_PXP_RX0_PHYCK_DIV.hal.rg_pxp_rx0_tdc_ck_sel = 0x1;
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX0_PHYCK_DIV,RG_PXP_RX0_PHYCK_DIV.dat.value);
		
		//RG_PXP_TX0_MULTLANE_EN.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX0_MULTLANE_EN);
		//RG_PXP_TX0_MULTLANE_EN.hal.rg_pxp_tx0_tdc_ck_sel = 0x1;
		//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX0_MULTLANE_EN,RG_PXP_TX0_MULTLANE_EN.dat.value);
	}
	else      // Lane 1
	{
		RG_PXP_RX1_PHYCK_DIV.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX1_PHYCK_DIV);
		RG_PXP_RX1_PHYCK_DIV.hal.rg_pxp_rx1_tdc_ck_sel = 0x1;
		RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_RX1_PHYCK_DIV,RG_PXP_RX1_PHYCK_DIV.dat.value);
		
		//RG_PXP_TX1_MULTLANE_EN.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX1_MULTLANE_EN);
		//RG_PXP_TX1_MULTLANE_EN.hal.rg_pxp_tx1_tdc_ck_sel = 0x1;
		//RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_TX1_MULTLANE_EN,RG_PXP_TX1_MULTLANE_EN.dat.value);
		
		if(xsgmii == HSGMII) RX_FMeter(xsgmii,0); // Lane0
		
		//SS_LCPLL_PWCTL_SETTING_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0);
		//SS_LCPLL_PWCTL_SETTING_0.hal.rg_sw_lcpll_en = 0x1;
		//RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_0,SS_LCPLL_PWCTL_SETTING_0.dat.value);
		
		SS_LCPLL_PWCTL_SETTING_1.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_1);
		SS_LCPLL_PWCTL_SETTING_1.hal.rg_lcpll_man_pwdb = 0x1;
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_PWCTL_SETTING_1,SS_LCPLL_PWCTL_SETTING_1.dat.value);

		SS_DA_XPON_PWDB_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0);
		//SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pd_pwdb = 0x1;
		//SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pieye_pwdb = 0x1;
		SS_DA_XPON_PWDB_0.hal.rg_da_xpon_cdr_pr_pwdb = 0x1;
		//SS_DA_XPON_PWDB_0.hal.rg_da_xpon_rx_fe_pwdb = 0x1;
		RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_DA_XPON_PWDB_0,SS_DA_XPON_PWDB_0.dat.value);
	}

    RG_PXP_PLL_CMN_RESERVE0.dat.value =RG_R_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_PLL_CMN_RESERVE0);
    RG_PXP_PLL_CMN_RESERVE0.hal.rg_pxp_tdc_autoen = 0x1;
    RG_W_PL(_pxSGMII->phya_base,PXP_BASE_OFFSET,(RgAddr) _RG_PXP_PLL_CMN_RESERVE0,RG_PXP_PLL_CMN_RESERVE0.dat.value);
	
    rg_force_da_pxp_cdr_pr_idac.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac);
    rg_force_da_pxp_cdr_pr_idac.hal.rg_force_sel_da_pxp_txpll_sdm_pcw = 0x0;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _rg_force_da_pxp_cdr_pr_idac,rg_force_da_pxp_cdr_pr_idac.dat.value);

    SS_LCPLL_TDC_FLT_1.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1);
    SS_LCPLL_TDC_FLT_1.hal.rg_lcpll_a_tdc &= ~(0x7 << 0);
    SS_LCPLL_TDC_FLT_1.hal.rg_lcpll_a_tdc |= (0x5 << 0);
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1,SS_LCPLL_TDC_FLT_1.dat.value);

    SS_LCPLL_TDC_FLT_3.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_3);
    SS_LCPLL_TDC_FLT_3.hal.rg_lcpll_ncpo_shift = 0x1;
    SS_LCPLL_TDC_FLT_3.hal.rg_lcpll_ncpo_load = 0x0;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_3,SS_LCPLL_TDC_FLT_3.dat.value);

    SS_LCPLL_TDC_FLT_5.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_5);
    SS_LCPLL_TDC_FLT_5.hal.rg_lcpll_tdc_autopw_ncpo = 0x0;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_5,SS_LCPLL_TDC_FLT_5.dat.value);

    SS_LCPLL_TDC_PW_4.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_4);
    SS_LCPLL_TDC_PW_4.hal.rg_lcpll_tdc_en = 0x1;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_4,SS_LCPLL_TDC_PW_4.dat.value);

    SS_LCPLL_TDC_FLT_1.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1);
    SS_LCPLL_TDC_FLT_1.hal.rg_lcpll_gpon_sel = 0x1;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_FLT_1,SS_LCPLL_TDC_FLT_1.dat.value);
	
	//printk("R2T delay sec = %d ms\n",delay*10);
	for(i=0;i<delay;i++)
	{
		for(j=0;j<10;j++)
			udelay(1000);    // For Lane1 HSGMII
	}
	
    SS_LCPLL_TDC_PW_0.dat.value =RG_R_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0);
    SS_LCPLL_TDC_PW_0.hal.rg_lcpll_tdc_dig_pwdb = 0x1;
    RG_W_PL(_pxSGMII->pma_base[0],L0_PMA_BASE_OFFSET,(RgAddr) _SS_LCPLL_TDC_PW_0,SS_LCPLL_TDC_PW_0.dat.value);

	udelay(1000);
		
    ADD_XPON_MODE_1.dat.value =RG_R_PL(pma_base,pma_start,(RgAddr) _ADD_XPON_MODE_1);
    ADD_XPON_MODE_1.hal.rg_r2t_fifo_en = 0x1;
    ADD_XPON_MODE_1.hal.rg_r2t_mode = 0x1;
    ADD_XPON_MODE_1.hal.rg_tx_bist_gen_en = 0x0;
    RG_W_PL(pma_base,pma_start,(RgAddr) _ADD_XPON_MODE_1,ADD_XPON_MODE_1.dat.value);
}
#endif


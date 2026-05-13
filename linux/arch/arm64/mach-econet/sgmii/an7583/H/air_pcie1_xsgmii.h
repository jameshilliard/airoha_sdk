#ifndef _AIR_PCIE1_XSGMII_
#define _AIR_PCIE1_XSGMII_
u32 PCIE1_xSGMII_API(u8 xsgmii,u8 mod,u8 an, u8 rate);
void PCIE1_xSGMII_Ver(void);
void PCIE1_xSGMII_Disconnect(u8 mod);
void PCIE1_xSGMII_Dbg(u8 xsgmii,u8 mod,u8 an, u8 rate);
#endif


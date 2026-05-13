/***************************************************************
Copyright Statement:

This software/firmware and related documentation (锟斤拷EcoNet Software锟斤拷)
are protected under relevant copyright laws. The information contained herein
is confidential and proprietary to EcoNet (HK) Limited (锟斤拷EcoNet锟斤拷) and/or
its licensors. Without the prior written permission of EcoNet and/or its licensors,
any reproduction, modification, use or disclosure of EcoNet Software, and
information contained herein, in whole or in part, shall be strictly prohibited.

EcoNet (HK) Limited  EcoNet. ALL RIGHTS RESERVED.

BY OPENING OR USING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY
ACKNOWLEDGES AND AGREES THAT THE SOFTWARE/FIRMWARE AND ITS
DOCUMENTATIONS (锟斤拷ECONET SOFTWARE锟斤拷) RECEIVED FROM ECONET
AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON AN 锟斤拷AS IS锟斤拷
BASIS ONLY. ECONET EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
WHETHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE,
OR NON-INFRINGEMENT. NOR DOES ECONET PROVIDE ANY WARRANTY
WHATSOEVER WITH RESPECT TO THE SOFTWARE OF ANY THIRD PARTIES WHICH
MAY BE USED BY, INCORPORATED IN, OR SUPPLIED WITH THE ECONET SOFTWARE.
RECEIVER AGREES TO LOOK ONLY TO SUCH THIRD PARTIES FOR ANY AND ALL
WARRANTY CLAIMS RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
THAT IT IS RECEIVER锟斤拷S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD
PARTY ALL PROPER LICENSES CONTAINED IN ECONET SOFTWARE.

ECONET SHALL NOT BE RESPONSIBLE FOR ANY ECONET SOFTWARE RELEASES
MADE TO RECEIVER锟斤拷S SPECIFICATION OR CONFORMING TO A PARTICULAR
STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND
ECONET'S ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE ECONET
SOFTWARE RELEASED HEREUNDER SHALL BE, AT ECONET'S SOLE OPTION, TO
REVISE OR REPLACE THE ECONET SOFTWARE AT ISSUE OR REFUND ANY SOFTWARE
LICENSE FEES OR SERVICE CHARGES PAID BY RECEIVER TO ECONET FOR SUCH
ECONET SOFTWARE.
***************************************************************/

/************************************************************************
*                  I N C L U D E S
*************************************************************************
*/
#if/*TCSUPPORT_COMPILE*/ defined(TCSUPPORT_FORWARD_LEFT_TO_RIGHT)
#include <asm/tc3162/tc3162.h>
#include <asm/r4kcache.h>
#include <linux/soft_dma.h>

/************************************************************************
*                  D E F I N E S   &   C O N S T A N T S
*************************************************************************
*/

/************************************************************************
*                  M A C R O S
*************************************************************************

/************************************************************************
*                  D A T A   T Y P E S
*************************************************************************
*/


/************************************************************************
*                  E X T E R N A L   D A T A   D E C L A R A T I O N S
*************************************************************************
*/

/************************************************************************
*                  F U N C T I O N   D E C L A R A T I O N S
*************************************************************************
*/


/************************************************************************
*                  P U B L I C   D A T A
*************************************************************************
*/


/************************************************************************
*                  F U N C T I O N   D E F I N I T I O N S
*************************************************************************
*/
void init_offload_short_cut_kernel(void);

#define QDMA_DSCP_MSG_WORD_LENS         4

#if defined(TCSUPPORT_CPU_EN7580) || defined(TCSUPPORT_CPU_EN7527)

typedef struct {
    uint    resv1 ;
    struct {
#if defined(TCSUPPORT_CPU_EN7580)
#ifdef __BIG_ENDIAN
        uint done               : 1 ;
        uint drop_pkt           : 1 ;   /*drop_pkt for TX_Dscp, overflow for RX_Dscp*/
        uint nls                : 1 ;   /*not last packet, for scatter*/
        uint resv2              : 13 ;
        uint pkt_len            : 16 ;
#else
        uint pkt_len            : 16 ;
        uint resv2              : 13 ;
        uint nls                : 1 ;   /*not last packet, for scatter*/
        uint drop_pkt           : 1 ;   /*drop_pkt for TX_Dscp, overflow for RX_Dscp*/
        uint done               : 1 ;
#endif /* __BIG_ENDIAN */
#elif defined(TCSUPPORT_CPU_EN7528)
#ifdef __BIG_ENDIAN
        uint done               : 1 ;
        uint drop_pkt           : 1 ;   /*drop_pkt for TX_Dscp, overflow for RX_Dscp*/
        uint nls                : 1 ;   /*not last packet, for scatter*/
        uint resv2              : 4 ;
        uint no_drop            : 1 ;
        uint resv               : 8 ;
        uint pkt_len            : 16 ;
#else
        uint pkt_len            : 16 ;
        uint resv               : 8 ;
        uint no_drop            : 1 ;    
        uint resv2              : 4 ;
        uint nls                : 1 ;   /*not last packet, for scatter*/
        uint drop_pkt           : 1 ;   /*drop_pkt for TX_Dscp, overflow for RX_Dscp*/
        uint done               : 1 ;
#endif /* __BIG_ENDIAN */
#else /*TCSUPPORT_CPU_EN7516*/
#ifdef __BIG_ENDIAN
        uint done               : 1 ;
        uint overflow           : 1 ;
        uint nls                : 1 ;
        uint resv2              : 13 ;
        uint pkt_len            : 16 ;
#else
        uint pkt_len            : 16 ;
        uint resv2              : 13 ;
        uint nls                : 1 ;
        uint overflow           : 1 ;
        uint done               : 1 ;
#endif /* __BIG_ENDIAN */
#endif
    } ctrl ;
    uint    pkt_addr ;
#ifdef __BIG_ENDIAN
    uint resv3                  : 20 ;
    uint next_idx               : 12 ;
#else
    uint next_idx               : 12 ;
    uint resv3                  : 20 ;
#endif /* __BIG_ENDIAN */
    uint msg[QDMA_DSCP_MSG_WORD_LENS] ;
} QDMA_DMA_DSCP_T ;
#else

typedef struct {
    uint    resv1 ;
    struct {
#ifdef __BIG_ENDIAN
        uint done               : 1 ;
        uint overflow           : 1 ;
        uint resv2              : 14 ;
        uint pkt_len            : 16 ;
#else
        uint pkt_len            : 16 ;
        uint resv2              : 14 ;
        uint overflow           : 1 ;
        uint done               : 1 ;
#endif /* __BIG_ENDIAN */
    } ctrl ;
    uint    pkt_addr ;
#ifdef __BIG_ENDIAN
    uint resv3                  : 20 ;
    uint next_idx               : 12 ;
#else
    uint next_idx               : 12 ;
    uint resv3                  : 20 ;
#endif /* __BIG_ENDIAN */
    uint msg[QDMA_DSCP_MSG_WORD_LENS] ;
} QDMA_DMA_DSCP_T ;
#endif

#define K0_TO_K1(x)             (((uint)(x)) | 0xa0000000)
#define K1_TO_K0(x)             (((uint)(x)) & 0x9fffffff) 
#define PHY_TO_K0(x)            (((uint32)x) | 0x80000000)

QDMA_DMA_DSCP_T __attribute__((aligned(32))) OFFLOAD_QDMA_RxDs[OFFLOAD_RX_RING_SIZE];
QDMA_DMA_DSCP_T __attribute__((aligned(32))) OFFLOAD_QDMA_TxDs[OFFLOAD_TX_RING_SIZE];
OFFLOAD_Data_t __attribute__((aligned(32))) OFFLOAD_Alloc_Data[OFFLOAD_DATA_NUM];

/*volatile*/__DMEM volatile QDMA_DMA_DSCP_T *OFFLOAD_MacrxDescrp = OFFLOAD_QDMA_RxDs;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_Macrx_Begin_Descrp = OFFLOAD_QDMA_RxDs;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_Macrx_End_Descrp = OFFLOAD_QDMA_RxDs + OFFLOAD_RX_RING_SIZE - 1;

/*volatile*/__DMEM volatile QDMA_DMA_DSCP_T *OFFLOAD_QDMA_TxDescrp = OFFLOAD_QDMA_TxDs;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_QDMA_Tx_Begin_Descrp = OFFLOAD_QDMA_TxDs;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_QDMATx_End_Descrp = OFFLOAD_QDMA_TxDs + OFFLOAD_TX_RING_SIZE - 1;
/*volatile*/__DMEM volatile QDMA_DMA_DSCP_T *OFFLOAD_QDMATxOMCIDescrp = OFFLOAD_QDMA_TxDs + OFFLOAD_TX_RING_SIZE;

/*volatile*/__DMEM OFFLOAD_Data_t *OFFLOAD_QDMA_Tx_Data_PTR = OFFLOAD_Alloc_Data;
/*volatile*/__DMEM volatile OFFLOAD_Data_t *OFFLOAD_MAC_Rx_Data_PTR = OFFLOAD_Alloc_Data + OFFLOAD_RX_RING_SIZE;
/*volatile*/__DMEM OFFLOAD_Data_t *OFFLOAD_Data_Begin_PTR = OFFLOAD_Alloc_Data;
/*volatile*/__DMEM OFFLOAD_Data_t *OFFLOAD_Data_End_PTR = OFFLOAD_Alloc_Data + OFFLOAD_DATA_NUM - 1;

unsigned long OFFLOAD_Macrx_Begin_Descrp_Export;  
unsigned long OFFLOAD_QDMATx_Begin_Descrp_Export;
unsigned long OFFLOAD_Data_Begin_PTR_Export;

EXPORT_SYMBOL(OFFLOAD_Macrx_Begin_Descrp_Export);
EXPORT_SYMBOL(OFFLOAD_QDMATx_Begin_Descrp_Export);
EXPORT_SYMBOL(OFFLOAD_Data_Begin_PTR_Export);
EXPORT_SYMBOL(OFFLOAD_MacrxDescrp);
EXPORT_SYMBOL(OFFLOAD_QDMA_TxDescrp);
EXPORT_SYMBOL(OFFLOAD_QDMA_Tx_Begin_Descrp);
EXPORT_SYMBOL(OFFLOAD_MAC_Rx_Data_PTR);
EXPORT_SYMBOL(OFFLOAD_Macrx_Begin_Descrp);
EXPORT_SYMBOL(OFFLOAD_Data_Begin_PTR);

EXPORT_SYMBOL(OFFLOAD_QDMA_Tx_Data_PTR);
EXPORT_SYMBOL(OFFLOAD_Macrx_End_Descrp);
EXPORT_SYMBOL(OFFLOAD_QDMATx_End_Descrp);
EXPORT_SYMBOL(OFFLOAD_Data_End_PTR);

#ifdef TWO_WAY_LEFT_TO_RIGHT
QDMA_DMA_DSCP_T __attribute__((aligned(32))) OFFLOAD_QDMA_RxDs_2[OFFLOAD_RX_RING_SIZE_2];
QDMA_DMA_DSCP_T __attribute__((aligned(32))) OFFLOAD_QDMA_TxDs_2[OFFLOAD_TX_RING_SIZE_2];
OFFLOAD_Data_t __attribute__((aligned(32))) OFFLOAD_Alloc_Data_2[OFFLOAD_DATA_NUM_2];

/*volatile*/__DMEM volatile QDMA_DMA_DSCP_T *OFFLOAD_MacrxDescrp_2 = OFFLOAD_QDMA_RxDs_2;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_Macrx_Begin_Descrp_2 = OFFLOAD_QDMA_RxDs_2;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_Macrx_End_Descrp_2 = OFFLOAD_QDMA_RxDs_2 + OFFLOAD_RX_RING_SIZE_2 - 1;

/*volatile*/__DMEM volatile QDMA_DMA_DSCP_T *OFFLOAD_QDMA_TxDescrp_2 = OFFLOAD_QDMA_TxDs_2;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_QDMA_Tx_Begin_Descrp_2 = OFFLOAD_QDMA_TxDs_2;
/*volatile*/__DMEM QDMA_DMA_DSCP_T *OFFLOAD_QDMATx_End_Descrp_2 = OFFLOAD_QDMA_TxDs_2 + OFFLOAD_TX_RING_SIZE_2 - 1;
/*volatile*/__DMEM volatile QDMA_DMA_DSCP_T *OFFLOAD_QDMATxOMCIDescrp_2 = OFFLOAD_QDMA_TxDs_2 + OFFLOAD_TX_RING_SIZE_2;

/*volatile*/__DMEM OFFLOAD_Data_t *OFFLOAD_QDMA_Tx_Data_PTR_2 = OFFLOAD_Alloc_Data_2;
/*volatile*/__DMEM volatile OFFLOAD_Data_t *OFFLOAD_MAC_Rx_Data_PTR_2 = OFFLOAD_Alloc_Data_2 + OFFLOAD_RX_RING_SIZE_2;
/*volatile*/__DMEM OFFLOAD_Data_t *OFFLOAD_Data_Begin_PTR_2 = OFFLOAD_Alloc_Data_2;
/*volatile*/__DMEM OFFLOAD_Data_t *OFFLOAD_Data_End_PTR_2 = OFFLOAD_Alloc_Data_2 + OFFLOAD_DATA_NUM_2 - 1;

unsigned long OFFLOAD_Macrx_Begin_Descrp_Export_2;  
unsigned long OFFLOAD_QDMATx_Begin_Descrp_Export_2;
unsigned long OFFLOAD_Data_Begin_PTR_Export_2;

EXPORT_SYMBOL(OFFLOAD_Macrx_Begin_Descrp_Export_2);
EXPORT_SYMBOL(OFFLOAD_QDMATx_Begin_Descrp_Export_2);
EXPORT_SYMBOL(OFFLOAD_Data_Begin_PTR_Export_2);
EXPORT_SYMBOL(OFFLOAD_MacrxDescrp_2);
EXPORT_SYMBOL(OFFLOAD_QDMA_TxDescrp_2);
EXPORT_SYMBOL(OFFLOAD_QDMA_Tx_Begin_Descrp_2);
EXPORT_SYMBOL(OFFLOAD_MAC_Rx_Data_PTR_2);
EXPORT_SYMBOL(OFFLOAD_Macrx_Begin_Descrp_2);
EXPORT_SYMBOL(OFFLOAD_Data_Begin_PTR_2);

EXPORT_SYMBOL(OFFLOAD_QDMA_Tx_Data_PTR_2);
EXPORT_SYMBOL(OFFLOAD_Macrx_End_Descrp_2);
EXPORT_SYMBOL(OFFLOAD_QDMATx_End_Descrp_2);
EXPORT_SYMBOL(OFFLOAD_Data_End_PTR_2);
#endif

void (*ReInitQDMATxDSCP_Hook)(void * QDMATxDS_BaseAddr, int QDMATxDS_Size) = NULL;
EXPORT_SYMBOL(ReInitQDMATxDSCP_Hook);
void (*RestoreQDMATxDSCP_Hook)(void) = NULL;
EXPORT_SYMBOL(RestoreQDMATxDSCP_Hook);
int (*QdmaLan_tx_done_Hook)(int amount) = NULL;
EXPORT_SYMBOL(QdmaLan_tx_done_Hook);

void (*ReInitQDMARxDSCP_Hook_2)(void * QDMARxDS_BaseAddr, 
    void * QDMARxData_BaseAddr, int QDMARxDS_Size, int QDMARxData_Size) = NULL;
EXPORT_SYMBOL(ReInitQDMARxDSCP_Hook_2);

void init_offload_short_cut_kernel(void)
{
    printk("init_offload_short_cut_kernel\n");

    OFFLOAD_MacrxDescrp = K0_TO_K1(OFFLOAD_QDMA_RxDs);
    OFFLOAD_Macrx_Begin_Descrp = K0_TO_K1(OFFLOAD_QDMA_RxDs);
    OFFLOAD_Macrx_End_Descrp = K0_TO_K1(OFFLOAD_QDMA_RxDs + OFFLOAD_RX_RING_SIZE - 1);  
    OFFLOAD_QDMA_TxDescrp = K0_TO_K1(OFFLOAD_QDMA_TxDs);
    OFFLOAD_QDMA_Tx_Begin_Descrp = K0_TO_K1(OFFLOAD_QDMA_TxDs);
    OFFLOAD_QDMATx_End_Descrp = K0_TO_K1(OFFLOAD_QDMA_TxDs + OFFLOAD_TX_RING_SIZE - 1);  

    OFFLOAD_QDMA_Tx_Data_PTR = K1_TO_PHY(OFFLOAD_Alloc_Data);
    OFFLOAD_MAC_Rx_Data_PTR = K1_TO_PHY(OFFLOAD_Alloc_Data + OFFLOAD_RX_RING_SIZE);
    OFFLOAD_Data_End_PTR = K1_TO_PHY(OFFLOAD_Alloc_Data + OFFLOAD_DATA_NUM - 1);
    OFFLOAD_Data_Begin_PTR = K1_TO_PHY(OFFLOAD_Alloc_Data);

    OFFLOAD_Macrx_Begin_Descrp_Export = K0_TO_K1(OFFLOAD_Macrx_Begin_Descrp);
    OFFLOAD_QDMATx_Begin_Descrp_Export = OFFLOAD_QDMA_Tx_Begin_Descrp;
    OFFLOAD_Data_Begin_PTR_Export = PHY_TO_K0((unsigned long)OFFLOAD_Data_Begin_PTR);
}
EXPORT_SYMBOL(init_offload_short_cut_kernel);

#ifdef TWO_WAY_LEFT_TO_RIGHT
void init_offload_short_cut_kernel_2(void)
{
    OFFLOAD_MacrxDescrp_2 = K0_TO_K1(OFFLOAD_QDMA_RxDs_2);
    OFFLOAD_Macrx_Begin_Descrp_2 = K0_TO_K1(OFFLOAD_QDMA_RxDs_2);
    OFFLOAD_Macrx_End_Descrp_2 = K0_TO_K1(OFFLOAD_QDMA_RxDs_2 + OFFLOAD_RX_RING_SIZE_2 - 1);  
    OFFLOAD_QDMA_TxDescrp_2 = K0_TO_K1(OFFLOAD_QDMA_TxDs_2);
    OFFLOAD_QDMA_Tx_Begin_Descrp_2 = K0_TO_K1(OFFLOAD_QDMA_TxDs_2);
    OFFLOAD_QDMATx_End_Descrp_2 = K0_TO_K1(OFFLOAD_QDMA_TxDs_2 + OFFLOAD_TX_RING_SIZE_2 - 1);  

    OFFLOAD_QDMA_Tx_Data_PTR_2 = K1_TO_PHY(OFFLOAD_Alloc_Data_2);
    OFFLOAD_MAC_Rx_Data_PTR_2 = K1_TO_PHY(OFFLOAD_Alloc_Data_2 + OFFLOAD_RX_RING_SIZE_2);
    OFFLOAD_Data_End_PTR_2 = K1_TO_PHY(OFFLOAD_Alloc_Data_2 + OFFLOAD_DATA_NUM_2 - 1);
    OFFLOAD_Data_Begin_PTR_2 = K1_TO_PHY(OFFLOAD_Alloc_Data_2);

    OFFLOAD_Macrx_Begin_Descrp_Export_2 = K0_TO_K1(OFFLOAD_Macrx_Begin_Descrp_2);
    OFFLOAD_QDMATx_Begin_Descrp_Export_2 = OFFLOAD_QDMA_Tx_Begin_Descrp_2;
    OFFLOAD_Data_Begin_PTR_Export_2 = PHY_TO_K0((unsigned long)OFFLOAD_Data_Begin_PTR_2);
}
EXPORT_SYMBOL(init_offload_short_cut_kernel_2);
#endif

#endif/*TCSUPPORT_COMPILE*/


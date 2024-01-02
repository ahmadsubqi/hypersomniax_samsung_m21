#ifndef __CMUCAL_QCH_H__
#define __CMUCAL_QCH_H__

#include "../cmucal.h"

/*=================CMUCAL version: S5E9610================================*/

/*=================Q-channel information================================*/

enum qch_id {
	APBIF_GPIO_ALIVE_QCH = QCH_TYPE,
	APBIF_PMU_ALIVE_QCH,
	APBIF_RTC_QCH,
	APBIF_TOP_RTC_QCH,
	APM_CMU_APM_QCH,
	GREBEINTEGRATION_QCH_GREBE,
	GREBEINTEGRATION_QCH_DBG,
	INTMEM_QCH,
	LHM_AXI_P_APM_QCH,
	LHM_AXI_P_APM_GNSS_QCH,
	LHM_AXI_P_APM_MODEM_QCH,
	LHM_AXI_P_APM_SHUB_QCH,
	LHM_AXI_P_APM_WLBT_QCH,
	LHS_AXI_D_APM_QCH,
	LHS_AXI_LP_SHUB_QCH,
	MAILBOX_AP2CP_QCH,
	MAILBOX_AP2CP_S_QCH,
	MAILBOX_AP2GNSS_QCH,
	MAILBOX_AP2SHUB_QCH,
	MAILBOX_AP2WLBT_QCH,
	MAILBOX_APM2AP_QCH,
	MAILBOX_APM2CP_QCH,
	MAILBOX_APM2GNSS_QCH,
	MAILBOX_APM2SHUB_QCH,
	MAILBOX_APM2WLBT_QCH,
	MAILBOX_CP2GNSS_QCH,
	MAILBOX_CP2SHUB_QCH,
	MAILBOX_CP2WLBT_QCH,
	MAILBOX_SHUB2GNSS_QCH,
	MAILBOX_SHUB2WLBT_QCH,
	MAILBOX_WLBT2ABOX_QCH,
	MAILBOX_WLBT2GNSS_QCH,
	PEM_QCH,
	PGEN_LITE_APM_QCH,
	PMU_INTR_GEN_QCH,
	RSTNSYNC_CLK_APM_GREBE_QCH,
	SPEEDY_APM_QCH,
	SYSREG_APM_QCH,
	WDT_APM_QCH,
	BTM_CAM_QCH,
	CAM_CMU_CAM_QCH,
	LHM_AXI_P_CAM_QCH,
	LHS_ACEL_D_CAM_QCH,
	LHS_ATB_CAMISP_QCH,
	SYSREG_CAM_QCH,
	IS6P10P0_CAM_QCH_S_CAM_CSIS0,
	IS6P10P0_CAM_QCH_S_CAM_CSIS1,
	IS6P10P0_CAM_QCH_S_CAM_CSIS2,
	IS6P10P0_CAM_QCH_S_CAM_CSIS3,
	IS6P10P0_CAM_QCH_S_CAM_3AA,
	IS6P10P0_CAM_QCH_S_CAM_PPMU,
	IS6P10P0_CAM_QCH_S_CAM_SMMU,
	IS6P10P0_CAM_QCH_S_CAM0_PGEN_LITE,
	IS6P10P0_CAM_QCH_S_CAM_PDP_CORE,
	IS6P10P0_CAM_QCH_S_CAM_PDP_DMA,
	IS6P10P0_CAM_QCH_S_CAM_RDMA,
	IS6P10P0_CAM_QCH_S_CAM1_PGEN_LITE,
	ADC_CMGP_QCH_S0,
	ADC_CMGP_QCH_S1,
	ADC_CMGP_QCH_ADC,
	CMGP_CMU_CMGP_QCH,
	GPIO_CMGP_QCH,
	I2C_CMGP00_QCH,
	I2C_CMGP01_QCH,
	I2C_CMGP02_QCH,
	I2C_CMGP03_QCH,
	I2C_CMGP04_QCH,
	SYSREG_CMGP_QCH,
	SYSREG_CMGP2CP_QCH,
	SYSREG_CMGP2GNSS_QCH,
	SYSREG_CMGP2PMU_AP_QCH,
	SYSREG_CMGP2PMU_SHUB_QCH,
	SYSREG_CMGP2SHUB_QCH,
	SYSREG_CMGP2WLBT_QCH,
	USI_CMGP00_QCH,
	USI_CMGP01_QCH,
	USI_CMGP02_QCH,
	USI_CMGP03_QCH,
	USI_CMGP04_QCH,
	CMU_TOP_CMUREF_QCH,
	DFTMUX_TOP_QCH_CLK_CSIS0,
	DFTMUX_TOP_QCH_CLK_CSIS1,
	DFTMUX_TOP_QCH_CLK_CSIS2,
	DFTMUX_TOP_QCH_CLK_CSIS3,
	OTP_QCH,
	BAAW_P_GNSS_QCH,
	BAAW_P_MODEM_QCH,
	BAAW_P_SHUB_QCH,
	BAAW_P_WLBT_QCH,
	CCI_550_QCH,
	CORE_CMU_CORE_QCH,
	DIT_QCH,
	GIC400_AIHWACG_QCH,
	LHM_ACEL_D0_ISP_QCH,
	LHM_ACEL_D0_MFC_QCH,
	LHM_ACEL_D1_ISP_QCH,
	LHM_ACEL_D1_MFC_QCH,
	LHM_ACEL_D_CAM_QCH,
	LHM_ACEL_D_DPU_QCH,
	LHM_ACEL_D_FSYS_QCH,
	LHM_ACEL_D_G2D_QCH,
	LHM_ACEL_D_USB_QCH,
	LHM_ACEL_D_VIPX1_QCH,
	LHM_ACEL_D_VIPX2_QCH,
	LHM_ACE_D_CPUCL0_QCH,
	LHM_ACE_D_CPUCL1_QCH,
	LHM_AXI_D0_MODEM_QCH,
	LHM_AXI_D1_MODEM_QCH,
	LHM_AXI_D_ABOX_QCH,
	LHM_AXI_D_APM_QCH,
	LHM_AXI_D_CSSYS_QCH,
	LHM_AXI_D_G3D_QCH,
	LHM_AXI_D_GNSS_QCH,
	LHM_AXI_D_SHUB_QCH,
	LHM_AXI_D_WLBT_QCH,
	LHS_AXI_D0_MIF_CP_QCH,
	LHS_AXI_D0_MIF_CPU_QCH,
	LHS_AXI_D0_MIF_NRT_QCH,
	LHS_AXI_D0_MIF_RT_QCH,
	LHS_AXI_D1_MIF_CP_QCH,
	LHS_AXI_D1_MIF_CPU_QCH,
	LHS_AXI_D1_MIF_NRT_QCH,
	LHS_AXI_D1_MIF_RT_QCH,
	LHS_AXI_P_APM_QCH,
	LHS_AXI_P_CAM_QCH,
	LHS_AXI_P_CPUCL0_QCH,
	LHS_AXI_P_CPUCL1_QCH,
	LHS_AXI_P_DISPAUD_QCH,
	LHS_AXI_P_FSYS_QCH,
	LHS_AXI_P_G2D_QCH,
	LHS_AXI_P_G3D_QCH,
	LHS_AXI_P_GNSS_QCH,
	LHS_AXI_P_ISP_QCH,
	LHS_AXI_P_MFC_QCH,
	LHS_AXI_P_MIF0_QCH,
	LHS_AXI_P_MIF1_QCH,
	LHS_AXI_P_MODEM_QCH,
	LHS_AXI_P_PERI_QCH,
	LHS_AXI_P_SHUB_QCH,
	LHS_AXI_P_USB_QCH,
	LHS_AXI_P_VIPX1_QCH,
	LHS_AXI_P_VIPX2_QCH,
	LHS_AXI_P_WLBT_QCH,
	PDMA_CORE_QCH,
	PGEN_LITE_SIREX_QCH,
	PGEN_PDMA_QCH,
	PPCFW_G3D_QCH,
	PPFW_CORE_MEM0_QCH,
	PPFW_CORE_MEM1_QCH,
	PPFW_CORE_PERI_QCH,
	PPMU_ACE_CPUCL0_QCH,
	PPMU_ACE_CPUCL1_QCH,
	RSTNSYNC_CLK_CORE_BUSP_G3D_OCC_QCH,
	RSTNSYNC_CLK_CORE_BUSP_OCC_QCH,
	RSTNSYNC_CLK_CORE_CCI_OCC_QCH,
	RSTNSYNC_CLK_CORE_G3D_OCC_QCH,
	SFR_APBIF_CMU_TOPC_QCH,
	SIREX_QCH,
	SPDMA_CORE_QCH,
	SYSREG_CORE_QCH,
	TREX_D_CORE_QCH,
	TREX_D_NRT_QCH,
	TREX_P_CORE_QCH,
	BUSIF_HPMCPUCL0_QCH,
	CLUSTER0_QCH_CPU,
	CLUSTER0_QCH_DBG,
	CLUSTER0_QCH_LHS_ACE_D_CPUCL0,
	CMU_CPUCL0_SHORTSTOP_QCH,
	CPUCL0_CMU_CPUCL0_QCH,
	CSSYS_DBG_QCH,
	DUMP_PC_CPUCL0_QCH,
	DUMP_PC_CPUCL1_QCH,
	LHM_AXI_P_CPUCL0_QCH,
	LHS_AXI_D_CSSYS_QCH,
	SECJTAG_QCH,
	SYSREG_CPUCL0_QCH,
	ADM_APB_G_CSSYS_CPUCL1_QCH,
	BUSIF_HPMCPUCL1_QCH,
	CLUSTER1_QCH_CPU,
	CLUSTER1_QCH_DBG,
	CMU_CPUCL1_SHORTSTOP_QCH,
	CPUCL1_CMU_CPUCL1_QCH,
	LHM_AXI_P_CPUCL1_QCH,
	LHS_ACE_D_CPUCL1_QCH,
	SYSREG_CPUCL1_QCH,
	ABOX_QCH_CPU,
	ABOX_QCH_S_ACLK,
	ABOX_QCH_S_BCLK0,
	ABOX_QCH_S_BCLK2,
	ABOX_QCH_S_BCLK1,
	ABOX_QCH_FM,
	ABOX_QCH_S_BCLK_DSIF,
	BTM_ABOX_QCH,
	BTM_DPU_QCH,
	DISPAUD_CMU_DISPAUD_QCH,
	DPU_QCH_S_DPP,
	DPU_QCH_S_DMA,
	DPU_QCH_S_DECON,
	GPIO_DISPAUD_QCH,
	LHM_AXI_P_DISPAUD_QCH,
	LHS_ACEL_D_DPU_QCH,
	LHS_AXI_D_ABOX_QCH,
	PPMU_ABOX_QCH,
	PPMU_DPU_QCH,
	RSTNSYNC_CLK_AUD_CPU_CLKIN_QCH,
	RSTNSYNC_CLK_AUD_CPU_PCLKDBG_QCH,
	SMMU_ABOX_QCH,
	SMMU_DPU_QCH,
	SYSREG_DISPAUD_QCH,
	WDT_AUD_QCH,
	ADM_AHB_SSS_QCH,
	BTM_FSYS_QCH,
	FSYS_CMU_FSYS_QCH,
	GPIO_FSYS_QCH,
	LHM_AXI_P_FSYS_QCH,
	LHS_ACEL_D_FSYS_QCH,
	MMC_CARD_QCH,
	MMC_EMBD_QCH,
	PGEN_LITE_FSYS_QCH,
	PPMU_FSYS_QCH,
	RTIC_QCH,
	SSS_QCH,
	SYSREG_FSYS_QCH,
	UFS_EMBD_QCH_UFS,
	UFS_EMBD_QCH_FMP,
	BTM_G2D_QCH,
	G2D_QCH,
	G2D_CMU_G2D_QCH,
	JPEG_QCH,
	LHM_AXI_P_G2D_QCH,
	LHS_ACEL_D_G2D_QCH,
	MSCL_QCH,
	PGEN100_LITE_G2D_QCH,
	PPMU_G2D_QCH,
	SYSMMU_G2D_QCH,
	SYSREG_G2D_QCH,
	BTM_G3D_QCH,
	BUSIF_HPMG3D_QCH,
	G3D_QCH,
	G3D_CMU_G3D_QCH,
	LHM_AXI_G3DSFR_QCH,
	LHM_AXI_P_G3D_QCH,
	LHS_AXI_D_G3D_QCH,
	LHS_AXI_G3DSFR_QCH,
	PGEN_LITE_G3D_QCH,
	SYSREG_G3D_QCH,
	BTM_ISP0_QCH,
	BTM_ISP1_QCH,
	ISP_CMU_ISP_QCH,
	LHM_ATB_CAMISP_QCH,
	LHM_AXI_P_ISP_QCH,
	LHS_ACEL_D0_ISP_QCH,
	LHS_ACEL_D1_ISP_QCH,
	SYSREG_ISP_QCH,
	IS6P10P0_ISP_QCH_S_ISP_ISP,
	IS6P10P0_ISP_QCH_S_ISP_MCSC,
	IS6P10P0_ISP_QCH_S_ISP_VRA,
	IS6P10P0_ISP_QCH_S_ISP_PPMU_ISP1,
	IS6P10P0_ISP_QCH_S_ISP_PPMU_ISP0,
	IS6P10P0_ISP_QCH_S_ISP_GDC,
	IS6P10P0_ISP_QCH_S_ISP_SMMU_ISP0,
	IS6P10P0_ISP_QCH_S_ISP_SMMU_ISP1,
	IS6P10P0_ISP_QCH_S_ISP_PGEN_LITE_ISP,
	BTM_MFCD0_QCH,
	BTM_MFCD1_QCH,
	LHM_AXI_P_MFC_QCH,
	LHS_ACEL_D0_MFC_QCH,
	LHS_ACEL_D1_MFC_QCH,
	LH_ATB_MFC_QCH_S_SI,
	LH_ATB_MFC_QCH_S_MI,
	MFC_QCH,
	MFC_CMU_MFC_QCH,
	PGEN100_LITE_MFC_QCH,
	PPMU_MFCD0_QCH,
	PPMU_MFCD1_QCH,
	RSTNSYNC_CLK_MFC_LH_ATB_MFC_MI_SW_RESET_QCH,
	RSTNSYNC_CLK_MFC_LH_ATB_MFC_SI_SW_RESET_QCH,
	RSTNSYNC_CLK_MFC_MFC_SW_RESET_QCH,
	RSTNSYNC_CLK_MFC_WFD_SW_RESET_QCH,
	SYSMMU_MFCD0_QCH,
	SYSMMU_MFCD1_QCH,
	SYSREG_MFC_QCH,
	WFD_QCH,
	BUSIF_HPMMIF_QCH,
	CMU_MIF_CMUREF_QCH,
	DMC_QCH,
	LHM_AXI_D_MIF_CP_QCH,
	LHM_AXI_D_MIF_CPU_QCH,
	LHM_AXI_D_MIF_NRT_QCH,
	LHM_AXI_D_MIF_RT_QCH,
	LHM_AXI_P_MIF_QCH,
	MIF_CMU_MIF_QCH,
	PPMU_DMC_CPU_QCH,
	QE_DMC_CPU_QCH,
	SFRAPB_BRIDGE_DDR_PHY_QCH,
	SFRAPB_BRIDGE_DMC_QCH,
	SFRAPB_BRIDGE_DMC_PF_QCH,
	SFRAPB_BRIDGE_DMC_PPMPU_QCH,
	SFRAPB_BRIDGE_DMC_SECURE_QCH,
	SYSREG_MIF_QCH,
	BUSIF_HPMMIF1_QCH,
	CMU_MIF1_CMUREF_QCH,
	DMC1_QCH,
	LHM_AXI_D_MIF1_CP_QCH,
	LHM_AXI_D_MIF1_CPU_QCH,
	LHM_AXI_D_MIF1_NRT_QCH,
	LHM_AXI_D_MIF1_RT_QCH,
	MIF1_CMU_MIF1_QCH,
	BUSIF_TMU_QCH,
	CAMI2C_0_QCH,
	CAMI2C_1_QCH,
	CAMI2C_2_QCH,
	CAMI2C_3_QCH,
	GPIO_PERI_QCH,
	I2C_0_QCH,
	I2C_1_QCH,
	I2C_2_QCH,
	I2C_3_QCH,
	I2C_4_QCH,
	I2C_5_QCH,
	I2C_6_QCH,
	LHM_AXI_P_PERI_QCH,
	MCT_QCH,
	OTP_CON_TOP_QCH,
	PERI_CMU_PERI_QCH,
	PWM_MOTOR_QCH,
	SPI_0_QCH,
	SPI_1_QCH,
	SPI_2_QCH,
	SYSREG_PERI_QCH,
	UART_QCH,
	USI00_I2C_QCH,
	USI00_USI_QCH,
	WDT_CLUSTER0_QCH,
	WDT_CLUSTER1_QCH,
	BAAW_D_SHUB_QCH,
	BAAW_P_APM_SHUB_QCH,
	CM4_SHUB_QCH,
	GPIO_SHUB_QCH,
	I2C_SHUB00_QCH,
	LHM_AXI_LP_SHUB_QCH,
	LHM_AXI_P_SHUB_QCH,
	LHS_AXI_D_SHUB_QCH,
	LHS_AXI_P_APM_SHUB_QCH,
	PDMA_SHUB_QCH,
	PWM_SHUB_QCH,
	SHUB_CMU_SHUB_QCH,
	SWEEPER_D_SHUB_QCH,
	SWEEPER_P_APM_SHUB_QCH,
	SYSREG_SHUB_QCH,
	TIMER_SHUB_QCH,
	USI_SHUB00_QCH,
	WDT_SHUB_QCH,
	BTM_USB_QCH,
	DP_LINK_QCH_DP,
	DP_LINK_QCH_GTC,
	LHM_AXI_P_USB_QCH,
	LHS_ACEL_D_USB_QCH,
	PGEN_LITE_USB_QCH,
	PPMU_USB_QCH,
	SYSREG_USB_QCH,
	USB30DRD_QCH_USB30,
	USB30DRD_QCH_USBPHY_30CTRL_0,
	USB30DRD_QCH_USBPHY_30CTRL_1,
	USB30DRD_QCH_USBPHY_20CTRL,
	USB_CMU_USB_QCH,
	BTM_D_VIPX1_QCH,
	LHM_ATB_VIPX1_QCH,
	LHM_AXI_P_VIPX1_QCH,
	LHS_ACEL_D_VIPX1_QCH,
	LHS_ATB_VIPX1_QCH,
	LHS_AXI_P_VIPX1_LOCAL_QCH,
	PGEN_LITE_VIPX1_QCH,
	PPMU_D_VIPX1_QCH,
	SMMU_D_VIPX1_QCH,
	SYSREG_VIPX1_QCH,
	VIPX1_QCH,
	VIPX1_CMU_VIPX1_QCH,
	BTM_D_VIPX2_QCH,
	LHM_ATB_VIPX2_QCH,
	LHM_AXI_P_VIPX2_QCH,
	LHM_AXI_P_VIPX2_LOCAL_QCH,
	LHS_ACEL_D_VIPX2_QCH,
	LHS_ATB_VIPX2_QCH,
	PGEN_LITE_VIPX2_QCH,
	PPMU_D_VIPX2_QCH,
	SMMU_D_VIPX2_QCH,
	SYSREG_VIPX2_QCH,
	VIPX2_QCH,
	VIPX2_QCH_LOCAL,
	VIPX2_CMU_VIPX2_QCH,
	end_of_qch,
	num_of_qch = end_of_qch - QCH_TYPE,
};

/*=================Controller Option information================================*/

enum option_id {
	CTRL_OPTION_CMU_APM = OPTION_TYPE,
	CTRL_OPTION_CMU_CAM,
	CTRL_OPTION_CMU_CMGP,
	CTRL_OPTION_CMU_TOP,
	CTRL_OPTION_CMU_CORE,
	CTRL_OPTION_CMU_CPUCL0,
	CTRL_OPTION_EMBEDDED_CMU_CPUCL0,
	CTRL_OPTION_CMU_CPUCL1,
	CTRL_OPTION_EMBEDDED_CMU_CPUCL1,
	CTRL_OPTION_CMU_DISPAUD,
	CTRL_OPTION_CMU_FSYS,
	CTRL_OPTION_CMU_G2D,
	CTRL_OPTION_CMU_G3D,
	CTRL_OPTION_CMU_ISP,
	CTRL_OPTION_CMU_MFC,
	CTRL_OPTION_CMU_MIF,
	CTRL_OPTION_CMU_MIF1,
	CTRL_OPTION_CMU_PERI,
	CTRL_OPTION_CMU_SHUB,
	CTRL_OPTION_CMU_USB,
	CTRL_OPTION_CMU_VIPX1,
	CTRL_OPTION_CMU_VIPX2,
	end_of_option,
	num_of_option = end_of_option - OPTION_TYPE,
};

#endif

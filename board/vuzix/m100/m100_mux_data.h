/*
 * (C) Copyright 2010
 * Texas Instruments Incorporated, <www.ti.com>
 *
 *	Balaji Krishnamoorthy	<balajitk@ti.com>
 *	Aneesh V		<aneesh@ti.com>
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */
#ifndef _M100_MUX_DATA_H_
#define _M100_MUX_DATA_H_

#include <asm/arch/mux_omap4.h>

#define SAFE_MODE       M7

const struct pad_conf_entry core_padconf_array_essential[] = {
	    {GPMC_AD8, (PTU | IDIS | M3)},                                  /* M100_NU - gpio_32 */
		{GPMC_AD9, (PTU | IDIS | M3)},                                  /* Charger D1 - gpio_33 */
		{GPMC_AD10, (PTU | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)},        /* M100_CAM_PD - gpio_34 */
		{GPMC_AD11, (PTU | IDIS | M3)},                                 /* M100_NU - gpio_35 */
		{GPMC_AD12, (PTD | IDIS | M3)},                                 /* M100_NU - gpio_36 */
		{GPMC_AD13, (PTD | IDIS | SAFE_MODE)},  /* M100_NU - gpio_37 */
		{GPMC_AD14, (PTD | IDIS | M3)},                                 /* M100_NU - gpio_38 */
		{GPMC_AD15, (PTD | IDIS | M3)},                                 /* M100_NU - gpio_39 */
		{GPMC_A16, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - gpio_40 */
		{GPMC_A17, (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M3)},         /* M100_KPN_RESET# - gpio_41 */
		{GPMC_A18, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - kpd_row6 */
		{GPMC_A19, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - kpd_row7 */
		{GPMC_A20, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - gpio_44 */
		{GPMC_A21, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - gpio_45 */
		{GPMC_A22, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - kpd_col6 */
		{GPMC_A23, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - kpd_col7 */
		{GPMC_A24, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - gpio_48 */
		{GPMC_A25, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - gpio_49 */
		{GPMC_NCS0, (PTU| IEN | M3)},                                   /* IVS_IRQ (IN) - gpio_50 */
		{GPMC_NCS1, (PTU | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - gpio_51 */
		{GPMC_NCS2, (PTU | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - gpio_52 */
		{GPMC_NCS3, (PTU | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - gpio_53 */
		{GPMC_NWP, (PTD | IDIS | M3)},                                  /* M100_NU - gpio_54 */
		{GPMC_CLK, (PTD | IDIS | M3)},                                  /* M100_NU - gpio_55 */
		{GPMC_NADV_ALE, (PTD | IDIS | M3)},                             /* M100_NU - gpio_56 */
		{GPMC_NBE0_CLE, (PTD | IDIS | M3)},                             /* M100_NU - gpio_59 */
		{GPMC_NBE1, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - gpio_60 */
		{GPMC_WAIT0, (PTU | IEN | M3)},                                 /* sdmmc2_nwait0 - gpio_61 */
		{GPMC_WAIT1, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - gpio_62 */
		{C2C_DATA11, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - gpio_100 */
		{C2C_DATA12, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - dsi1_te0 */
		{C2C_DATA13, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - gpio_102 */
		{C2C_DATA14, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - dsi2_te0 */
		{C2C_DATA15, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - gpio_104 */
		{HDMI_HPD, (PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M3)},        /* M100_BUT_VOL_UP - hdmi_hpd */
		{HDMI_CEC, (PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M3)},        /* M100_BUT_VOL_DN - hdmi_cec */
		{HDMI_DDC_SCL, (PTD | IDIS | OFF_EN | OFF_OUT | OFF_OUT_PTD | M3)}, /* M100_V4P0_EN - hdmi_ddc_scl */
		{HDMI_DDC_SDA, (PTU | IDIS | SAFE_MODE)},                       /* M100_NU - SAFEMODE - hdmi_ddc_sda */
		{CSI21_DX0, (IEN | M0)},                                        /* csi21_dx0 */
		{CSI21_DY0, (IEN | M0)},                                        /* csi21_dy0 */
		{CSI21_DX1, (IEN | M0)},                                        /* csi21_dx1 */
		{CSI21_DY1, (IEN | M0)},                                        /* csi21_dy1 */
		{CSI21_DX2, (IEN | M0)},                                        /* csi21_dx2 */
		{CSI21_DY2, (IEN | M0)},                                        /* csi21_dy2 */
		{CSI21_DX3, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi21_dx3 */
		{CSI21_DY3, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi21_dy3 */
		{CSI21_DX4, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi21_dx4 */
		{CSI21_DY4, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi21_dy4 */
		{CSI22_DX0, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi22_dx0 */
		{CSI22_DY0, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi22_dy0 */
		{CSI22_DX1, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi22_dx1 */
		{CSI22_DY1, (PTD | IDIS | SAFE_MODE)},                          /* M100_NU - SAFEMODE - csi22_dy1 */
		{CAM_SHUTTER, (PTD | IDIS | SAFE_MODE)},                        /* M100_NU - SAFEMODE - cam_shutter */
		{CAM_STROBE, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - cam_strobe */
		{CAM_GLOBALRESET, (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M0)},  /* gpio_83 */
		{USBB1_ULPITLL_CLK, (PTD | SAFE_MODE)},                 /* M100_NU - SAFEMODE - hsi1_cawake */
		{USBB1_ULPITLL_STP, (PTD | SAFE_MODE)},                 /* Used for OMAP_TSHUT_GPIO internal to Jorjin Module / gpio_84 */
		{USBB1_ULPITLL_DIR, (PTD | SAFE_MODE)},                 /* M100_NU - SAFEMODE - hsi1_caflag */
		{USBB1_ULPITLL_NXT, (PTD | SAFE_MODE)},                 /* M100_NU - SAFEMODE - hsi1_acready */
		{USBB1_ULPITLL_DAT0, (PTD | IEN | M3)},                         /* WL_IRQ - hsi1_acwake */
		{USBB1_ULPITLL_DAT1, (PTD | SAFE_MODE)},                        /* M100_NU - SAFEMODE - hsi1_acdata */
		{USBB1_ULPITLL_DAT2, (PTD | SAFE_MODE)},                        /* M100_NU - SAFEMODE - hsi1_acflag */
		{USBB1_ULPITLL_DAT3, (OFF_EN | OFF_OUT | OFF_OUT_PD | M3)},     /* BT_EN - hsi1_caready */
		{USBB1_ULPITLL_DAT4, (PTD | SAFE_MODE)},                        /* M100_NU - SAFEMODE - usbb1_ulpiphy_dat4 */
		{USBB1_ULPITLL_DAT5, (PTD | SAFE_MODE)},                        /* M100_NU - SAFEMODE - usbb1_ulpiphy_dat5 */
		{USBB1_ULPITLL_DAT6, (PTD | SAFE_MODE)},                        /* M100_NU - SAFEMODE - usbb1_ulpiphy_dat6 */
		{USBB1_ULPITLL_DAT7, (OFF_EN | OFF_OUT | OFF_OUT_PD | M3)},     /* usbb1_ulpiphy_dat7 - GPIO_95 - Camera LED */
		{USBB1_HSIC_DATA, (PTD | IDIS | SAFE_MODE)},                    /* M100_NU - usbb1_hsic_data */
		{USBB1_HSIC_STROBE, (PTD | IDIS | SAFE_MODE)},                  /* M100_NU - usbb1_hsic_strobe */
		{USBC1_ICUSB_DP, (PTD | IDIS | SAFE_MODE)},                     /* Used for TEMP_ALERT Internally to Jorjin Module / gpio_98 */
		{USBC1_ICUSB_DM, (PTD | IDIS | SAFE_MODE)},                     /* M100_NU - SAFEMODE - usbc1_icusb_dm */
		{ABE_MCBSP2_CLKX, (PTD | IDIS | SAFE_MODE)},                    /* M100_NU - SAFEMODE - abe_mcbsp2_clkx */
		{ABE_MCBSP2_DR, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - abe_mcbsp2_dr */
		{ABE_MCBSP2_DX, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - abe_mcbsp2_dx */
		{ABE_MCBSP2_FSX, (PTD | IDIS | SAFE_MODE)},                     /* M100_NU - SAFEMODE - abe_mcbsp2_fsx */
		{ABE_MCBSP1_CLKX, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},       /* abe_mcbsp1_clkx */
		{ABE_MCBSP1_DR, (IEN | OFF_EN | OFF_OUT_PTD | M0)},             /* abe_mcbsp1_dr */
		{ABE_MCBSP1_DX, (OFF_EN | OFF_OUT_PTD | M0)},                   /* abe_mcbsp1_dx */
		{ABE_MCBSP1_FSX, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},        /* abe_mcbsp1_fsx */
		{ABE_PDM_UL_DATA, (IEN | OFF_EN | OFF_PD | OFF_IN | M1)},       /* abe_pdm_ul_data */
		{ABE_PDM_DL_DATA, (OFF_EN | OFF_OUT_PTD | M1)},                 /* abe_pdm_dl_data */
		{ABE_PDM_FRAME, (IEN | OFF_EN | OFF_PD | OFF_IN | M1)},         /* abe_pdm_frame */
		{ABE_PDM_LB_CLK, (IEN | OFF_EN | OFF_PD | OFF_IN | M1)},        /* abe_pdm_lb_clk */
		{ABE_CLKS, (PTD | IDIS | M3)},                          /* Charger D0 - abe_clks / gpio_118 */
		{ABE_DMIC_CLK1, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - abe_dmic_clk1 */
		{ABE_DMIC_DIN1, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - abe_dmic_din1 */
		{ABE_DMIC_DIN2, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - abe_dmic_din2 */
		{ABE_DMIC_DIN3, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - abe_dmic_din3 */
		{UART2_CTS, (PTU | IEN | M0)},                                  /* uart2_cts */
		{UART2_RTS, (M0)},                                              /* uart2_rts */
		{UART2_RX, (PTU | IEN | M0)},                                   /* uart2_rx */
		{UART2_TX, (M0)},                                               /* uart2_tx */
		{HDQ_SIO, (PTU | IDIS | SAFE_MODE)},                            /* M100_NU - SAFEMODE - gpio_127 */
		{MCSPI1_CLK, (PTD | IDIS | SAFE_MODE)},  /* M100_NU - SAFEMODE - gpio_134 */
		{MCSPI1_SIMO, (PTD | IEN | M3)},                                /* GPS_IRQ - mcspi1_simo */
//      {MCSPI1_CS0, (PTD | IEN | M3)},                         /* M100_HWID[0] - gpio_137 */
		{MCSPI1_CS1, (IEN | M1)},                                       /* uart1_rx - mcspi1_cs1 */
		{MCSPI1_CS2, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - gpio_139 */
		{MCSPI1_CS3, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - gpio_140 */
		{SDMMC5_CLK, (PTU | IEN | OFF_EN | OFF_OUT_PTD | M0)},          /* sdmmc5_clk */
		{SDMMC5_CMD, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},      /* sdmmc5_cmd */
		{SDMMC5_DAT0, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},     /* sdmmc5_dat0 */
		{SDMMC5_DAT1, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},     /* sdmmc5_dat1 */
		{SDMMC5_DAT2, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},     /* sdmmc5_dat2 */
		{SDMMC5_DAT3, (PTU | IEN | OFF_EN | OFF_PD | OFF_IN | M0)},     /* sdmmc5_dat3 */
		{MCSPI4_SIMO, (OFF_EN | OFF_OUT | OFF_OUT_PD | M3)},            /* gpio_152 - LED1_EN */
		{MCSPI4_SOMI, (PTU | IDIS | SAFE_MODE)},                        /* M100_NU - SAFEMODE - mcspi4_somi */
		{MCSPI4_CS0, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - mcspi4_cs0 */
		{UART4_RX, (IEN | M0)},                                         /* uart4_rx */
		{UART4_TX, (M0)},                                               /* uart4_tx */
		{USBB2_ULPITLL_CLK, (PTD | IDIS | SAFE_MODE)},                  /* M100_NU - SAFEMODE - gpio_157 */
		{USBB2_ULPITLL_STP, (PTU | IDIS | SAFE_MODE)},                  /* M100_NU - SAFEMODE - dispc2_data23 */
		{USBB2_ULPITLL_DIR, (PTU | IDIS | SAFE_MODE)},                  /* M100_NU - SAFEMODE - dispc2_data22 */
		{USBB2_ULPITLL_NXT, (PTU | IDIS | SAFE_MODE)},                  /* M100_NU - SAFEMODE - dispc2_data21 */
		{USBB2_ULPITLL_DAT0, (PTU | IDIS | SAFE_MODE)},                 /* M100_NU - SAFEMODE - dispc2_data20 */
		{USBB2_ULPITLL_DAT1, (PTU | IDIS | SAFE_MODE)},                 /* M100_NU - SAFEMODE - dispc2_data19 */
//      {USBB2_ULPITLL_DAT2, (PTU | IEN | M3)},                 /* M100_HWID[2] - gpio_163 */
		{USBB2_ULPITLL_DAT3, (IEN | M5)},                               /* dispc2_data15 */
		{USBB2_ULPITLL_DAT4, (IEN | M5)},                               /* dispc2_data14 */
		{USBB2_ULPITLL_DAT5, (IEN | M5)},                               /* dispc2_data13 */
		{USBB2_ULPITLL_DAT6, (IEN | M5)},                               /* dispc2_data12 */
		{USBB2_ULPITLL_DAT7, (IEN | M5)},                               /* dispc2_data11 */
		{USBB2_HSIC_DATA, (PTD | IDIS | SAFE_MODE)},                    /* M100_NU - SAFEMODE - gpio_169 */
		{USBB2_HSIC_STROBE, (PTD | IDIS | SAFE_MODE)},                  /* M100_NU - SAFEMODE - gpio_170 */
		{UNIPRO_TX0, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_col0 */
		{UNIPRO_TY0, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_col1 */
		{UNIPRO_TX1, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_col2 */
		{UNIPRO_TY1, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_col3 */
		{UNIPRO_TX2, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_col4 */
		{UNIPRO_TY2, (PTD | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_col5 */
		{UNIPRO_RX0, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_row0 */
		{UNIPRO_RY0, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_row1 */
		{UNIPRO_RX1, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_row2 */
		{UNIPRO_RY1, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_row3 */
		{UNIPRO_RX2, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_row4 */
		{UNIPRO_RY2, (PTU | IDIS | SAFE_MODE)},                         /* M100_NU - SAFEMODE - kpd_row5 */
		{FREF_CLK1_OUT, (M0)},                                          /* CAM_MCLK - fref_clk1_out */
		{FREF_CLK2_OUT, (PTD | IDIS | SAFE_MODE)},                      /* M100_NU - SAFEMODE - fref_clk2_out */
		{SYS_NIRQ1, (PTU | IEN | M0)},                                  /* M100_NU - sys_nirq1 */
		{SYS_NIRQ2, (OFF_EN | OFF_OUT | OFF_OUT_PD | M3)},              /* WL_EN - sys_nirq2 */
		{SYS_BOOT0, (PTD | M0)},                                        /* gpio_184 */
		{SYS_BOOT1, (M0)},                                              /* gpio_185 */
		{SYS_BOOT2, (M0)},                                              /* gpio_186 */
		{SYS_BOOT3, (PTD | M0)},                                        /* gpio_187 */
		{SYS_BOOT4, (M0)},                                              /* gpio_188 */
		{SYS_BOOT5, (M0)},                                              /* gpio_189 */
		{DPM_EMU0, (PTU | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - dpm_emu0 */
		{DPM_EMU1, (PTU | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - dpm_emu1 */
		{DPM_EMU2, (PTU | IEN | M3)},                           /* ALS_INT# - gpio_13 */
		{DPM_EMU3, (IEN | M5)},                                         /* dispc2_data10 */
		{DPM_EMU4, (IEN | M5)},                                         /* dispc2_data9 */
		{DPM_EMU5, (PTU | IEN | OFF_EN | OFF_PU | OFF_IN | M3)},        /* M100 BUT_ENTER - dispc2_data16 */
		{DPM_EMU6, (PTD | IDIS | SAFE_MODE)},                           /* M100_NU - SAFEMODE - dispc2_data17 */
		{DPM_EMU7, (IEN | M5)},                                         /* dispc2_hsync */
		{DPM_EMU8, (IEN | M5)},                                         /* dispc2_pclk */
		{DPM_EMU9, (IEN | M5)},                                         /* dispc2_vsync */
		{DPM_EMU10, (IEN | M5)},                                        /* dispc2_de */
		{DPM_EMU11, (IEN | M5)},                                        /* dispc2_data8 */
		{DPM_EMU12, (IEN | M5)},                                        /* dispc2_data7 */
		{DPM_EMU13, (IEN | M5)},                                        /* dispc2_data6 */
		{DPM_EMU14, (IEN | M5)},                                        /* dispc2_data5 */
		{DPM_EMU15, (IEN | M5)},                                        /* dispc2_data4 */
		{DPM_EMU16, (IEN | M5)},                                        /* dispc2_data3 - gpio_27 */
		{DPM_EMU17, (IEN | M5)},                                        /* dispc2_data2 */
		{DPM_EMU18, (IEN | M5)},                                        /* dispc2_data1 */
		{DPM_EMU19, (IEN | M5)},                                        /* dispc2_data0 */
		{USBB1_HSIC_DATA, (PTD | IDIS | M7)},                           /* SAFEMODE / M100_NU */
		{USBB1_HSIC_STROBE, (PTD | IDIS | M7)},                         /* SAFEMODE / M100_NU */
		{USBC1_ICUSB_DP, (IEN | IDIS | M7)},                            /* SAFEMODE / M100_NU */
		{USBC1_ICUSB_DM, (IEN | IDIS | M7)},                            /* SAFEMODE / M100_NU */
		{USBA0_OTG_CE, (PTD | OFF_EN | OFF_PD | OFF_OUT_PTD | M0)},     /* usba0_otg_ce */
		{USBA0_OTG_DP, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},          /* usba0_otg_dp */
		{USBA0_OTG_DM, (IEN | OFF_EN | OFF_PD | OFF_IN | M0)},          /* usba0_otg_dm */

};


const struct pad_conf_entry wkup_padconf_array_essential[] = {

        {PAD0_SIM_IO, (PTD | IDIS | SAFE_MODE)},                        /* M100_NU - SAFEMODE - sim_io */
        {PAD1_SIM_CLK, (PTD | IDIS | SAFE_MODE)},                       /* M100_NU - SAFEMODE - sim_clk */
        {PAD0_SIM_RESET, (PTD | IDIS | SAFE_MODE)},                     /* M100_NU - SAFEMODE - sim_reset */
        {PAD1_SIM_CD, (PTD | IEN | SAFE_MODE)},                         /* M100_NU - SAFEMODE - sim_cd */
        {PAD0_SIM_PWRCTRL, (PTD | IDIS | SAFE_MODE)},                   /* M100_NU - SAFEMODE - sim_pwrctrl */
        {PAD1_FREF_XTAL_IN, (M0)},                                      /* # */
        {PAD0_FREF_SLICER_IN, (M0)},                                    /* fref_slicer_in */
        {PAD1_FREF_CLK_IOREQ, (M0)},                                    /* fref_clk_ioreq */
        {PAD0_FREF_CLK0_OUT, (M2)},                                     /* sys_drm_msecure */
        {PAD1_FREF_CLK3_REQ, (M3)},                                     /* gpio_wk30 - Debug led-1 */
        {PAD0_FREF_CLK3_OUT, (M0)},                                     /* fref_clk3_out */
        {PAD0_FREF_CLK4_OUT, (M3)},                                     /* gpio_wk8 - Debug led-3 */
        {PAD0_SYS_NRESPWRON, (M0)},                                     /* sys_nrespwron */
        {PAD1_SYS_NRESWARM, (M0)},                                      /* sys_nreswarm */
        {PAD0_SYS_PWR_REQ, (PTU | M0)},                                 /* sys_pwr_req */
        {PAD1_SYS_PWRON_RESET, (M3)},                                   /* gpio_wk29 */
        {PAD0_SYS_BOOT6, (IEN | M3)},                                   /* gpio_wk9 */
        {PAD1_SYS_BOOT7, (IEN | M3)},                                   /* gpio_wk10 */


};

const struct pad_conf_entry wkup_padconf_array_essential_4460[] = {

{PAD1_FREF_CLK4_REQ, (M3)}, /* gpio_wk7 for TPS: Mode 3 */

};


#endif /* _M100_MUX_DATA_H_ */

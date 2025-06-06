/* SPDX-License-Identifier: (GPL-2.0-only OR BSD-2-Clause) */
/*
 * Copyright (c) 2024, Qualcomm Innovation Center, Inc. All rights reserved.
 */

#ifndef _DT_BINDINGS_CLK_QCOM_GCC_QCS8300_H
#define _DT_BINDINGS_CLK_QCOM_GCC_QCS8300_H

/* GCC clocks */
#define GCC_GPLL0						0
#define GCC_GPLL0_OUT_EVEN					1
#define GCC_GPLL1						2
#define GCC_GPLL4						3
#define GCC_GPLL7						4
#define GCC_GPLL9						5
#define GCC_AGGRE_NOC_QUPV3_AXI_CLK				6
#define GCC_AGGRE_UFS_PHY_AXI_CLK				7
#define GCC_AGGRE_USB2_PRIM_AXI_CLK				8
#define GCC_AGGRE_USB3_PRIM_AXI_CLK				9
#define GCC_AHB2PHY0_CLK					10
#define GCC_AHB2PHY2_CLK					11
#define GCC_AHB2PHY3_CLK					12
#define GCC_BOOT_ROM_AHB_CLK					13
#define GCC_CAMERA_AHB_CLK					14
#define GCC_CAMERA_HF_AXI_CLK					15
#define GCC_CAMERA_SF_AXI_CLK					16
#define GCC_CAMERA_THROTTLE_XO_CLK				17
#define GCC_CAMERA_XO_CLK					18
#define GCC_CFG_NOC_USB2_PRIM_AXI_CLK				19
#define GCC_CFG_NOC_USB3_PRIM_AXI_CLK				20
#define GCC_DDRSS_GPU_AXI_CLK					21
#define GCC_DISP_AHB_CLK					22
#define GCC_DISP_HF_AXI_CLK					23
#define GCC_DISP_XO_CLK						24
#define GCC_EDP_REF_CLKREF_EN					25
#define GCC_EMAC0_AXI_CLK					26
#define GCC_EMAC0_PHY_AUX_CLK					27
#define GCC_EMAC0_PHY_AUX_CLK_SRC				28
#define GCC_EMAC0_PTP_CLK					29
#define GCC_EMAC0_PTP_CLK_SRC					30
#define GCC_EMAC0_RGMII_CLK					31
#define GCC_EMAC0_RGMII_CLK_SRC					32
#define GCC_EMAC0_SLV_AHB_CLK					33
#define GCC_GP1_CLK						34
#define GCC_GP1_CLK_SRC						35
#define GCC_GP2_CLK						36
#define GCC_GP2_CLK_SRC						37
#define GCC_GP3_CLK						38
#define GCC_GP3_CLK_SRC						39
#define GCC_GP4_CLK						40
#define GCC_GP4_CLK_SRC						41
#define GCC_GP5_CLK						42
#define GCC_GP5_CLK_SRC						43
#define GCC_GPU_CFG_AHB_CLK					44
#define GCC_GPU_GPLL0_CLK_SRC					45
#define GCC_GPU_GPLL0_DIV_CLK_SRC				46
#define GCC_GPU_MEMNOC_GFX_CENTER_PIPELINE_CLK			47
#define GCC_GPU_MEMNOC_GFX_CLK					48
#define GCC_GPU_SNOC_DVM_GFX_CLK				49
#define GCC_GPU_TCU_THROTTLE_AHB_CLK				50
#define GCC_GPU_TCU_THROTTLE_CLK				51
#define GCC_PCIE_0_AUX_CLK					52
#define GCC_PCIE_0_AUX_CLK_SRC					53
#define GCC_PCIE_0_CFG_AHB_CLK					54
#define GCC_PCIE_0_MSTR_AXI_CLK					55
#define GCC_PCIE_0_PHY_AUX_CLK					56
#define GCC_PCIE_0_PHY_AUX_CLK_SRC				57
#define GCC_PCIE_0_PHY_RCHNG_CLK				58
#define GCC_PCIE_0_PHY_RCHNG_CLK_SRC				59
#define GCC_PCIE_0_PIPE_CLK					60
#define GCC_PCIE_0_PIPE_CLK_SRC					61
#define GCC_PCIE_0_PIPE_DIV_CLK_SRC				62
#define GCC_PCIE_0_PIPEDIV2_CLK					63
#define GCC_PCIE_0_SLV_AXI_CLK					64
#define GCC_PCIE_0_SLV_Q2A_AXI_CLK				65
#define GCC_PCIE_1_AUX_CLK					66
#define GCC_PCIE_1_AUX_CLK_SRC					67
#define GCC_PCIE_1_CFG_AHB_CLK					68
#define GCC_PCIE_1_MSTR_AXI_CLK					69
#define GCC_PCIE_1_PHY_AUX_CLK					70
#define GCC_PCIE_1_PHY_AUX_CLK_SRC				71
#define GCC_PCIE_1_PHY_RCHNG_CLK				72
#define GCC_PCIE_1_PHY_RCHNG_CLK_SRC				73
#define GCC_PCIE_1_PIPE_CLK					74
#define GCC_PCIE_1_PIPE_CLK_SRC					75
#define GCC_PCIE_1_PIPE_DIV_CLK_SRC				76
#define GCC_PCIE_1_PIPEDIV2_CLK					77
#define GCC_PCIE_1_SLV_AXI_CLK					78
#define GCC_PCIE_1_SLV_Q2A_AXI_CLK				79
#define GCC_PCIE_CLKREF_EN					80
#define GCC_PCIE_THROTTLE_CFG_CLK				81
#define GCC_PDM2_CLK						82
#define GCC_PDM2_CLK_SRC					83
#define GCC_PDM_AHB_CLK						84
#define GCC_PDM_XO4_CLK						85
#define GCC_QMIP_CAMERA_NRT_AHB_CLK				86
#define GCC_QMIP_CAMERA_RT_AHB_CLK				87
#define GCC_QMIP_DISP_AHB_CLK					88
#define GCC_QMIP_DISP_ROT_AHB_CLK				89
#define GCC_QMIP_VIDEO_CVP_AHB_CLK				90
#define GCC_QMIP_VIDEO_VCODEC_AHB_CLK				91
#define GCC_QMIP_VIDEO_VCPU_AHB_CLK				92
#define GCC_QUPV3_WRAP0_CORE_2X_CLK				93
#define GCC_QUPV3_WRAP0_CORE_CLK				94
#define GCC_QUPV3_WRAP0_S0_CLK					95
#define GCC_QUPV3_WRAP0_S0_CLK_SRC				96
#define GCC_QUPV3_WRAP0_S1_CLK					97
#define GCC_QUPV3_WRAP0_S1_CLK_SRC				98
#define GCC_QUPV3_WRAP0_S2_CLK					99
#define GCC_QUPV3_WRAP0_S2_CLK_SRC				100
#define GCC_QUPV3_WRAP0_S3_CLK					101
#define GCC_QUPV3_WRAP0_S3_CLK_SRC				102
#define GCC_QUPV3_WRAP0_S4_CLK					103
#define GCC_QUPV3_WRAP0_S4_CLK_SRC				104
#define GCC_QUPV3_WRAP0_S5_CLK					105
#define GCC_QUPV3_WRAP0_S5_CLK_SRC				106
#define GCC_QUPV3_WRAP0_S6_CLK					107
#define GCC_QUPV3_WRAP0_S6_CLK_SRC				108
#define GCC_QUPV3_WRAP0_S7_CLK					109
#define GCC_QUPV3_WRAP0_S7_CLK_SRC				110
#define GCC_QUPV3_WRAP1_CORE_2X_CLK				111
#define GCC_QUPV3_WRAP1_CORE_CLK				112
#define GCC_QUPV3_WRAP1_S0_CLK					113
#define GCC_QUPV3_WRAP1_S0_CLK_SRC				114
#define GCC_QUPV3_WRAP1_S1_CLK					115
#define GCC_QUPV3_WRAP1_S1_CLK_SRC				116
#define GCC_QUPV3_WRAP1_S2_CLK					117
#define GCC_QUPV3_WRAP1_S2_CLK_SRC				118
#define GCC_QUPV3_WRAP1_S3_CLK					119
#define GCC_QUPV3_WRAP1_S3_CLK_SRC				120
#define GCC_QUPV3_WRAP1_S4_CLK					121
#define GCC_QUPV3_WRAP1_S4_CLK_SRC				122
#define GCC_QUPV3_WRAP1_S5_CLK					123
#define GCC_QUPV3_WRAP1_S5_CLK_SRC				124
#define GCC_QUPV3_WRAP1_S6_CLK					125
#define GCC_QUPV3_WRAP1_S6_CLK_SRC				126
#define GCC_QUPV3_WRAP1_S7_CLK					127
#define GCC_QUPV3_WRAP1_S7_CLK_SRC				128
#define GCC_QUPV3_WRAP3_CORE_2X_CLK				129
#define GCC_QUPV3_WRAP3_CORE_CLK				130
#define GCC_QUPV3_WRAP3_QSPI_CLK				131
#define GCC_QUPV3_WRAP3_S0_CLK					132
#define GCC_QUPV3_WRAP3_S0_CLK_SRC				133
#define GCC_QUPV3_WRAP3_S0_DIV_CLK_SRC				134
#define GCC_QUPV3_WRAP_0_M_AHB_CLK				135
#define GCC_QUPV3_WRAP_0_S_AHB_CLK				136
#define GCC_QUPV3_WRAP_1_M_AHB_CLK				137
#define GCC_QUPV3_WRAP_1_S_AHB_CLK				138
#define GCC_QUPV3_WRAP_3_M_AHB_CLK				139
#define GCC_QUPV3_WRAP_3_S_AHB_CLK				140
#define GCC_SDCC1_AHB_CLK					141
#define GCC_SDCC1_APPS_CLK					142
#define GCC_SDCC1_APPS_CLK_SRC					143
#define GCC_SDCC1_ICE_CORE_CLK					144
#define GCC_SDCC1_ICE_CORE_CLK_SRC				145
#define GCC_SGMI_CLKREF_EN					146
#define GCC_UFS_PHY_AHB_CLK					147
#define GCC_UFS_PHY_AXI_CLK					148
#define GCC_UFS_PHY_AXI_CLK_SRC					149
#define GCC_UFS_PHY_ICE_CORE_CLK				150
#define GCC_UFS_PHY_ICE_CORE_CLK_SRC				151
#define GCC_UFS_PHY_PHY_AUX_CLK					152
#define GCC_UFS_PHY_PHY_AUX_CLK_SRC				153
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK				154
#define GCC_UFS_PHY_RX_SYMBOL_0_CLK_SRC				155
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK				156
#define GCC_UFS_PHY_RX_SYMBOL_1_CLK_SRC				157
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK				158
#define GCC_UFS_PHY_TX_SYMBOL_0_CLK_SRC				159
#define GCC_UFS_PHY_UNIPRO_CORE_CLK				160
#define GCC_UFS_PHY_UNIPRO_CORE_CLK_SRC				161
#define GCC_USB20_MASTER_CLK					162
#define GCC_USB20_MASTER_CLK_SRC				163
#define GCC_USB20_MOCK_UTMI_CLK					164
#define GCC_USB20_MOCK_UTMI_CLK_SRC				165
#define GCC_USB20_MOCK_UTMI_POSTDIV_CLK_SRC			166
#define GCC_USB20_SLEEP_CLK					167
#define GCC_USB30_PRIM_MASTER_CLK				168
#define GCC_USB30_PRIM_MASTER_CLK_SRC				169
#define GCC_USB30_PRIM_MOCK_UTMI_CLK				170
#define GCC_USB30_PRIM_MOCK_UTMI_CLK_SRC			171
#define GCC_USB30_PRIM_MOCK_UTMI_POSTDIV_CLK_SRC		172
#define GCC_USB30_PRIM_SLEEP_CLK				173
#define GCC_USB3_PRIM_PHY_AUX_CLK				174
#define GCC_USB3_PRIM_PHY_AUX_CLK_SRC				175
#define GCC_USB3_PRIM_PHY_COM_AUX_CLK				176
#define GCC_USB3_PRIM_PHY_PIPE_CLK				177
#define GCC_USB3_PRIM_PHY_PIPE_CLK_SRC				178
#define GCC_USB_CLKREF_EN					179
#define GCC_VIDEO_AHB_CLK					180
#define GCC_VIDEO_AXI0_CLK					181
#define GCC_VIDEO_AXI1_CLK					182
#define GCC_VIDEO_XO_CLK					183

/* GCC power domains */
#define GCC_EMAC0_GDSC						0
#define GCC_PCIE_0_GDSC						1
#define GCC_PCIE_1_GDSC						2
#define GCC_UFS_PHY_GDSC					3
#define GCC_USB20_PRIM_GDSC					4
#define GCC_USB30_PRIM_GDSC					5

/* GCC resets */
#define GCC_EMAC0_BCR						0
#define GCC_PCIE_0_BCR						1
#define GCC_PCIE_0_LINK_DOWN_BCR				2
#define GCC_PCIE_0_NOCSR_COM_PHY_BCR				3
#define GCC_PCIE_0_PHY_BCR					4
#define GCC_PCIE_0_PHY_NOCSR_COM_PHY_BCR			5
#define GCC_PCIE_1_BCR						6
#define GCC_PCIE_1_LINK_DOWN_BCR				7
#define GCC_PCIE_1_NOCSR_COM_PHY_BCR				8
#define GCC_PCIE_1_PHY_BCR					9
#define GCC_PCIE_1_PHY_NOCSR_COM_PHY_BCR			10
#define GCC_SDCC1_BCR						11
#define GCC_UFS_PHY_BCR						12
#define GCC_USB20_PRIM_BCR					13
#define GCC_USB2_PHY_PRIM_BCR					14
#define GCC_USB2_PHY_SEC_BCR					15
#define GCC_USB30_PRIM_BCR					16
#define GCC_USB3_DP_PHY_PRIM_BCR				17
#define GCC_USB3_PHY_PRIM_BCR					18
#define GCC_USB3_PHY_TERT_BCR					19
#define GCC_USB3_UNIPHY_MP0_BCR					20
#define GCC_USB3_UNIPHY_MP1_BCR					21
#define GCC_USB3PHY_PHY_PRIM_BCR				22
#define GCC_USB3UNIPHY_PHY_MP0_BCR				23
#define GCC_USB3UNIPHY_PHY_MP1_BCR				24
#define GCC_USB_PHY_CFG_AHB2PHY_BCR				25
#define GCC_VIDEO_BCR						26
#define GCC_VIDEO_AXI0_CLK_ARES					27
#define GCC_VIDEO_AXI1_CLK_ARES					28

#endif

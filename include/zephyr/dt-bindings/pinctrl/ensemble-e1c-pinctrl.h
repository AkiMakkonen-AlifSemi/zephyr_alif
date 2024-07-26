/* Copyright (c) 2024 Alif Semiconductor
 *
 * SPDX-License-Identifier: Apache-2.0
 */

/* bits 0...2 denote pin function and bits 3...9 denote port numbers. */
#define PINMUX_PIN(no, func) \
(((no & 0x7f) << 3) | (func & 0x7))

#define	PIN_P0_0			0
#define	PIN_P0_0__GPIO			PINMUX_PIN(PIN_P0_0, 0)
#define	PIN_P0_0__SEUART_RX_A		PINMUX_PIN(PIN_P0_0, 1)
#define	PIN_P0_0__UART0_RX_A		PINMUX_PIN(PIN_P0_0, 2)
#define	PIN_P0_0__LPI2S_SDI_A		PINMUX_PIN(PIN_P0_0, 3)
#define	PIN_P0_0__SPI0_SS0_A		PINMUX_PIN(PIN_P0_0, 4)
#define	PIN_P0_0__LPI2C_SCL_A		PINMUX_PIN(PIN_P0_0, 5)
#define	PIN_P0_0__ANA_S0		PINMUX_PIN(PIN_P0_0, 6)

#define	PIN_P0_1			1
#define	PIN_P0_1__GPIO			PINMUX_PIN(PIN_P0_1, 0)
#define	PIN_P0_1__SEUART_TX_A		PINMUX_PIN(PIN_P0_1, 1)
#define	PIN_P0_1__UART0_TX_A		PINMUX_PIN(PIN_P0_1, 2)
#define	PIN_P0_1__LPI2S_SDO_A		PINMUX_PIN(PIN_P0_1, 3)
#define	PIN_P0_1__SPI0_SS1_A		PINMUX_PIN(PIN_P0_1, 4)
#define	PIN_P0_1__LPI2C_SDA_A		PINMUX_PIN(PIN_P0_1, 5)
#define	PIN_P0_1__ANA_S1		PINMUX_PIN(PIN_P0_1, 6)

#define	PIN_P0_2			2
#define	PIN_P0_2__GPIO			PINMUX_PIN(PIN_P0_2, 0)
#define	PIN_P0_2__JTAG1_TDI		PINMUX_PIN(PIN_P0_2, 1)
#define	PIN_P0_2__OSPI0_SS0_A		PINMUX_PIN(PIN_P0_2, 2)
#define	PIN_P0_2__UART0_CTS_A		PINMUX_PIN(PIN_P0_2, 3)
#define	PIN_P0_2__LPI2S_SCLK_A		PINMUX_PIN(PIN_P0_2, 4)
#define	PIN_P0_2__SPI0_SS2_A		PINMUX_PIN(PIN_P0_2, 5)
#define	PIN_P0_2__ANA_S2		PINMUX_PIN(PIN_P0_2, 6)

#define	PIN_P0_3			3
#define	PIN_P0_3__GPIO			PINMUX_PIN(PIN_P0_3, 0)
#define	PIN_P0_3__JTAG1_TDO		PINMUX_PIN(PIN_P0_3, 1)
#define	PIN_P0_3__OSPI0_SS1_A		PINMUX_PIN(PIN_P0_3, 2)
#define	PIN_P0_3__UART0_RTS_A		PINMUX_PIN(PIN_P0_3, 3)
#define	PIN_P0_3__LPI2S_WS_A		PINMUX_PIN(PIN_P0_3, 4)
#define	PIN_P0_3__SPI1_SS0_A		PINMUX_PIN(PIN_P0_3, 5)
#define	PIN_P0_3__ANA_S3		PINMUX_PIN(PIN_P0_3, 6)

#define	PIN_P0_4			4
#define	PIN_P0_4__GPIO			PINMUX_PIN(PIN_P0_4, 0)
#define	PIN_P0_4__JTAG1_TRST		PINMUX_PIN(PIN_P0_4, 1)
#define	PIN_P0_4__UART1_RX_A		PINMUX_PIN(PIN_P0_4, 2)
#define	PIN_P0_4__SPI1_SS1_A		PINMUX_PIN(PIN_P0_4, 3)
#define	PIN_P0_4__I2C0_SDA_A		PINMUX_PIN(PIN_P0_4, 4)
#define	PIN_P0_4__FAULT0_A		PINMUX_PIN(PIN_P0_4, 5)
#define	PIN_P0_4__ANA_S4		PINMUX_PIN(PIN_P0_4, 6)

#define	PIN_P0_5			5
#define	PIN_P0_5__GPIO			PINMUX_PIN(PIN_P0_5, 0)
#define	PIN_P0_5__JTAG1_TCK		PINMUX_PIN(PIN_P0_5, 1)
#define	PIN_P0_5__UART1_TX_A		PINMUX_PIN(PIN_P0_5, 2)
#define	PIN_P0_5__SPI1_SS2_A		PINMUX_PIN(PIN_P0_5, 3)
#define	PIN_P0_5__I2C0_SCL_A		PINMUX_PIN(PIN_P0_5, 4)
#define	PIN_P0_5__FAULT1_A		PINMUX_PIN(PIN_P0_5, 5)
#define	PIN_P0_5__ANA_S5		PINMUX_PIN(PIN_P0_5, 6)

#define	PIN_P0_6			6
#define	PIN_P0_6__GPIO			PINMUX_PIN(PIN_P0_6, 0)
#define	PIN_P0_6__JTAG1_TMS		PINMUX_PIN(PIN_P0_6, 1)
#define	PIN_P0_6__UART1_CTS_A		PINMUX_PIN(PIN_P0_6, 2)
#define	PIN_P0_6__I2C1_SDA_A		PINMUX_PIN(PIN_P0_6, 3)
#define	PIN_P0_6__FAULT2_A		PINMUX_PIN(PIN_P0_6, 4)
#define	PIN_P0_6__I3C_SDA_A		PINMUX_PIN(PIN_P0_6, 5)
#define	PIN_P0_6__ANA_S6		PINMUX_PIN(PIN_P0_6, 6)

#define	PIN_P0_7			7
#define	PIN_P0_7__GPIO			PINMUX_PIN(PIN_P0_7, 0)
#define	PIN_P0_7__UART1_RTS_A		PINMUX_PIN(PIN_P0_7, 1)
#define	PIN_P0_7__I2C1_SCL_A		PINMUX_PIN(PIN_P0_7, 2)
#define	PIN_P0_7__FAULT3_A		PINMUX_PIN(PIN_P0_7, 3)
#define	PIN_P0_7__LPCAM_VSYNC_B		PINMUX_PIN(PIN_P0_7, 4)
#define	PIN_P0_7__I3C_SCL_A		PINMUX_PIN(PIN_P0_7, 5)
#define	PIN_P0_7__ANA_S7		PINMUX_PIN(PIN_P0_7, 1)

#define	PIN_P1_0			8
#define	PIN_P1_0__GPIO			PINMUX_PIN(PIN_P1_0, 0)
#define	PIN_P1_0__OSPI0_D0_A		PINMUX_PIN(PIN_P1_0, 1)
#define	PIN_P1_0__UART2_RX_A		PINMUX_PIN(PIN_P1_0, 2)
#define	PIN_P1_0__LPPDM_D0_A		PINMUX_PIN(PIN_P1_0, 3)
#define	PIN_P1_0__LPI2S_SDI_B		PINMUX_PIN(PIN_P1_0, 4)
#define	PIN_P1_0__SPI0_MISO_A		PINMUX_PIN(PIN_P1_0, 5)
#define	PIN_P1_0__LPCAM_D0_A		PINMUX_PIN(PIN_P1_0, 6)
#define	PIN_P1_0__SD_D0_A		PINMUX_PIN(PIN_P1_0, 7)

#define	PIN_P1_1			9
#define	PIN_P1_1__GPIO			PINMUX_PIN(PIN_P1_1, 0)
#define	PIN_P1_1__OSPI0_D1_A		PINMUX_PIN(PIN_P1_1, 1)
#define	PIN_P1_1__UART2_TX_A		PINMUX_PIN(PIN_P1_1, 2)
#define	PIN_P1_1__LPPDM_C0_A		PINMUX_PIN(PIN_P1_1, 3)
#define	PIN_P1_1__LPI2S_SDO_B		PINMUX_PIN(PIN_P1_1, 4)
#define	PIN_P1_1__SPI0_MOSI_A		PINMUX_PIN(PIN_P1_1, 5)
#define	PIN_P1_1__LPCAM_D1_A		PINMUX_PIN(PIN_P1_1, 6)
#define	PIN_P1_1__SD_D1_A		PINMUX_PIN(PIN_P1_1, 7)

#define	PIN_P1_2			10
#define	PIN_P1_2__GPIO			PINMUX_PIN(PIN_P1_2, 0)
#define	PIN_P1_2__OSPI0_D2_A		PINMUX_PIN(PIN_P1_2, 1)
#define	PIN_P1_2__LPPDM_D1_A		PINMUX_PIN(PIN_P1_2, 2)
#define	PIN_P1_2__LPI2S_SCLK_B		PINMUX_PIN(PIN_P1_2, 3)
#define	PIN_P1_2__SPI0_SCLK_A		PINMUX_PIN(PIN_P1_2, 4)
#define	PIN_P1_2__LPCAM_D2_A		PINMUX_PIN(PIN_P1_2, 5)
#define	PIN_P1_2__SD_D2_A		PINMUX_PIN(PIN_P1_2, 6)
#define	PIN_P1_2__CX_MWS_SF0		PINMUX_PIN(PIN_P1_2, 7)

#define	PIN_P1_3			11
#define	PIN_P1_3__GPIO			PINMUX_PIN(PIN_P1_3, 0)
#define	PIN_P1_3__LPUART_RTS_A		PINMUX_PIN(PIN_P1_3, 1)
#define	PIN_P1_3__LPPDM_C1_A		PINMUX_PIN(PIN_P1_3, 2)
#define	PIN_P1_3__I2S1_SCLK_SLV_A	PINMUX_PIN(PIN_P1_3, 3)
#define	PIN_P1_3__LPSPI_MISO_A		PINMUX_PIN(PIN_P1_3, 4)
#define	PIN_P1_3__CAN1_RXD_A		PINMUX_PIN(PIN_P1_3, 5)
#define	PIN_P1_3__CX_MWS_SF0		PINMUX_PIN(PIN_P1_3, 6)

#define	PIN_P1_4			12
#define	PIN_P1_4__GPIO			PINMUX_PIN(PIN_P1_4, 0)
#define	PIN_P1_4__LPPDM_C2_A		PINMUX_PIN(PIN_P1_4, 1)
#define	PIN_P1_4__I2S0_SDI_A		PINMUX_PIN(PIN_P1_4, 2)
#define	PIN_P1_4__LPSPI_MOSI_A		PINMUX_PIN(PIN_P1_4, 3)
#define	PIN_P1_4__I2C1_SDA_A		PINMUX_PIN(PIN_P1_4, 4)
#define	PIN_P1_4__CDC_PCLK_A		PINMUX_PIN(PIN_P1_4, 5)
#define	PIN_P1_4__CAN1_TXD_A		PINMUX_PIN(PIN_P1_4, 6)
#define	PIN_P1_4__CX_MWS_SF1		PINMUX_PIN(PIN_P1_4, 7)

#define	PIN_P1_5			13
#define	PIN_P1_5__GPIO			PINMUX_PIN(PIN_P1_5, 0)
#define	PIN_P1_5__LPPDM_D2_A		PINMUX_PIN(PIN_P1_5, 1)
#define	PIN_P1_5__I2S0_SDO_A		PINMUX_PIN(PIN_P1_5, 2)
#define	PIN_P1_5__LPSPI_SCLK_A		PINMUX_PIN(PIN_P1_5, 3)
#define	PIN_P1_5__I2C1_SCLA_A		PINMUX_PIN(PIN_P1_5, 4)
#define	PIN_P1_5__SD_RST_A		PINMUX_PIN(PIN_P1_5, 5)
#define	PIN_P1_5__CDC_DE_A		PINMUX_PIN(PIN_P1_5, 6)
#define	PIN_P1_5__CAN1_STBY_A		PINMUX_PIN(PIN_P1_5, 7)

#define	PIN_P1_6			14
#define	PIN_P1_6__GPIO			PINMUX_PIN(PIN_P1_6, 0)
#define	PIN_P1_6__UART2_RX_A		PINMUX_PIN(PIN_P1_6, 1)
#define	PIN_P1_6__LPPDM_C3_A		PINMUX_PIN(PIN_P1_6, 2)
#define	PIN_P1_6__I2S0_SCLK_A		PINMUX_PIN(PIN_P1_6, 3)
#define	PIN_P1_6__LPCAM_D6_A		PINMUX_PIN(PIN_P1_6, 4)
#define	PIN_P1_6__SD_D6_A		PINMUX_PIN(PIN_P1_6, 5)
#define	PIN_P1_6__CDC_HSYNC_A		PINMUX_PIN(PIN_P1_6, 6)
#define	PIN_P1_6__CX_MWS_SF2		PINMUX_PIN(PIN_P1_6, 7)

#define	PIN_P1_7			15
#define	PIN_P1_7__GPIO			PINMUX_PIN(PIN_P1_7, 0)
#define	PIN_P1_7__UART2_TX_A		PINMUX_PIN(PIN_P1_7, 1)
#define	PIN_P1_7__LPPDM_D3_A		PINMUX_PIN(PIN_P1_7, 2)
#define	PIN_P1_7__I2S0_WS_A		PINMUX_PIN(PIN_P1_7, 3)
#define	PIN_P1_7__LPCAM_D7_A		PINMUX_PIN(PIN_P1_7, 4)
#define	PIN_P1_7__SD_D7_A		PINMUX_PIN(PIN_P1_7, 5)
#define	PIN_P1_7__CDC_VSYNC_A		PINMUX_PIN(PIN_P1_7, 6)
#define	PIN_P1_7__CX_MWS_SF3		PINMUX_PIN(PIN_P1_7, 7)

#define	PIN_P2_0			16
#define	PIN_P2_0__GPIO			PINMUX_PIN(PIN_P2_0, 0)
#define	PIN_P2_0__OSPI0_SS0_B		PINMUX_PIN(PIN_P2_0, 1)
#define	PIN_P2_0__LPUART_RX_A		PINMUX_PIN(PIN_P2_0, 2)
#define	PIN_P2_0__I2S1_SDI_A		PINMUX_PIN(PIN_P2_0, 3)
#define	PIN_P2_0__LPSPI_SS_A		PINMUX_PIN(PIN_P2_0, 4)
#define	PIN_P2_0__LPCAM_HSYNC_B		PINMUX_PIN(PIN_P2_0, 5)
#define	PIN_P2_0__ANA_S8		PINMUX_PIN(PIN_P2_0, 6)
#define	PIN_P2_0__CX_MWS_SF4		PINMUX_PIN(PIN_P2_0, 7)

#define	PIN_P2_1			17
#define	PIN_P2_1__GPIO			PINMUX_PIN(PIN_P2_1, 0)
#define	PIN_P2_1__OSPI0_SS1_B		PINMUX_PIN(PIN_P2_1, 1)
#define	PIN_P2_1__LPUART_TX_A		PINMUX_PIN(PIN_P2_1, 2)
#define	PIN_P2_1__I2S1_SDO_A		PINMUX_PIN(PIN_P2_1, 3)
#define	PIN_P2_1__LPI2C_SCL_B		PINMUX_PIN(PIN_P2_1, 4)
#define	PIN_P2_1__UT0_T1_A		PINMUX_PIN(PIN_P2_1, 5)
#define	PIN_P2_1__ANA_S9		PINMUX_PIN(PIN_P2_1, 6)
#define	PIN_P2_1__CX_MWS_PAT0		PINMUX_PIN(PIN_P2_1, 7)

#define	PIN_P2_2			18
#define	PIN_P2_2__GPIO			PINMUX_PIN(PIN_P2_2, 0)
#define	PIN_P2_2__LPUART_RTS_A		PINMUX_PIN(PIN_P2_2, 1)
#define	PIN_P2_2__I2S1_SCLK_SLV_A	PINMUX_PIN(PIN_P2_2, 2)
#define	PIN_P2_2__LPI2C_SDA_B		PINMUX_PIN(PIN_P2_2, 3)
#define	PIN_P2_2__UT1_T0_A		PINMUX_PIN(PIN_P2_2, 4)
#define	PIN_P2_2__ANA_S10		PINMUX_PIN(PIN_P2_2, 5)
#define	PIN_P2_2__CX_MWS_PAT1		PINMUX_PIN(PIN_P2_2, 6)

#define	PIN_P2_3			19
#define	PIN_P2_3__GPIO			PINMUX_PIN(PIN_P2_3, 0)
#define	PIN_P2_3__LPUART_CTS_A		PINMUX_PIN(PIN_P2_3, 1)
#define	PIN_P2_3__I2S1_WS_SLV_A		PINMUX_PIN(PIN_P2_3, 2)
#define	PIN_P2_3__UT1_T1_A		PINMUX_PIN(PIN_P2_3, 3)
#define	PIN_P2_3__SD_RST_A		PINMUX_PIN(PIN_P2_3, 4)
#define	PIN_P2_3__CAN0_RXD_A		PINMUX_PIN(PIN_P2_3, 5)
#define	PIN_P2_3__ANA_S11		PINMUX_PIN(PIN_P2_3, 6)
#define	PIN_P2_3__CX_MWS_SYNC		PINMUX_PIN(PIN_P2_3, 7)

#define	PIN_P2_4			20
#define	PIN_P2_4__GPIO			PINMUX_PIN(PIN_P2_4, 0)
#define	PIN_P2_4__UART3_RX_A		PINMUX_PIN(PIN_P2_4, 1)
#define	PIN_P2_4__I2S0_SDI_B		PINMUX_PIN(PIN_P2_4, 2)
#define	PIN_P2_4__I2C0_SCL_B		PINMUX_PIN(PIN_P2_4, 3)
#define	PIN_P2_4__UT2_T0_A		PINMUX_PIN(PIN_P2_4, 4)
#define	PIN_P2_4__CAN0_TXD_A		PINMUX_PIN(PIN_P2_4, 5)
#define	PIN_P2_4__ANA_S12		PINMUX_PIN(PIN_P2_4, 6)
#define	PIN_P2_4__CX_MWS_TX		PINMUX_PIN(PIN_P2_4, 7)

#define	PIN_P2_5			21
#define	PIN_P2_5__GPIO			PINMUX_PIN(PIN_P2_5, 0)
#define	PIN_P2_5__UART3_TX_A		PINMUX_PIN(PIN_P2_5, 1)
#define	PIN_P2_5__I2S0_SDO_B		PINMUX_PIN(PIN_P2_5, 2)
#define	PIN_P2_5__I2C0_SDA_B		PINMUX_PIN(PIN_P2_5, 3)
#define	PIN_P2_5__UT2_T1_A		PINMUX_PIN(PIN_P2_5, 4)
#define	PIN_P2_5__CAN0_STBY_A		PINMUX_PIN(PIN_P2_5, 5)
#define	PIN_P2_5__ANA_S13		PINMUX_PIN(PIN_P2_5, 6)
#define	PIN_P2_5__CX_MWS_RX		PINMUX_PIN(PIN_P2_5, 7)

#define	PIN_P2_6			22
#define	PIN_P2_6__GPIO			PINMUX_PIN(PIN_P2_6, 0)
#define	PIN_P2_6__UART4_RX_A		PINMUX_PIN(PIN_P2_6, 1)
#define	PIN_P2_6__I2S0_SCLK_B		PINMUX_PIN(PIN_P2_6, 2)
#define	PIN_P2_6__I2C1_SDA_B		PINMUX_PIN(PIN_P2_6, 3)
#define	PIN_P2_6__UT3_T0_A		PINMUX_PIN(PIN_P2_6, 4)
#define	PIN_P2_6__I3C_SDA_B		PINMUX_PIN(PIN_P2_6, 5)
#define	PIN_P2_6__ANA_S14		PINMUX_PIN(PIN_P2_6, 6)

#define	PIN_P2_7			23
#define	PIN_P2_7__GPIO			PINMUX_PIN(PIN_P2_7, 0)
#define	PIN_P2_7__UART4_TX_A		PINMUX_PIN(PIN_P2_7, 1)
#define	PIN_P2_7__I2S0_WS_B		PINMUX_PIN(PIN_P2_7, 2)
#define	PIN_P2_7__I2C1_SCL_B		PINMUX_PIN(PIN_P2_7, 3)
#define	PIN_P2_7__UT3_T1_A		PINMUX_PIN(PIN_P2_7, 4)
#define	PIN_P2_7__I3C_SCL_B		PINMUX_PIN(PIN_P2_7, 5)
#define	PIN_P2_7__ANA_S15		PINMUX_PIN(PIN_P2_7, 6)

#define	PIN_P3_0			24
#define	PIN_P3_0__GPIO			PINMUX_PIN(PIN_P3_0, 0)
#define	PIN_P3_0__OSPI0_SCLKN_A		PINMUX_PIN(PIN_P3_0, 1)
#define	PIN_P3_0__UART5_RX_A		PINMUX_PIN(PIN_P3_0, 2)
#define	PIN_P3_0__LPPDM_C0_B		PINMUX_PIN(PIN_P3_0, 3)
#define	PIN_P3_0__I2S1_SDI_B		PINMUX_PIN(PIN_P3_0, 4)
#define	PIN_P3_0__SPI2_MISO_A		PINMUX_PIN(PIN_P3_0, 5)
#define	PIN_P3_0__CDC_HSYNC_B		PINMUX_PIN(PIN_P3_0, 6)

#define	PIN_P3_1			25
#define	PIN_P3_1__GPIO			PINMUX_PIN(PIN_P3_1, 0)
#define	PIN_P3_1__OSPI0_RXDS_A		PINMUX_PIN(PIN_P3_1, 1)
#define	PIN_P3_1__UART5_TX_A		PINMUX_PIN(PIN_P3_1, 2)
#define	PIN_P3_1__LPPDM_D0_B		PINMUX_PIN(PIN_P3_1, 3)
#define	PIN_P3_1__I2S1_SDO_B		PINMUX_PIN(PIN_P3_1, 4)
#define	PIN_P3_1__SPI2_MOSI_A		PINMUX_PIN(PIN_P3_1, 5)
#define	PIN_P3_1__CDC_VSYNC_B		PINMUX_PIN(PIN_P3_1, 6)

#define	PIN_P3_2			26
#define	PIN_P3_2__GPIO			PINMUX_PIN(PIN_P3_2, 0)
#define	PIN_P3_2__OSPI0_SCLK_A		PINMUX_PIN(PIN_P3_2, 1)
#define	PIN_P3_2__UART3_RX_B		PINMUX_PIN(PIN_P3_2, 2)
#define	PIN_P3_2__LPPDM_C1_B		PINMUX_PIN(PIN_P3_2, 3)
#define	PIN_P3_2__I2S1_SCLK_SLV_B	PINMUX_PIN(PIN_P3_2, 4)
#define	PIN_P3_2__SPI2_SCLK_A		PINMUX_PIN(PIN_P3_2, 5)
#define	PIN_P3_2__CDC_PCLK_B		PINMUX_PIN(PIN_P3_2, 6)

#define	PIN_P3_3			27
#define	PIN_P3_3__GPIO			PINMUX_PIN(PIN_P3_3, 0)
#define	PIN_P3_3__JTAG0_TRACECLK	PINMUX_PIN(PIN_P3_3, 1)
#define	PIN_P3_3__UART3_TX_B		PINMUX_PIN(PIN_P3_3, 2)
#define	PIN_P3_3__LPPDM_D1_B		PINMUX_PIN(PIN_P3_3, 3)
#define	PIN_P3_3__I2S1_WS_SLV_B		PINMUX_PIN(PIN_P3_3, 4)
#define	PIN_P3_3__SPI2_SS0_A		PINMUX_PIN(PIN_P3_3, 5)
#define	PIN_P3_3__CDC_DE_B		PINMUX_PIN(PIN_P3_3, 6)

#define	PIN_P3_4			28
#define	PIN_P3_4__GPIO			PINMUX_PIN(PIN_P3_4, 0)
#define	PIN_P3_4__JTAG0_TDATA0		PINMUX_PIN(PIN_P3_4, 1)
#define	PIN_P3_4__LPPDM_C2_B		PINMUX_PIN(PIN_P3_4, 2)
#define	PIN_P3_4__SPI1_MISO_A		PINMUX_PIN(PIN_P3_4, 3)
#define	PIN_P3_4__LPCAM_VSYNC_A		PINMUX_PIN(PIN_P3_4, 4)
#define	PIN_P3_4__SD_CMD_A		PINMUX_PIN(PIN_P3_4, 5)
#define	PIN_P3_4__CMP0_OUT_A		PINMUX_PIN(PIN_P3_4, 6)

#define	PIN_P3_5			29
#define	PIN_P3_5__GPIO			PINMUX_PIN(PIN_P3_5, 0)
#define	PIN_P3_5__JTAG0_TDATA1		PINMUX_PIN(PIN_P3_5, 1)
#define	PIN_P3_5__LPPDM_D2_B		PINMUX_PIN(PIN_P3_5, 2)
#define	PIN_P3_5__SPI1_MOSI_A		PINMUX_PIN(PIN_P3_5, 3)
#define	PIN_P3_5__LPCAM_HSYNC_A		PINMUX_PIN(PIN_P3_5, 4)
#define	PIN_P3_5__SD_CLK_A		PINMUX_PIN(PIN_P3_5, 5)
#define	PIN_P3_5__CMP1_OUT_A		PINMUX_PIN(PIN_P3_5, 6)

#define	PIN_P3_6			30
#define	PIN_P3_6__GPIO			PINMUX_PIN(PIN_P3_6, 0)
#define	PIN_P3_6__JTAG0_TDATA2		PINMUX_PIN(PIN_P3_6, 1)
#define	PIN_P3_6__UART4_RX_B		PINMUX_PIN(PIN_P3_6, 2)
#define	PIN_P3_6__LPPDM_C3_B		PINMUX_PIN(PIN_P3_6, 3)
#define	PIN_P3_6__SPI1_SCLK_A		PINMUX_PIN(PIN_P3_6, 4)
#define	PIN_P3_6__LPCAM_PCLK_A		PINMUX_PIN(PIN_P3_6, 5)
#define	PIN_P3_6__EXT_RTS_A		PINMUX_PIN(PIN_P3_6, 6)
#define	PIN_P3_6__CX_WLAN_TX		PINMUX_PIN(PIN_P3_6, 7)

#define	PIN_P3_7			31
#define	PIN_P3_7__GPIO			PINMUX_PIN(PIN_P3_7, 0)
#define	PIN_P3_7__JTAG0_TDATA3		PINMUX_PIN(PIN_P3_7, 1)
#define	PIN_P3_7__UART4_TX_B		PINMUX_PIN(PIN_P3_7, 2)
#define	PIN_P3_7__LPPDM_D3_B		PINMUX_PIN(PIN_P3_7, 3)
#define	PIN_P3_7__LPCAM_XVCLK_A		PINMUX_PIN(PIN_P3_7, 4)
#define	PIN_P3_7__SD_RST_B		PINMUX_PIN(PIN_P3_7, 5)
#define	PIN_P3_7__EXT_CTS_A		PINMUX_PIN(PIN_P3_7, 6)
#define	PIN_P3_7__CX_WLAN_RX		PINMUX_PIN(PIN_P3_7, 7)

#define	PIN_P4_0			32
#define	PIN_P4_0__GPIO			PINMUX_PIN(PIN_P4_0, 0)
#define	PIN_P4_0__OSPI0_RXDS_B		PINMUX_PIN(PIN_P4_0, 1)
#define	PIN_P4_0__UART0_RX_B		PINMUX_PIN(PIN_P4_0, 2)
#define	PIN_P4_0__SPI2_SS1_A		PINMUX_PIN(PIN_P4_0, 3)
#define	PIN_P4_0__UT0_T0_A		PINMUX_PIN(PIN_P4_0, 4)
#define	PIN_P4_0__SD_CMD_B		PINMUX_PIN(PIN_P4_0, 5)
#define	PIN_P4_0__CAN1_RXD_A		PINMUX_PIN(PIN_P4_0, 6)
#define	PIN_P4_0__EXT_RX_A		PINMUX_PIN(PIN_P4_0, 7)

#define	PIN_P4_1			33
#define	PIN_P4_1__GPIO			PINMUX_PIN(PIN_P4_1, 0)
#define	PIN_P4_1__OSPI0_SCLKN_B		PINMUX_PIN(PIN_P4_1, 1)
#define	PIN_P4_1__UART0_TX_B		PINMUX_PIN(PIN_P4_1, 2)
#define	PIN_P4_1__SPI2_SS2_A		PINMUX_PIN(PIN_P4_1, 3)
#define	PIN_P4_1__UT0_T1_A		PINMUX_PIN(PIN_P4_1, 4)
#define	PIN_P4_1__SD_CLK_B		PINMUX_PIN(PIN_P4_1, 5)
#define	PIN_P4_1__CAN1_TXD_A		PINMUX_PIN(PIN_P4_1, 6)
#define	PIN_P4_1__EXT_TX_A		PINMUX_PIN(PIN_P4_1, 7)

#define	PIN_P4_2			34
#define	PIN_P4_2__GPIO			PINMUX_PIN(PIN_P4_2, 0)
#define	PIN_P4_2__HFXO_OUT_A		PINMUX_PIN(PIN_P4_2, 1)
#define	PIN_P4_2__OSPI0_SCLK_B		PINMUX_PIN(PIN_P4_2, 2)
#define	PIN_P4_2__UART4_DE_A		PINMUX_PIN(PIN_P4_2, 3)
#define	PIN_P4_2__UT1_T0_A		PINMUX_PIN(PIN_P4_2, 4)
#define	PIN_P4_2__CAN1_STBY_A		PINMUX_PIN(PIN_P4_2, 5)
#define	PIN_P4_2__EXT_TRACE_A		PINMUX_PIN(PIN_P4_2, 6)

#define	PIN_P4_3			35
#define	PIN_P4_3__GPIO			PINMUX_PIN(PIN_P4_3, 0)
#define	PIN_P4_3__JTAG0_NSRST		PINMUX_PIN(PIN_P4_3, 1)
#define	PIN_P4_3__CS_MWS_ID0		PINMUX_PIN(PIN_P4_3, 2)
#define PIN_P4_3__UT1_T1_A		PINMUX_PIN(PIN_P4_3, 3)

#define	PIN_P4_4			36
#define	PIN_P4_4__GPIO			PINMUX_PIN(PIN_P4_4, 0)
#define	PIN_P4_4__JTAG0_TCK		PINMUX_PIN(PIN_P4_4, 1)
#define	PIN_P4_4__FAULT0_B		PINMUX_PIN(PIN_P4_4, 2)
#define	PIN_P4_4__CS_MWS_ID1		PINMUX_PIN(PIN_P4_4, 3)
#define	PIN_P4_4__UT2_T0_A		PINMUX_PIN(PIN_P4_4, 4)

#define	PIN_P4_5			37
#define	PIN_P4_5__GPIO			PINMUX_PIN(PIN_P4_5, 0)
#define	PIN_P4_5__JTAG0_TMS		PINMUX_PIN(PIN_P4_5, 1)
#define	PIN_P4_5__FAULT1_B		PINMUX_PIN(PIN_P4_5, 2)
#define	PIN_P4_5__CS_MWS_ID2		PINMUX_PIN(PIN_P4_5, 3)
#define	PIN_P4_5__UT2_T1_A		PINMUX_PIN(PIN_P4_5, 4)

#define	PIN_P4_6			38
#define	PIN_P4_6__GPIO			PINMUX_PIN(PIN_P4_6, 0)
#define	PIN_P4_6__JTAG0_TDI		PINMUX_PIN(PIN_P4_6, 1)
#define	PIN_P4_6__FAULT2_B		PINMUX_PIN(PIN_P4_6, 2)
#define	PIN_P4_6__CMP0_OUT_B		PINMUX_PIN(PIN_P4_6, 3)
#define	PIN_P4_6__UT3_T0_A		PINMUX_PIN(PIN_P4_6, 4)

#define	PIN_P4_7			39
#define	PIN_P4_7__GPIO			PINMUX_PIN(PIN_P4_7, 0)
#define	PIN_P4_7__JTAG0_TDO		PINMUX_PIN(PIN_P4_7, 1)
#define	PIN_P4_7__FAULT3_B		PINMUX_PIN(PIN_P4_7, 2)
#define	PIN_P4_7__UT3_T1_A		PINMUX_PIN(PIN_P4_7, 3)
#define	PIN_P4_7__CS_MWS_ID4		PINMUX_PIN(PIN_P4_7, 4)

#define	PIN_P5_0			40
#define	PIN_P5_0__GPIO			PINMUX_PIN(PIN_P5_0, 0)
#define	PIN_P5_0__OSPI0_D0_B		PINMUX_PIN(PIN_P5_0, 1)
#define	PIN_P5_0__UART1_RX_B		PINMUX_PIN(PIN_P5_0, 2)
#define	PIN_P5_0__SPI0_MISO_B		PINMUX_PIN(PIN_P5_0, 3)
#define	PIN_P5_0__CDC_D0_A		PINMUX_PIN(PIN_P5_0, 4)
#define	PIN_P5_0__CAN0_RXD_B		PINMUX_PIN(PIN_P5_0, 5)
#define	PIN_P5_0__DEBUG_PORT0		PINMUX_PIN(PIN_P5_0, 6)

#define	PIN_P5_1			41
#define	PIN_P5_1__GPIO			PINMUX_PIN(PIN_P5_1, 0)
#define	PIN_P5_1__OSPI0_D1_B		PINMUX_PIN(PIN_P5_1, 1)
#define	PIN_P5_1__UART1_TX_B		PINMUX_PIN(PIN_P5_1, 2)
#define	PIN_P5_1__SPI0_MOSI_B		PINMUX_PIN(PIN_P5_1, 3)
#define	PIN_P5_1__CDC_D1_A		PINMUX_PIN(PIN_P5_1, 4)
#define	PIN_P5_1__CAN0_TXD_B		PINMUX_PIN(PIN_P5_1, 5)
#define	PIN_P5_1__DEBUG_PORT1		PINMUX_PIN(PIN_P5_1, 6)

#define	PIN_P5_2			42
#define	PIN_P5_2__GPIO			PINMUX_PIN(PIN_P5_2, 0)
#define	PIN_P5_2__HFXO_OUT_B		PINMUX_PIN(PIN_P5_2, 1)
#define	PIN_P5_2__OSPI0_D2_B		PINMUX_PIN(PIN_P5_2, 2)
#define	PIN_P5_2__UART2_RX_B		PINMUX_PIN(PIN_P5_2, 3)
#define	PIN_P5_2__SPI0_SCLK_B		PINMUX_PIN(PIN_P5_2, 4)
#define	PIN_P5_2__CDC_D2_A		PINMUX_PIN(PIN_P5_2, 5)
#define	PIN_P5_2__DEBUG_PORT2		PINMUX_PIN(PIN_P5_2, 6)

#define	PIN_P5_3			43
#define	PIN_P5_3__GPIO			PINMUX_PIN(PIN_P5_3, 0)
#define	PIN_P5_3__OSPI0_D3_B		PINMUX_PIN(PIN_P5_3, 1)
#define	PIN_P5_3__UART2_TX_B		PINMUX_PIN(PIN_P5_3, 2)
#define	PIN_P5_3__SPI0_SS0_B		PINMUX_PIN(PIN_P5_3, 3)
#define	PIN_P5_3__CDC_D3_A		PINMUX_PIN(PIN_P5_3, 4)
#define	PIN_P5_3__DEBUG_PORT3		PINMUX_PIN(PIN_P5_3, 5)

#define	PIN_P5_4			44
#define	PIN_P5_4__GPIO			PINMUX_PIN(PIN_P5_4, 0)
#define	PIN_P5_4__OSPI0_D4_B		PINMUX_PIN(PIN_P5_4, 1)
#define	PIN_P5_4__UART3_CTS_A		PINMUX_PIN(PIN_P5_4, 2)
#define	PIN_P5_4__LPPDM_C0_C		PINMUX_PIN(PIN_P5_4, 3)
#define	PIN_P5_4__SPI0_SS1_B		PINMUX_PIN(PIN_P5_4, 4)
#define	PIN_P5_4__CDC_D4_A		PINMUX_PIN(PIN_P5_4, 5)
#define	PIN_P5_4__DEBUG_PORT4		PINMUX_PIN(PIN_P5_4, 6)

#define	PIN_P5_5			45
#define	PIN_P5_5__GPIO			PINMUX_PIN(PIN_P5_5, 0)
#define	PIN_P5_5__OSPI0_D5_B		PINMUX_PIN(PIN_P5_5, 1)
#define	PIN_P5_5__UART3_RTS_A		PINMUX_PIN(PIN_P5_5, 2)
#define	PIN_P5_5__LPPDM_C1_C		PINMUX_PIN(PIN_P5_5, 3)
#define	PIN_P5_5__SPI0_SS2_B		PINMUX_PIN(PIN_P5_5, 4)
#define	PIN_P5_5__CDC_D5_A		PINMUX_PIN(PIN_P5_5, 5)
#define	PIN_P5_5__DEBUG_PORT5		PINMUX_PIN(PIN_P5_5, 6)

#define	PIN_P5_6			46
#define	PIN_P5_6__GPIO			PINMUX_PIN(PIN_P5_6, 0)
#define	PIN_P5_6__OSPI0_D6_B		PINMUX_PIN(PIN_P5_6, 1)
#define	PIN_P5_6__UART1_CTS_B		PINMUX_PIN(PIN_P5_6, 2)
#define	PIN_P5_6__LPPDM_D0_C		PINMUX_PIN(PIN_P5_6, 3)
#define	PIN_P5_6__LPSPI_MISO_B		PINMUX_PIN(PIN_P5_6, 4)
#define	PIN_P5_6__CDC_D6_A		PINMUX_PIN(PIN_P5_6, 5)
#define	PIN_P5_6__DEBUG_PORT6		PINMUX_PIN(PIN_P5_6, 6)

#define	PIN_P5_7			47
#define	PIN_P5_7__GPIO			PINMUX_PIN(PIN_P5_7, 0)
#define	PIN_P5_7__OSPI0_D7_B		PINMUX_PIN(PIN_P5_7, 1)
#define	PIN_P5_7__UART1_RTS_B		PINMUX_PIN(PIN_P5_7, 2)
#define	PIN_P5_7__LPPDM_D1_C		PINMUX_PIN(PIN_P5_7, 3)
#define	PIN_P5_7__LPSPI_MOSI_B		PINMUX_PIN(PIN_P5_7, 4)
#define	PIN_P5_7__CDC_D7_A		PINMUX_PIN(PIN_P5_7, 5)
#define	PIN_P5_7__DEBUG_PORT7		PINMUX_PIN(PIN_P5_7, 6)

#define	PIN_P6_0			48
#define	PIN_P6_0__GPIO			PINMUX_PIN(PIN_P6_0, 0)
#define	PIN_P6_0__OSPI0_D0_C		PINMUX_PIN(PIN_P6_0, 1)
#define	PIN_P6_0__UART4_DE_B		PINMUX_PIN(PIN_P6_0, 2)
#define	PIN_P6_0__LPSPI_SS_B		PINMUX_PIN(PIN_P6_0, 3)
#define	PIN_P6_0__UT0_T0_B		PINMUX_PIN(PIN_P6_0, 4)
#define	PIN_P6_0__SD_D0_B		PINMUX_PIN(PIN_P6_0, 5)
#define	PIN_P6_0__CDC_D8_A		PINMUX_PIN(PIN_P6_0, 6)

#define	PIN_P6_1			49
#define	PIN_P6_1__GPIO			PINMUX_PIN(PIN_P6_1, 0)
#define	PIN_P6_1__OSPI0_D1_C		PINMUX_PIN(PIN_P6_1, 1)
#define	PIN_P6_1__UART5_DE_A		PINMUX_PIN(PIN_P6_1, 2)
#define	PIN_P6_1__SPI1_MISO_B		PINMUX_PIN(PIN_P6_1, 3)
#define	PIN_P6_1__UT0_T1_B		PINMUX_PIN(PIN_P6_1, 4)
#define	PIN_P6_1__SD_D1_B		PINMUX_PIN(PIN_P6_1, 5)
#define	PIN_P6_1__CDC_D9_A		PINMUX_PIN(PIN_P6_1, 6)

#define	PIN_P6_2			50
#define	PIN_P6_2__GPIO			PINMUX_PIN(PIN_P6_2, 0)
#define	PIN_P6_2__OSPI0_D2_C		PINMUX_PIN(PIN_P6_2, 1)
#define	PIN_P6_2__UART2_CTS_A		PINMUX_PIN(PIN_P6_2, 2)
#define	PIN_P6_2__SPI1_MOSI_B		PINMUX_PIN(PIN_P6_2, 3)
#define	PIN_P6_2__UT1_T0_B		PINMUX_PIN(PIN_P6_2, 4)
#define	PIN_P6_2__SD_D2_B		PINMUX_PIN(PIN_P6_2, 5)
#define	PIN_P6_2__CDC_D10_A		PINMUX_PIN(PIN_P6_2, 6)

#define	PIN_P6_3			51
#define	PIN_P6_3__GPIO			PINMUX_PIN(PIN_P6_3, 0)
#define	PIN_P6_3__OSPI0_D3_C		PINMUX_PIN(PIN_P6_3, 1)
#define	PIN_P6_3__UART2_RTS_A		PINMUX_PIN(PIN_P6_3, 2)
#define	PIN_P6_3__SPI1_SCLK_B		PINMUX_PIN(PIN_P6_3, 3)
#define	PIN_P6_3__UT1_T1_B		PINMUX_PIN(PIN_P6_3, 4)
#define	PIN_P6_3__SD_D3_B		PINMUX_PIN(PIN_P6_3, 5)
#define	PIN_P6_3__CDC_D11_A		PINMUX_PIN(PIN_P6_3, 6)

#define	PIN_P6_4			52
#define	PIN_P6_4__GPIO			PINMUX_PIN(PIN_P6_4, 0)
#define	PIN_P6_4__OSPI0_D4_C		PINMUX_PIN(PIN_P6_4, 1)
#define	PIN_P6_4__UART2_CTS_B		PINMUX_PIN(PIN_P6_4, 2)
#define	PIN_P6_4__SPI1_SS0_B		PINMUX_PIN(PIN_P6_4, 3)
#define	PIN_P6_4__UT2_T0_B		PINMUX_PIN(PIN_P6_4, 4)
#define	PIN_P6_4__SD_D4_B		PINMUX_PIN(PIN_P6_4, 5)
#define	PIN_P6_4__CDC_D12_A		PINMUX_PIN(PIN_P6_4, 6)

#define	PIN_P6_5			53
#define	PIN_P6_5__GPIO			PINMUX_PIN(PIN_P6_5, 0)
#define	PIN_P6_5__OSPI0_D5_C		PINMUX_PIN(PIN_P6_5, 1)
#define	PIN_P6_5__UART2_RTS_B		PINMUX_PIN(PIN_P6_5, 2)
#define	PIN_P6_5__SPI1_SS1_B		PINMUX_PIN(PIN_P6_5, 3)
#define	PIN_P6_5__UT2_T1_B		PINMUX_PIN(PIN_P6_5, 4)
#define	PIN_P6_5__SD_D5_B		PINMUX_PIN(PIN_P6_5, 5)
#define	PIN_P6_5__CDC_D13_A		PINMUX_PIN(PIN_P6_5, 6)

#define	PIN_P6_6			54
#define	PIN_P6_6__GPIO			PINMUX_PIN(PIN_P6_6, 0)
#define	PIN_P6_6__OSPI0_D6_C		PINMUX_PIN(PIN_P6_6, 1)
#define	PIN_P6_6__UART0_CTS_B		PINMUX_PIN(PIN_P6_6, 2)
#define	PIN_P6_6__SPI1_SS2_B		PINMUX_PIN(PIN_P6_6, 3)
#define	PIN_P6_6__UT3_T0_B		PINMUX_PIN(PIN_P6_6, 4)
#define	PIN_P6_6__SD_D6_B		PINMUX_PIN(PIN_P6_6, 5)
#define	PIN_P6_6__CDC_D14_A		PINMUX_PIN(PIN_P6_6, 6)

#define	PIN_P6_7			55
#define	PIN_P6_7__GPIO			PINMUX_PIN(PIN_P6_7, 0)
#define	PIN_P6_7__OSPI0_D7_C		PINMUX_PIN(PIN_P6_7, 1)
#define	PIN_P6_7__UART0_RTS_B		PINMUX_PIN(PIN_P6_7, 2)
#define	PIN_P6_7__SPI2_SS2_C		PINMUX_PIN(PIN_P6_7, 3)
#define	PIN_P6_7__UT3_T1_B		PINMUX_PIN(PIN_P6_7, 4)
#define	PIN_P6_7__SD_D7_B		PINMUX_PIN(PIN_P6_7, 5)
#define	PIN_P6_7__CDC_D15_A		PINMUX_PIN(PIN_P6_7, 6)

#define	PIN_P7_0			56
#define	PIN_P7_0__GPIO			PINMUX_PIN(PIN_P7_0, 0)
#define	PIN_P7_0__OSPI0_SCLK_C		PINMUX_PIN(PIN_P7_0, 1)
#define	PIN_P7_0__LPUART_RX_B		PINMUX_PIN(PIN_P7_0, 2)
#define	PIN_P7_0__SPI2_MISO_B		PINMUX_PIN(PIN_P7_0, 3)
#define	PIN_P7_0__I2C0_SDA_C		PINMUX_PIN(PIN_P7_0, 4)
#define	PIN_P7_0__LPCAM_D0_B		PINMUX_PIN(PIN_P7_0, 5)
#define	PIN_P7_0__CDC_D16_A		PINMUX_PIN(PIN_P7_0, 6)

#define	PIN_P7_1			57
#define	PIN_P7_1__GPIO			PINMUX_PIN(PIN_P7_1, 0)
#define	PIN_P7_1__OSPI0_SCLKN_C		PINMUX_PIN(PIN_P7_1, 1)
#define	PIN_P7_1__LPUART_TX_B		PINMUX_PIN(PIN_P7_1, 2)
#define	PIN_P7_1__SPI2_MOSI_B		PINMUX_PIN(PIN_P7_1, 3)
#define	PIN_P7_1__I2C0_SCL_C		PINMUX_PIN(PIN_P7_1, 4)
#define	PIN_P7_1__LPCAM_D1_B		PINMUX_PIN(PIN_P7_1, 5)
#define	PIN_P7_1__CDC_D17_A		PINMUX_PIN(PIN_P7_1, 6)

#define	PIN_P7_2			58
#define	PIN_P7_2__GPIO			PINMUX_PIN(PIN_P7_2, 0)
#define	PIN_P7_2__OSPI0_SS0_C		PINMUX_PIN(PIN_P7_2, 1)
#define	PIN_P7_2__LPUART_CTS_B		PINMUX_PIN(PIN_P7_2, 2)
#define	PIN_P7_2__SPI2_SCLK_B		PINMUX_PIN(PIN_P7_2, 3)
#define	PIN_P7_2__I2C1_SDA_C		PINMUX_PIN(PIN_P7_2, 4)
#define	PIN_P7_2__LPCAM_D2_B		PINMUX_PIN(PIN_P7_2, 5)
#define	PIN_P7_2__CDC_D18_A		PINMUX_PIN(PIN_P7_2, 6)

#define	PIN_P7_3			59
#define	PIN_P7_3__GPIO			PINMUX_PIN(PIN_P7_3, 0)
#define	PIN_P7_3__OSPI0_SS1_C		PINMUX_PIN(PIN_P7_3, 1)
#define	PIN_P7_3__LPUART_RTS_B		PINMUX_PIN(PIN_P7_3, 2)
#define	PIN_P7_3__SPI2_SS0_B		PINMUX_PIN(PIN_P7_3, 3)
#define	PIN_P7_3__I2C1_SCL_C		PINMUX_PIN(PIN_P7_3, 4)
#define	PIN_P7_3__LPCAM_D3_B		PINMUX_PIN(PIN_P7_3, 5)
#define	PIN_P7_3__CDC_D19_A		PINMUX_PIN(PIN_P7_3, 6)

#define	PIN_P7_4			60
#define	PIN_P7_4__GPIO			PINMUX_PIN(PIN_P7_4, 0)
#define	PIN_P7_4__UART3_CTS_B		PINMUX_PIN(PIN_P7_4, 1)
#define	PIN_P7_4__SPI2_SS1_B		PINMUX_PIN(PIN_P7_4, 2)
#define	PIN_P7_4__LPI2C_SCL_C		PINMUX_PIN(PIN_P7_4, 3)
#define	PIN_P7_4__LPCAM_D4_B		PINMUX_PIN(PIN_P7_4, 4)
#define	PIN_P7_4__CDC_D20_A		PINMUX_PIN(PIN_P7_4, 5)

#define	PIN_P7_5			61
#define	PIN_P7_5__GPIO			PINMUX_PIN(PIN_P7_5, 0)
#define	PIN_P7_5__UART3_RTS_B		PINMUX_PIN(PIN_P7_5, 1)
#define	PIN_P7_5__SPI2_SS2_B		PINMUX_PIN(PIN_P7_5, 2)
#define	PIN_P7_5__LPI2C_SDA_C		PINMUX_PIN(PIN_P7_5, 3)
#define	PIN_P7_5__LPCAM_D5_B		PINMUX_PIN(PIN_P7_5, 4)
#define	PIN_P7_5__CDC_D21_A		PINMUX_PIN(PIN_P7_5, 5)

#define	PIN_P7_6			62
#define	PIN_P7_6__GPIO			PINMUX_PIN(PIN_P7_6, 0)
#define	PIN_P7_6__OSPI0_RXDS_C		PINMUX_PIN(PIN_P7_6, 1)
#define	PIN_P7_6__UART5_RX_B		PINMUX_PIN(PIN_P7_6, 2)
#define	PIN_P7_6__SPI0_MISO_C		PINMUX_PIN(PIN_P7_6, 3)
#define	PIN_P7_6__LPCAM_D6_B		PINMUX_PIN(PIN_P7_6, 4)
#define	PIN_P7_6__CDC_D22_A		PINMUX_PIN(PIN_P7_6, 5)

#define	PIN_P7_7			63
#define	PIN_P7_7__GPIO			PINMUX_PIN(PIN_P7_7, 0)
#define	PIN_P7_7__UART5_TX_B		PINMUX_PIN(PIN_P7_7, 1)
#define	PIN_P7_7__SPI0_MOSI_C		PINMUX_PIN(PIN_P7_7, 2)
#define	PIN_P7_7__LPCAM_D7_B		PINMUX_PIN(PIN_P7_7, 3)
#define	PIN_P7_7__CDC_D23_A		PINMUX_PIN(PIN_P7_7, 4)
#define	PIN_P7_7__CAN0_STBY_B		PINMUX_PIN(PIN_P7_7, 5)

#define	PIN_P8_0			64
#define	PIN_P8_0__GPIO			PINMUX_PIN(PIN_P8_0, 0)
#define	PIN_P8_0__UART0_RX_C		PINMUX_PIN(PIN_P8_0, 1)
#define	PIN_P8_0__I2S0_SDI_C		PINMUX_PIN(PIN_P8_0, 2)
#define	PIN_P8_0__SPI0_SCLK_C		PINMUX_PIN(PIN_P8_0, 3)
#define	PIN_P8_0__UT0_T0_C		PINMUX_PIN(PIN_P8_0, 4)
#define	PIN_P8_0__SD_CMD_C		PINMUX_PIN(PIN_P8_0, 5)
#define	PIN_P8_0__CMP0_OUT_C		PINMUX_PIN(PIN_P8_0, 6)

#define	PIN_P8_1			65
#define	PIN_P8_1__GPIO			PINMUX_PIN(PIN_P8_1, 0)
#define	PIN_P8_1__UART0_TX_C		PINMUX_PIN(PIN_P8_1, 1)
#define	PIN_P8_1__I2S0_SDO_C		PINMUX_PIN(PIN_P8_1, 2)
#define	PIN_P8_1__SPI0_SS0_C		PINMUX_PIN(PIN_P8_1, 3)
#define	PIN_P8_1__UT0_T1_C		PINMUX_PIN(PIN_P8_1, 4)
#define	PIN_P8_1__SD_CLK_C		PINMUX_PIN(PIN_P8_1, 5)
#define	PIN_P8_1__CMP1_OUT_C		PINMUX_PIN(PIN_P8_1, 6)

#define	PIN_P8_2			66
#define	PIN_P8_2__GPIO			PINMUX_PIN(PIN_P8_2, 0)
#define	PIN_P8_2__SEUART_RX_B		PINMUX_PIN(PIN_P8_2, 1)
#define	PIN_P8_2__UART1_RX_C		PINMUX_PIN(PIN_P8_2, 2)
#define	PIN_P8_2__I2S0_SCLK_C		PINMUX_PIN(PIN_P8_2, 3)
#define	PIN_P8_2__SPI0_SS1_C		PINMUX_PIN(PIN_P8_2, 4)
#define	PIN_P8_2__UT1_T0_C		PINMUX_PIN(PIN_P8_2, 5)
#define	PIN_P8_2__SD_RST_C		PINMUX_PIN(PIN_P8_2, 6)
#define	PIN_P8_2__CAN0_RXD_C		PINMUX_PIN(PIN_P8_2, 7)

#define	PIN_P8_3			67
#define	PIN_P8_3__GPIO			PINMUX_PIN(PIN_P8_3, 0)
#define	PIN_P8_3__SEUART_TX_B		PINMUX_PIN(PIN_P8_3, 1)
#define	PIN_P8_3__UART1_TX_C		PINMUX_PIN(PIN_P8_3, 2)
#define	PIN_P8_3__I2S0_WS_C		PINMUX_PIN(PIN_P8_3, 3)
#define	PIN_P8_3__SPI0_SS2_C		PINMUX_PIN(PIN_P8_3, 4)
#define	PIN_P8_3__UT1_T1_C		PINMUX_PIN(PIN_P8_3, 5)
#define	PIN_P8_3__CAN0_TXD_C		PINMUX_PIN(PIN_P8_3, 6)
#define	PIN_P8_3__EXT_RTS_B		PINMUX_PIN(PIN_P8_3, 7)

#define	PIN_P8_4			68
#define	PIN_P8_4__GPIO			PINMUX_PIN(PIN_P8_4, 0)
#define	PIN_P8_4__UART2_RX_C		PINMUX_PIN(PIN_P8_4, 1)
#define	PIN_P8_4__I2S1_SDI_C		PINMUX_PIN(PIN_P8_4, 2)
#define	PIN_P8_4__SPI1_MISO_C		PINMUX_PIN(PIN_P8_4, 3)
#define	PIN_P8_4__UT2_T0_C		PINMUX_PIN(PIN_P8_4, 4)
#define	PIN_P8_4__LPCAM_VSYNC_C		PINMUX_PIN(PIN_P8_4, 5)
#define	PIN_P8_4__CAN0_STBY_C		PINMUX_PIN(PIN_P8_4, 6)
#define	PIN_P8_4__EXT_CTS_B		PINMUX_PIN(PIN_P8_4, 7)

#define	PIN_P8_5			69
#define	PIN_P8_5__GPIO			PINMUX_PIN(PIN_P8_5, 0)
#define	PIN_P8_5__UART2_TX_C		PINMUX_PIN(PIN_P8_5, 1)
#define	PIN_P8_5__I2S1_SDO_C		PINMUX_PIN(PIN_P8_5, 2)
#define	PIN_P8_5__SPI1_MOSI_C		PINMUX_PIN(PIN_P8_5, 3)
#define	PIN_P8_5__UT2_T1_C		PINMUX_PIN(PIN_P8_5, 4)
#define	PIN_P8_5__LPCAM_HSYNC_C		PINMUX_PIN(PIN_P8_5, 5)
#define	PIN_P8_5__CAN1_RXD_B		PINMUX_PIN(PIN_P8_5, 6)
#define	PIN_P8_5__EXT_TRACE_B		PINMUX_PIN(PIN_P8_5, 7)

#define	PIN_P8_6			70
#define	PIN_P8_6__GPIO			PINMUX_PIN(PIN_P8_6, 0)
#define	PIN_P8_6__UART3_RX_C		PINMUX_PIN(PIN_P8_6, 1)
#define	PIN_P8_6__I2S1_SCLK_SLV_C	PINMUX_PIN(PIN_P8_6, 2)
#define	PIN_P8_6__SPI1_SCLK_C		PINMUX_PIN(PIN_P8_6, 3)
#define	PIN_P8_6__UT3_T0_C		PINMUX_PIN(PIN_P8_6, 4)
#define	PIN_P8_6__LPCAM_PCLK_C		PINMUX_PIN(PIN_P8_6, 5)
#define	PIN_P8_6__CAN1_TXD_B		PINMUX_PIN(PIN_P8_6, 6)
#define	PIN_P8_6__EXT_RX_B		PINMUX_PIN(PIN_P8_6, 7)

#define	PIN_P8_7			71
#define	PIN_P8_7__GPIO			PINMUX_PIN(PIN_P8_7, 0)
#define	PIN_P8_7__UART3_TX_C		PINMUX_PIN(PIN_P8_7, 1)
#define	PIN_P8_7__I2S1_WS_SLV_C		PINMUX_PIN(PIN_P8_7, 2)
#define	PIN_P8_7__SPI1_SS0_C		PINMUX_PIN(PIN_P8_7, 3)
#define	PIN_P8_7__UT3_T1_C		PINMUX_PIN(PIN_P8_7, 4)
#define	PIN_P8_7__LPCAM_XVCLK_C		PINMUX_PIN(PIN_P8_7, 5)
#define	PIN_P8_7__CAN1_STBY_B		PINMUX_PIN(PIN_P8_7, 6)
#define	PIN_P8_7__EXT_TX_B		PINMUX_PIN(PIN_P8_7, 7)

#define	PIN_P9_0			72
#define	PIN_P9_0__GPIO			PINMUX_PIN(PIN_P9_0, 0)
#define	PIN_P9_0__SEUART_RX_C		PINMUX_PIN(PIN_P9_0, 1)
#define	PIN_P9_0__LPUART_RX_C		PINMUX_PIN(PIN_P9_0, 2)
#define	PIN_P9_0__LPI2S_SDI_C		PINMUX_PIN(PIN_P9_0, 3)
#define	PIN_P9_0__SPI1_SS1_C		PINMUX_PIN(PIN_P9_0, 4)
#define	PIN_P9_0__FAULT0_C		PINMUX_PIN(PIN_P9_0, 5)
#define	PIN_P9_0__LPCAM_D0_C		PINMUX_PIN(PIN_P9_0, 6)
#define	PIN_P9_0__SD_D0_C		PINMUX_PIN(PIN_P9_0, 7)

#define	PIN_P9_1			73
#define	PIN_P9_1__GPIO			PINMUX_PIN(PIN_P9_1, 0)
#define	PIN_P9_1__LPUART_TX_C		PINMUX_PIN(PIN_P9_1, 1)
#define	PIN_P9_1__LPI2S_SDO_C		PINMUX_PIN(PIN_P9_1, 2)
#define	PIN_P9_1__SPI1_SS2_C		PINMUX_PIN(PIN_P9_1, 3)
#define	PIN_P9_1__FAULT1_C		PINMUX_PIN(PIN_P9_1, 4)
#define	PIN_P9_1__LPCAM_D1_C		PINMUX_PIN(PIN_P9_1, 5)
#define	PIN_P9_1__SD_D1_C		PINMUX_PIN(PIN_P9_1, 6)

#define	PIN_P9_2			74
#define	PIN_P9_2__GPIO			PINMUX_PIN(PIN_P9_2, 0)
#define	PIN_P9_2__LPUART_RTS_C		PINMUX_PIN(PIN_P9_2, 1)
#define	PIN_P9_2__LPI2S_SCLK_C		PINMUX_PIN(PIN_P9_2, 2)
#define	PIN_P9_2__SPI2_MISO_C		PINMUX_PIN(PIN_P9_2, 3)
#define	PIN_P9_2__FAULT2_C		PINMUX_PIN(PIN_P9_2, 4)
#define	PIN_P9_2__LPCAM_D2_C		PINMUX_PIN(PIN_P9_2, 5)
#define	PIN_P9_2__SD_D2_C		PINMUX_PIN(PIN_P9_2, 6)
#define	PIN_P9_2__I3C_SCL_C		PINMUX_PIN(PIN_P9_2, 7)

#define	PIN_P9_3			75
#define	PIN_P9_3__GPIO			PINMUX_PIN(PIN_P9_3, 0)
#define	PIN_P9_3__LPUART_CTS_C		PINMUX_PIN(PIN_P9_3, 1)
#define	PIN_P9_3__LPI2S_WS_C		PINMUX_PIN(PIN_P9_3, 2)
#define	PIN_P9_3__SPI2_MOSI_C		PINMUX_PIN(PIN_P9_3, 3)
#define	PIN_P9_3__FAULT3_C		PINMUX_PIN(PIN_P9_3, 4)
#define	PIN_P9_3__LPCAM_D3_C		PINMUX_PIN(PIN_P9_3, 5)
#define	PIN_P9_3__SD_D3_C		PINMUX_PIN(PIN_P9_3, 6)
#define	PIN_P9_3__I3C_SDA_C		PINMUX_PIN(PIN_P9_3, 7)

#define	PIN_P9_4			76
#define	PIN_P9_4__GPIO			PINMUX_PIN(PIN_P9_4, 0)
#define	PIN_P9_4__UART4_RX_C		PINMUX_PIN(PIN_P9_4, 1)
#define	PIN_P9_4__LPPDM_C2_C		PINMUX_PIN(PIN_P9_4, 2)
#define	PIN_P9_4__SPI2_SCLK_C		PINMUX_PIN(PIN_P9_4, 3)
#define	PIN_P9_4__LPCAM_D4_C		PINMUX_PIN(PIN_P9_4, 4)
#define	PIN_P9_4__SD_D4_C		PINMUX_PIN(PIN_P9_4, 5)
#define	PIN_P9_4__CAN1_RXD_C		PINMUX_PIN(PIN_P9_4, 6)

#define	PIN_P9_5			77
#define	PIN_P9_5__GPIO			PINMUX_PIN(PIN_P9_5, 0)
#define	PIN_P9_5__UART4_TX_C		PINMUX_PIN(PIN_P9_5, 1)
#define	PIN_P9_5__LPPDM_D2_C		PINMUX_PIN(PIN_P9_5, 2)
#define	PIN_P9_5__SPI2_SS0_C		PINMUX_PIN(PIN_P9_5, 3)
#define	PIN_P9_5__LPCAM_D5_C		PINMUX_PIN(PIN_P9_5, 4)
#define	PIN_P9_5__SD_D5_C		PINMUX_PIN(PIN_P9_5, 5)
#define	PIN_P9_5__CAN1_TXD_C		PINMUX_PIN(PIN_P9_5, 6)

#define	PIN_P9_6			78
#define	PIN_P9_6__GPIO			PINMUX_PIN(PIN_P9_6, 0)
#define	PIN_P9_6__UART5_RX_C		PINMUX_PIN(PIN_P9_6, 1)
#define	PIN_P9_6__LPPDM_C3_C		PINMUX_PIN(PIN_P9_6, 2)
#define	PIN_P9_6__SPI2_SS1_C		PINMUX_PIN(PIN_P9_6, 3)
#define	PIN_P9_6__LPCAM_D6_C		PINMUX_PIN(PIN_P9_6, 4)
#define	PIN_P9_6__SD_D6_C		PINMUX_PIN(PIN_P9_6, 5)
#define	PIN_P9_6__CAN1_STBY_C		PINMUX_PIN(PIN_P9_6, 6)

#define	PIN_P9_7			79
#define	PIN_P9_7__GPIO			PINMUX_PIN(PIN_P9_7, 0)
#define	PIN_P9_7__UART5_TX_C		PINMUX_PIN(PIN_P9_7, 1)
#define	PIN_P9_7__LPPDM_D3_C		PINMUX_PIN(PIN_P9_7, 2)
#define	PIN_P9_7__LPSPI_SS_C		PINMUX_PIN(PIN_P9_7, 3)
#define	PIN_P9_7__LPCAM_D7_C		PINMUX_PIN(PIN_P9_7, 4)
#define	PIN_P9_7__SD_D7_C		PINMUX_PIN(PIN_P9_7, 5)

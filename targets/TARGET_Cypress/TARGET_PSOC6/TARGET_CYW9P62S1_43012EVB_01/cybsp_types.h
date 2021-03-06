/***************************************************************************//**
* \file CYW9P62S1-43012EVB-01/cybsp_types.h
*
* Description:
* Provides APIs for interacting with the hardware contained on the Cypress
* CYW9P62S1-43012EVB-01 evaluation kit.
*
********************************************************************************
* \copyright
* Copyright 2018-2019 Cypress Semiconductor Corporation
* SPDX-License-Identifier: Apache-2.0
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*******************************************************************************/

#pragma once

#if defined(CY_USING_HAL)
#include "cyhal_pin_package.h"
#endif

#if defined(__cplusplus)
extern "C" {
#endif

/**
* \addtogroup group_bsp_settings BSP Settings
* \{
*
* <div class="category">Peripheral Default HAL Settings:</div>
* | Resource | Parameter | Value | Remarks |
* | :------: | :-------: | :---: | :------ |
* | ADC      | VREF      | 1.2 V | |
* | ^        | Measurement type | Single Ended | |
* | ^        | Input voltage range | 0 to 2.4 V (0 to 2*VREF) | |
* | ^        | Output range | 0x000 to 0x7FF | |
* | DAC      | Reference source | VDDA | |
* | ^        | Input range | 0x000 to 0xFFF | |
* | ^        | Output range | 0 to VDDA | |
* | ^        | Output type | Unbuffered output | |
* | I2C      | Role | Master | Configurable to slave mode through HAL function |
* | ^        | Data rate | 100 kbps | Configurable through HAL function |
* | ^        | Drive mode of SCL & SDA pins | Open Drain (drives low) | External pull-up resistors are required |
* | LpTimer  | Uses WCO (32.768 kHz) as clock source & MCWDT as counter. 1 count = 1/32768 second or 32768 counts = 1 second. |||
* | SPI      | Data rate | 100 kpbs | Configurable through HAL function |
* | ^        | Slave select polarity | Active low | |
* | UART     | Flow control | No flow control | Configurable through HAL function |
* | ^        | Data format | 8N1 | Configurable through HAL function |
* | ^        | Baud rate | 115200 | Configurable through HAL function |
*/
/** \} group_bsp_settings */

/**
* \addtogroup group_bsp_pin_state Pin States
* \{
*/

/** Pin state for the LED on. */
#define CYBSP_LED_STATE_ON          (0U)
/** Pin state for the LED off. */
#define CYBSP_LED_STATE_OFF         (1U)

/** Pin state for when a button is pressed. */
#define CYBSP_BTN_PRESSED           (0U)
/** Pin state for when a button is released. */
#define CYBSP_BTN_OFF               (1U)

/** \} group_bsp_pin_state */

#if defined(CY_USING_HAL)

/**
* \addtogroup group_bsp_pins Pin Mappings
* \{
*/

/**
* \addtogroup group_bsp_pins_led LED Pins
* \{
*/

/** LED 8; User LED1 */
#define CYBSP_LED8                  (P1_5)
/** LED 9; User LED2 */
#define CYBSP_LED9                  (P11_0)

/** LED 8; User LED1 */
#define CYBSP_USER_LED1             (CYBSP_LED8)
/** LED 9; User LED2 */
#define CYBSP_USER_LED2             (CYBSP_LED9)
/** LED 8; User LED1 */
#define CYBSP_USER_LED              (CYBSP_USER_LED1)

/** \} group_bsp_pins_led */

/**
* \addtogroup group_bsp_pins_btn Button Pins
* \{
*/

/** Switch 2; User Button 1 */
#define CYBSP_SW2                   (P1_4)

/** Switch 2; User Button 1 */
#define CYBSP_USER_BTN1             (CYBSP_SW2)
/** Switch 2; User Button 1 */
#define CYBSP_USER_BTN              (CYBSP_USER_BTN1)

/** \} group_bsp_pins_btn */


/**
* \addtogroup group_bsp_pins_comm Communication Pins
* \{
*/

/** Pin: CYBSP_WIFI_SDIO_D0 */
#define CYBSP_WIFI_SDIO_D0          (P12_1)
/** Pin: CYBSP_WIFI_SDIO_D1 */
#define CYBSP_WIFI_SDIO_D1          (P12_2)
/** Pin: CYBSP_WIFI_SDIO_D2 */
#define CYBSP_WIFI_SDIO_D2          (P12_3)
/** Pin: CYBSP_WIFI_SDIO_D3 */
#define CYBSP_WIFI_SDIO_D3          (P12_4)
/** Pin: CYBSP_WIFI_SDIO_CMD */
#define CYBSP_WIFI_SDIO_CMD         (P12_5)
/** Pin: CYBSP_WIFI_SDIO_CLK */
#define CYBSP_WIFI_SDIO_CLK         (P12_0)
/** Pin: CYBSP_WIFI_WL_REG_ON */
#define CYBSP_WIFI_WL_REG_ON        (P6_2)
/** Pin: CYBSP_WIFI_HOST_WAKE */
#define CYBSP_WIFI_HOST_WAKE        (P6_0)

/** Pin: CYBSP_BT_UART_RX */
#define CYBSP_BT_UART_RX            (P8_0)
/** Pin: CYBSP_BT_UART_TX */
#define CYBSP_BT_UART_TX            (P8_1)
/** Pin: CYBSP_BT_UART_RTS */
#define CYBSP_BT_UART_RTS           (P8_2)
/** Pin: CYBSP_BT_UART_CTS */
#define CYBSP_BT_UART_CTS           (P8_3)
/** Pin: BT Power */
#define CYBSP_BT_POWER              (P6_3)
/** Pin: CYBSP_BT_HOST_WAKE */
#define CYBSP_BT_HOST_WAKE          (P8_4)
/** Pin: CYBSP_BT_DEVICE_WAKE */
#define CYBSP_BT_DEVICE_WAKE        (P6_1)

/** Pin: UART RX */
#define CYBSP_DEBUG_UART_RX         (P5_0)
/** Pin: UART TX */
#define CYBSP_DEBUG_UART_TX         (P5_1)
/** Pin: UART RX */
#define CYBSP_DEBUG_UART_RTS        (P5_2)
/** Pin: UART TX */
#define CYBSP_DEBUG_UART_CTS        (P5_3)

/** Pin: I2C SCL */
#define CYBSP_I2C_SCL               (P1_0)
/** Pin: I2C SDA */
#define CYBSP_I2C_SDA               (P1_1)

/** Pin: CYBSP_TDO_SWO */
#define CYBSP_TDO_SWO               (P6_4)
/** Pin: CYBSP_TMS_SWDIO */
#define CYBSP_TMS_SWDIO             (P6_6)
/** Pin: CYBSP_SWCLK */
#define CYBSP_SWCLK                 (P6_7)

/** Pin: QUAD SPI SS */
#define CYBSP_QSPI_SS               (P11_2)
/** Pin: QUAD SPI D3 */
#define CYBSP_QSPI_D3               (P11_3)
/** Pin: QUAD SPI D2 */
#define CYBSP_QSPI_D2               (P11_4)
/** Pin: QUAD SPI D1 */
#define CYBSP_QSPI_D1               (P11_5)
/** Pin: QUAD SPI D0 */
#define CYBSP_QSPI_D0               (P11_6)
/** Pin: QUAD SPI SCK */
#define CYBSP_QSPI_SCK              (P11_7)

/** Pin: SPI MOSI */
#define CYBSP_SPI_MOSI              (P0_2)
/** Pin: SPI MISO */
#define CYBSP_SPI_MISO              (P0_3)
/** Pin: SPI CLK */
#define CYBSP_SPI_CLK               (P0_4)
/** Pin: SPI CS */
#define CYBSP_SPI_CS                (P0_5)

/** Host-wake GPIO drive mode */
#define CYBSP_WIFI_HOST_WAKE_GPIO_DM (CYHAL_GPIO_DRIVE_ANALOG)
/** Host-wake IRQ event */
#define CYBSP_WIFI_HOST_WAKE_IRQ_EVENT (CYHAL_GPIO_IRQ_RISE)

/** \} group_bsp_pins_comm */


/**
* \addtogroup group_bsp_pins_arduino Arduino Header Pins
* \{
*/

/** Arduino A0 */
#define CYBSP_A0                    P10_0
/** Arduino A1 */
#define CYBSP_A1                    P10_1
/** Arduino A2 */
#define CYBSP_A2                    P6_4
/** Arduino A3 */
#define CYBSP_A3                    P6_5
/** Arduino A4 */
#define CYBSP_A4                    P10_4
/** Arduino A5 */
#define CYBSP_A5                    P10_5
/** Arduino D0 */
#define CYBSP_D0                    (P5_0)
/** Arduino D1 */
#define CYBSP_D1                    (P5_1)
/** Arduino D2 */
#define CYBSP_D2                    (P5_2)
/** Arduino D3 */
#define CYBSP_D3                    (P5_3)
/** Arduino D4 */
#define CYBSP_D4                    (P5_4)
/** Arduino D5 */
#define CYBSP_D5                    (P5_5)
/** Arduino D6 */
#define CYBSP_D6                    (P5_6)
/** Arduino D7 */
#define CYBSP_D7                    (P5_7)
/** Arduino D8 */
#define CYBSP_D8                    (NC)
/** Arduino D9 */
#define CYBSP_D9                    (NC)
/** Arduino D10 */
#define CYBSP_D10                   (P0_5)
/** Arduino D11 */
#define CYBSP_D11                   (P0_2)
/** Arduino D12 */
#define CYBSP_D12                   (P0_3)
/** Arduino D13 */
#define CYBSP_D13                   (P0_4)
/** Arduino D14 */
#define CYBSP_D14                   (NC)
/** Arduino D15 */
#define CYBSP_D15                   (NC)

/** \} group_bsp_pins_arduino */


/**
* \addtogroup group_bsp_pins_j2 J2 Header Pins
* \{
* All the pins, other than A0-A5 are No Connects
* \} group_bsp_pins_j2 */

/** \} group_bsp_pins */

#endif /* defined(CY_USING_HAL) */

#if defined(__cplusplus)
}
#endif

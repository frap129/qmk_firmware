/* Copyright 2022 Brian Low
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID       0xFC32 // Copied from sofle/rev1 so that Via works
#define PRODUCT_ID      0x0287 // Copied from sofle/rev1 so that Via works
#define DEVICE_VER      0x0001
#define MANUFACTURER    Brian Low
#define PRODUCT         Sofle Choc

// Key matrix size
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// Wiring of each half
#define MATRIX_ROW_PINS { C6, D7, E6, B4, B5 }
#define MATRIX_COL_PINS { F6, F7, B1, B3, B2, B6 }
#define DIODE_DIRECTION COL2ROW

#define DEBOUNCE 5

// Encoder support
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 2

// Communication between sides
#define USE_SERIAL
#define SOFT_SERIAL_PIN D2

#ifdef RGB_MATRIX_ENABLE
#define RGB_DI_PIN D3
#define RGBLED_NUM 29
#define DRIVER_LED_TOTAL 58
#define RGB_MATRIX_SPLIT { 29, 29 }
#endif

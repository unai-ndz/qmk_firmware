/* Copyright 2021 Mike Tsao
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

// config.h

#pragma once

// #include "config_common.h"

#define TAPPING_TOGGLE 2
#define DYNAMIC_KEYMAP_LAYER_COUNT 14
#define DYNAMIC_KEYMAP_MACRO_COUNT 15
// key matrix size
#define MATRIX_ROWS 3
#define MATRIX_COLS 7

// Want backlighting and RGB Matrix patterns? See the note in the readme,
// apply the patches, and then uncomment the line below as well as the ones
// in rules.mk.
//
// #define BACKLIGHT_PIN rgb_matrix
#define RGB_MATRIX_KEYPRESSES
#define RGBLED_NUM 11
#define DRIVER_LED_TOTAL RGBLED_NUM
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 128
#define WS2812_PWM_DRIVER PWMD4
#define WS2812_PWM_CHANNEL 4
#define WS2812_PWM_PAL_MODE 2
#define WS2812_DMA_STREAM STM32_DMA1_STREAM7
#define WS2812_DMA_CHANNEL 7

// RGB Matrix Animation modes. Explicitly enabled
// enabled only if RGB_MATRIX_FRAMEBUFFER_EFFECTS is defined
// #define ENABLE_RGB_MATRIX_TYPING_HEATMAP
// #define ENABLE_RGB_MATRIX_DIGITAL_RAIN
// enabled only of RGB_MATRIX_KEYPRESSES or RGB_MATRIX_KEYRELEASES is defined

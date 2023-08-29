/*
Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2013 Oleg Kostyuk <cub.uanic@gmail.com>
Copyright 2015 ZSA Technology Labs Inc (@zsa)
Copyright 2020 Christopher Courtney <drashna@live.com> (@drashna)
Copyright 2022 Diogo Behrens (@db7)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x0db7
#define DEVICE_VER      0x0002
#define MANUFACTURER    Unknown
#define PRODUCT_ID      0x1db7
#define PRODUCT         ErgoDox db7 mod

/* key matrix size */
#define MATRIX_ROWS 14
#define MATRIX_ROWS_PER_SIDE (MATRIX_ROWS / 2)
#define MATRIX_COLS 6

#define COL_EXPANDED { true, true, true, true, true, true, true, false, false, false, false, false, false, false }
#define MATRIX_ONBOARD_ROW_PINS { 0, 0, 0, 0, 0, 0, 0, B0,  B1,  B2,  B3,  D2,  D3,  C6 }
#define MATRIX_ONBOARD_COL_PINS { F0,  F1,  F4,  F5,  F6,  F7 }
#define DIODE_DIRECTION COL2ROW
#define EXPANDER_COL_REGISTER GPIOB
#define EXPANDER_ROW_REGISTER GPIOA
#define MATRIX_EXPANDER_COL_PINS { 5, 4, 3, 2, 1, 0 }
#define MATRIX_EXPANDER_ROW_PINS { 0, 1, 2, 3, 4, 5, 6 }


//#define MOUSEKEY_INTERVAL       20
//#define MOUSEKEY_DELAY          0
//#define MOUSEKEY_TIME_TO_MAX    60
//#define MOUSEKEY_MAX_SPEED      7
//#define MOUSEKEY_WHEEL_DELAY 0
/*
#MOUSEKEY_DELAY	300	Delay between pressing a movement key and cursor movement
#MOUSEKEY_INTERVAL	50	Time between cursor movements
#MOUSEKEY_MAX_SPEED	10	Maximum cursor speed at which acceleration stops
#MOUSEKEY_TIME_TO_MAX	20	Time until maximum cursor speed is reached
#MOUSEKEY_WHEEL_MAX_SPEED	8	Maximum number of scroll steps per scroll action
#MOUSEKEY_WHEEL_TIME_TO_MAX	40	Time until maximum scroll speed is reached
*/
#define MOUSEKEY_WHEEL_DELAY 1000
#define MOUSEKEY_WHEEL_MAX_SPEED	0	//Maximum number of scroll steps per scroll action
#define MOUSEKEY_WHEEL_TIME_TO_MAX	0 //Time until maximum scroll speed is reached
#define MOUSEKEY_MAX_SPEED 0	//Maximum cursor speed at which acceleration stops
#define MOUSEKEY_TIME_TO_MAX	0	//Time until maximum cursor speed is reached

#define DEBOUNCE 30

#define TAPPING_TOGGLE  1

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

#define TAPPING_TERM    200
#define IGNORE_MOD_TAP_INTERRUPT // this makes it possible to do rolling combos (zx) with keys that convert to other keys on hold (z becomes ctrl when you hold it, and when this option isn't enabled, z rapidly followed by x actually sends Ctrl-x. That's bad.)

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    get_mods() == (MOD_BIT(KC_LCTL) | MOD_BIT(KC_RCTL)) || \
    get_mods() == (MOD_BIT(KC_LSFT) | MOD_BIT(KC_RSFT)) \
)

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

#ifndef LED_BRIGHTNESS_LO
#define LED_BRIGHTNESS_LO       15
#endif
#ifndef LED_BRIGHTNESS_HI
#define LED_BRIGHTNESS_HI       255
#endif
#define LED_BRIGHTNESS_DEFAULT (LED_BRIGHTNESS_HI)

/* ws2812 RGB LED */
#define RGB_DI_PIN D7
#define RGBLIGHT_ANIMATIONS
#define RGBLIGHT_HUE_STEP 12
#define RGBLIGHT_SAT_STEP 255
#define RGBLIGHT_VAL_STEP 12

// Pick one of the modes
// Defaults to 15 mirror, for legacy behavior

// #define ERGODOX_LED_15 // Addresses 15 LEDs, but same position on both halves
// #define ERGODOX_LED_15_MIRROR // Addresses 15 LEDs, but are mirrored
// #define ERGODOX_LED_30 // Addresses all 30 LED individually

/* fix space cadet rollover issue */
#define DISABLE_SPACE_CADET_ROLLOVER

#define RGBW

#define RGBLIGHT_SLEEP

/*
 * The debounce filtering reports a key/switch change directly,
 * without any extra delay. After that the debounce logic will filter
 * all further changes, until the key/switch reports the same state for
 * the given count of scans.
 * So a perfect switch will get a short debounce period and
 * a bad key will get a much longer debounce period.
 * The result is an adaptive debouncing period for each switch.
 *
 * If you don't define it here, the matrix code will default to
 * 5, which is now closer to 10ms, but still plenty according to
 * manufacturer specs.
 */


// RGB backlight
#define DRIVER_ADDR_1 0b1110100
#define DRIVER_ADDR_2 0b1110111
#define DRIVER_COUNT 2
#define DRIVER_1_LED_TOTAL 24
#define DRIVER_2_LED_TOTAL 24
#define DRIVER_LED_TOTAL (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define RGB_MATRIX_LED_PROCESS_LIMIT 5
#define RGB_MATRIX_LED_FLUSH_LIMIT 26

#define RGB_DISABLE_WHEN_USB_SUSPENDED true

// #define RGBLIGHT_COLOR_LAYER_0 0x00, 0x00, 0xFF
/* #define RGBLIGHT_COLOR_LAYER_1 0x00, 0x00, 0xFF */
/* #define RGBLIGHT_COLOR_LAYER_2 0xFF, 0x00, 0x00 */
/* #define RGBLIGHT_COLOR_LAYER_3 0x00, 0xFF, 0x00 */
/* #define RGBLIGHT_COLOR_LAYER_4 0xFF, 0xFF, 0x00 */
/* #define RGBLIGHT_COLOR_LAYER_5 0x00, 0xFF, 0xFF */
/* #define RGBLIGHT_COLOR_LAYER_6 0xFF, 0x00, 0xFF */
/* #define RGBLIGHT_COLOR_LAYER_7 0xFF, 0xFF, 0xFF */

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION
#define DEBUG_MATRIX_SCAN_RATE

#define PS2_MOUSE_ROTATE 90
#ifdef PS2_USE_USART
    #define PS2_CLOCK_PORT  PORTD
    #define PS2_CLOCK_PIN   PIND
    #define PS2_CLOCK_DDR   DDRD
    #define PS2_CLOCK_BIT   5
    #define PS2_DATA_PORT   PORTD
    #define PS2_DATA_PIN    PIND
    #define PS2_DATA_DDR    DDRD
    #define PS2_DATA_BIT    2

    /* synchronous, odd parity, 1-bit stop, 8-bit data, sample at falling edge */
    /* set DDR of CLOCK as input to be slave */
    #define PS2_USART_INIT() do {   \
        PS2_CLOCK_DDR &= ~(1<<PS2_CLOCK_BIT);   \
        PS2_DATA_DDR &= ~(1<<PS2_DATA_BIT);     \
        UCSR1C = ((1 << UMSEL10) |  \
                  (3 << UPM10)   |  \
                  (0 << USBS1)   |  \
                  (3 << UCSZ10)  |  \
                  (0 << UCPOL1));   \
        UCSR1A = 0;                 \
        UBRR1H = 0;                 \
        UBRR1L = 0;                 \
    } while (0)
    #define PS2_USART_RX_INT_ON() do {  \
        UCSR1B = ((1 << RXCIE1) |       \
                  (1 << RXEN1));        \
    } while (0)
    #define PS2_USART_RX_POLL_ON() do { \
        UCSR1B = (1 << RXEN1);          \
    } while (0)
    #define PS2_USART_OFF() do {    \
        UCSR1C = 0;                 \
        UCSR1B &= ~((1 << RXEN1) |  \
                    (1 << TXEN1));  \
    } while (0)
    #define PS2_USART_RX_READY      (UCSR1A & (1<<RXC1))
    #define PS2_USART_RX_DATA       UDR1
    #define PS2_USART_ERROR         (UCSR1A & ((1<<FE1) | (1<<DOR1) | (1<<UPE1)))
    #define PS2_USART_RX_VECT       USART1_RX_vect
#endif



/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once

#undef PRODUCT
#undef DEVICE_VER
#undef MANUFACTURER
#define DEVICE_VER      0x0002
#define MANUFACTURER    Custom Massdrop
#define PRODUCT         ErgoDox PS2

/* PS/2 mouse */
#ifdef PS2_USE_BUSYWAIT
#   define PS2_CLOCK_PORT  PORTD
#   define PS2_CLOCK_PIN   PIND
#   define PS2_CLOCK_DDR   DDRD
#   define PS2_CLOCK_BIT   4
#   define PS2_DATA_PORT   PORTD
#   define PS2_DATA_PIN    PIND
#   define PS2_DATA_DDR    DDRD
#   define PS2_DATA_BIT    5
#endif

#ifdef PS2_USE_INT
#   define PS2_CLOCK_PORT  PORTD
#   define PS2_CLOCK_PIN   PIND
#   define PS2_CLOCK_DDR   DDRD
#   define PS2_CLOCK_BIT   2
#   define PS2_DATA_PORT   PORTD
#   define PS2_DATA_PIN    PIND
#   define PS2_DATA_DDR    DDRD
#   define PS2_DATA_BIT    5
#   define PS2_INT_INIT()  do { EICRA |= ((1<<ISC21) | (0<<ISC20)); } while (0)
#   define PS2_INT_ON()    do { EIMSK |= (1<<INT2); } while (0)
#   define PS2_INT_OFF()   do { EIMSK &= ~(1<<INT2); } while (0)
#   define PS2_INT_VECT    INT2_vect
#endif

#define PS2_MOUSE_USE_1_1_SCALING
//#define PS2_MOUSE_SCROLL_DIVISOR_H 5
//#define PS2_MOUSE_SCROLL_DIVISOR_V 5
#define PS2_MOUSE_INVERT_V
#define PS2_MOUSE_INVERT_H
#define PS2_MOUSE_V_MULTIPLIER 1
#define PS2_MOUSE_DEBUG_HID
//#define PS2_MOUSE_DEBUG_RAW
#define PS2_MOUSE_SCROLL_MAX_H 1
#define PS2_MOUSE_SCROLL_MAX_V 1
#define PS2_MOUSE_SCROLL_DELAY 100
#define PS2_MOUSE_SCROLL_BTN_SEND 10

#if 0
#undef MOUSEKEY_DELAY
#undef MOUSEKEY_INTERVAL
#undef MOUSEKEY_MAX_SPEED
#undef MOUSEKEY_TIME_TO_MAX
#undef MOUSEKEY_WHEEL_MAX_SPEED
#undef MOUSEKEY_WHEEL_TIME_TO_MAX

#define MOUSEKEY_DELAY             300
#define MOUSEKEY_INTERVAL          50
#define MOUSEKEY_MAX_SPEED         10
#define MOUSEKEY_TIME_TO_MAX       20
#define MOUSEKEY_WHEEL_MAX_SPEED   2
#endif 
/*
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#undef MOUSEKEY_WHEEL_MAX_SPEED
#undef MOUSEKEY_WHEEL_INTERVAL

#define MOUSEKEY_WHEEL_INTERVAL    200
#define MOUSEKEY_WHEEL_MAX_SPEED   1
#define MOUSEKEY_WHEEL_TIME_TO_MAX 0


#define MK_KINETIC_SPEED
#undef MOUSEKEY_WHEEL_INITIAL_MOVEMENTS
#undef MOUSEKEY_WHEEL_BASE_MOVEMENTS
#undef MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS
#undef MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS

#define MOUSEKEY_WHEEL_INITIAL_MOVEMENTS     1 // 16
#define MOUSEKEY_WHEEL_BASE_MOVEMENTS        1 // 32
#define MOUSEKEY_WHEEL_ACCELERATED_MOVEMENTS 1 // 48
#define MOUSEKEY_WHEEL_DECELERATED_MOVEMENTS 1 // 8

*/
//MOUSEKEY_WHEEL_INITIAL_MOVEMENTS
/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/
#pragma once

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

//#define MOUSEKEY_INTERVAL       20
//#define MOUSEKEY_DELAY          0
//#define MOUSEKEY_TIME_TO_MAX    60
//#define MOUSEKEY_MAX_SPEED      7
//#define MOUSEKEY_WHEEL_DELAY    0
/*
#MOUSEKEY_DELAY	300	Delay between pressing a movement key and cursor movement
#MOUSEKEY_INTERVAL	50	Time between cursor movements
#MOUSEKEY_MAX_SPEED	10	Maximum cursor speed at which acceleration stops
#MOUSEKEY_TIME_TO_MAX	20	Time until maximum cursor speed is reached
#MOUSEKEY_WHEEL_MAX_SPEED	8	Maximum number of scroll steps per scroll action
#MOUSEKEY_WHEEL_TIME_TO_MAX	40	Time until maximum scroll speed is reached
*/
#undef MOUSEKEY_WHEEL_DELAY
#define MOUSEKEY_WHEEL_DELAY 1000
#undef MOUSEKEY_WHEEL_MAX_SPEED
#define MOUSEKEY_WHEEL_MAX_SPEED	0	//Maximum number of scroll steps per scroll action
#undef MOUSEKEY_WHEEL_TIME_TO_MAX
#define MOUSEKEY_WHEEL_TIME_TO_MAX	0 //Time until maximum scroll speed is reached
#undef MOUSEKEY_MAX_SPEED
#define MOUSEKEY_MAX_SPEED 0	//Maximum cursor speed at which acceleration stops
#undef MOUSEKEY_TIME_TO_MAX
#define MOUSEKEY_TIME_TO_MAX	0	//Time until maximum cursor speed is reached
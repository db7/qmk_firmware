MCU = atmega32u4
BOOTLOADER = halfkay
BOOTMAGIC_ENABLE  = no   # Virtual DIP switch configuration
MOUSEKEY_ENABLE   = yes  # Mouse keys
EXTRAKEY_ENABLE   = yes  # Audio control and System control
CONSOLE_ENABLE    = no   # Console for debug
COMMAND_ENABLE    = yes  # Commands for debug and configuration
CUSTOM_MATRIX     = lite # Custom matrix file for the ErgoDox EZ
NKRO_ENABLE       = yes  # USB Nkey Rollover - if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
UNICODE_ENABLE    = yes  # Unicode
SWAP_HANDS_ENABLE = no  # Allow swapping hands of keyboard
SLEEP_LED_ENABLE  = no
API_SYSEX_ENABLE  = no
RGB_MATRIX_ENABLE = no

DEBOUNCE_TYPE     = eager_pr
PS2_MOUSE_ENABLE  = no
PS2_USE_USART     = no
PS2_USE_BUSYWAIT  = no

SRC += matrix.c
QUANTUM_LIB_SRC += i2c_master.c
LAYOUTS = ergodox

# Disable unsupported hardware
AUDIO_SUPPORTED = no
BACKLIGHT_SUPPORTED = no

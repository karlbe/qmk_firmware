# MCU name
MCU = STM32F401

# Address of the bootloader in system memory
STM32_BOOTLOADER_ADDRESS = 0x1FFF0000

# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = full     # Virtual DIP switch configuration
MOUSEKEY_ENABLE = no       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
KEYBOARD_SHARED_EP = yes
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = no         # Commands for debug and configuration
# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no       # Breathing sleep LED during USB suspend
# if this doesn't work, see here: https://github.com/tmk/tmk_keyboard/wiki/FAQ#nkro-doesnt-work
NKRO_ENABLE = yes           # USB Nkey Rollover
BACKLIGHT_ENABLE = no      # Enable keyboard backlight functionality
#BACKLIGHT_DRIVER = software
RGBLIGHT_ENABLE = no        # Enable keyboard RGB underglow
BLUETOOTH_ENABLE = no       # Enable Bluetooth
AUDIO_ENABLE = no           # Audio output
#AUTO_SHIFT_ENABLE = yes

# fix for arm linking with auto shift: https://github.com/qmk/qmk_firmware/issues/8809
EXTRAFLAGS += --specs=nosys.specs

LAYOUTS = ortho_5x15
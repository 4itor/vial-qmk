BOOTMAGIC_ENABLE = lite      # Virtual DIP switch configuration
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no        # Console for debug
COMMAND_ENABLE = no        # Commands for debug and configuration
NKRO_ENABLE = yes            # USB Nkey Rollover

# reviung34_rgb
RGBLIGHT_ENABLE = no

VIA_ENABLE = yes
VIAL_ENABLE = yes
QMK_SETTINGS = yes
COMBO_ENABLE = yes

# LTO_ENABLE = yes
SPACE_CADET_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

SRC += features/caps_word.c

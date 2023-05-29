VIA_ENABLE = yes
VIAL_ENABLE = yes
QMK_SETTINGS = yes
# CAPS_WORD_ENABLE = yes
LTO_ENABLE = yes
COMMAND_ENABLE = no
SPACE_CADET_ENABLE = yes
KEY_OVERRIDE_ENABLE = yes

# Bootloader selection for Frood controllers.
BOOTLOADER = rp2040
CONVERT_TO = promicro_rp2040

SRC += features/caps_word.c

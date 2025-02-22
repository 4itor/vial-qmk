y#pragma once

#define VIAL_KEYBOARD_UID {0xB8, 0x68, 0xB9, 0x6C, 0x13, 0x2E, 0xA7, 0xDD}
#define VIAL_UNLOCK_COMBO_ROWS {0, 3}
#define VIAL_UNLOCK_COMBO_COLS {0, 5}

// v6 Frood MicroController
#define RP2040_FLASH_GD25Q64CS

// Number of Key Ovverides
#define VIAL_KEY_OVERRIDE_ENTRIES 4

// Declare Low Power USB usage
#define USB_MAX_POWER_CONSUMPTION 100

// Combo Settings
#define COMBO_TERM 40
#define EXTRA_SHORT_COMBOS


// Number of layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 16

// Configure the global tapping term (default: 200ms)
#define TAPPING_TERM 220

// Prevent normal rollover on alphas from accidentally triggering mods.
#define IGNORE_MOD_TAP_INTERRUPT

// Enable rapid switch from tap to hold, disables double tap hold auto-repeat.
#define TAPPING_FORCE_HOLD

// Reduce firmware size if not onsehot actions
// #define NO_ACTION_ONESHOT

// Max CapsWord lenght
#define CAPS_WORD_IDLE_TIMEOUT 3000

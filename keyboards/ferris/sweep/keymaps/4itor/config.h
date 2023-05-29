/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x47, 0x97, 0x7E, 0x32, 0xC9, 0xAC, 0x13, 0xF3}

// #define VIAL_INSECURE

// #define VIAL_UNLOCK_COMBO_ROWS { 2, 3, 0, 0, 0 }
// #define VIAL_UNLOCK_COMBO_COLS { 0, 1, 0, 2, 4 }

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 4 }

// Number of Key Ovverides
#define VIAL_KEY_OVERRIDE_ENTRIES 16

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

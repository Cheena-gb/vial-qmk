// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#include "keymap_japanese.h"
enum layer_number {
  _QWERTY = 0,
  _FN,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
		KC_ESC,  JP_ZKHK, KC_1,    KC_2,    KC_3,   KC_4,   KC_5,    KC_6,    KC_7,    KC_8,   KC_9,    KC_0,    JP_MINS, JP_CIRC, JP_YEN, KC_BSPC,
    	KC_NO,   KC_TAB,  KC_Q,    KC_W,    KC_E,   KC_R,   KC_T,    KC_Y,    KC_U,    KC_I,   KC_O,    KC_P,    JP_AT,   JP_LBRC, KC_ENT,
    	KC_NO,   KC_CAPS, KC_A,    KC_S,    KC_D,   KC_F,   KC_G,    KC_H,    KC_J,    KC_K,   KC_L,    JP_SCLN, JP_COLN, JP_RBRC,
    	KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT, JP_SLSH, JP_BSLS, KC_RSFT, KC_NO,
    	KC_LCTL, KC_LGUI, KC_LALT, JP_MHEN, KC_SPC, KC_SPC, JP_HENK, JP_KANA, KC_RALT, KC_APP, KC_RCTL
    	
    ),
	[_FN] = LAYOUT(
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, 
		_______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
	)
		
};

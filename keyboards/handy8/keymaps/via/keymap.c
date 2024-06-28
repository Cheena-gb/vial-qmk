// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_4x2(
        KC_P7,   KC_P8,   KC_P9,   KC_PSLS,
        KC_P4,   KC_P5,   KC_P6,   KC_PAST
    ),
	
	[1] = LAYOUT_ortho_4x2(
		_______, _______, _______, _______,
		_______, _______, _______, _______
	),
	[2] = LAYOUT_ortho_4x2(
		_______, _______, _______, _______,
		_______, _______, _______, _______
	),
		[3] = LAYOUT_ortho_4x2(
		_______, _______, _______, _______,
		_______, _______, _______, _______
	)
};

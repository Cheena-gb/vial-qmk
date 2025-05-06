// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_4x2(
        _______, _______, _______, _______,
        _______, _______, _______, _______
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

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [1] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [2] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    [3] = { ENCODER_CCW_CW(_______, _______), ENCODER_CCW_CW(_______, _______) },
    //                  Encoder 1                                     Encoder 2
};
#endif



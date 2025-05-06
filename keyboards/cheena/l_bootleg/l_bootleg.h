// Copyright 2022 Takuya Urakawa @hsgw (dm9records.com, 5z6p.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define MATRIX_ROWS 8
#define MATRIX_COLS 7
#define MATRIX_COL_PINS { GP12, GP11, GP10, GP9, GP8, GP7, GP6 }
#define MATRIX_ROW_PINS { GP26, GP15, GP14, GP13 }
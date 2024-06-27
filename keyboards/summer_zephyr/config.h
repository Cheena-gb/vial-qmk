// Copyright 2024 Cheena (@Cheena_gb)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define MATRIX_ROWS 10
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { GP28, GP27, GP26, GP15, GP14 }
#define MATRIX_COL_PINS { GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP6 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

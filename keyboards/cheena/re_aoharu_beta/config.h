#pragma once

/* key matrix size */
#define MATRIX_ROWS 12
#define MATRIX_COLS 8

// wiring of each half
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26, GP15, GP14 }
#define MATRIX_COL_PINS { GP1, GP2, GP3, GP4, GP5, GP6, GP7, GP8 }

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RGB_MATRIX_CENTER { 105, 32 }
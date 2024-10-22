#pragma once

/* key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

// wiring of each half
#define MATRIX_ROW_PINS { GP29, GP28, GP27, GP26, GP15, GP14}
#define MATRIX_COL_PINS { GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP6, GP5, GP4, GP3, GP2, GP1, GP0}

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
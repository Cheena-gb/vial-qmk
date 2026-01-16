// Copyright 2024 Cheena (@Sierra)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#define PAL_USE_CALLBACKS TRUE
#define SERIAL_PIO_USE_PIO1 // Force the usage of PIO1 peripheral, by default the Serial implementation uses the PIO0 peripheral

#include_next <halconf.h>

#define SERIAL_USART_FULL_DUPLEX
#define SPLIT_HAND_PIN GP13
#define SERIAL_USART_TX_PIN GP0
#define SERIAL_USART_RX_PIN GP1

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

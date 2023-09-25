// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_ortho_3x3(
        KC_AUDIO_VOL_UP,    KC_AUDIO_VOL_DOWN,    KC_C,
        KC_D,    KC_E,    KC_F,
        KC_G,    KC_H,    KC_I
    )
};

// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Layer Names
enum layer_names {
    _RHYTHM,
    _ALT
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┌───┬───┬───┐
     *     │ 7 │ 8 │ 9 │
     *     ├───┼───┼───┤
     *  (E)│ 4 │ 5 │ 6 │
     * ┌───┼───┼───┼───┤
     * │ 0 │ 1 │ 2 │ 3 │
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_3x4(
        KC_7,    KC_8,    KC_9,
        TG(1),   KC_4,    KC_5,    KC_6,
        KC_0,    KC_1,    KC_2,    KC_3
    )

    // in progress
    [1] = LAYOUT_ortho_3x4(
        KC_NO,   KC_NO,   KC_NO,
        KC_TRNS, KC_NO,   KC_NO,   KC_NO,
        KC_NO,   KC_NO,   KC_NO,   KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = ENCODER_CCW_CW(KC_VOLD, KC_VOLU)
};
#endif

#ifdef OLED_ENABLE

// Draw to OLED
bool oled_task_user() {
    // Set cursor position
    oled_set_cursor(0,1);
     // Write text to OLED
    oled_write_ln_P(PSTR("Wake up, Daddy's home"), false);


    oled_set_cursor(0,2);
    // Switch to current layer
    switch (get_highest_layer(layer_state)) {
        case _RHYTHM :
            oled_write_ln_P(PSTR("Layer: Rhythm"), false);
            break;
        case _ALT :
            oled_write_ln_P(PSTR("Layer: Alt"), false);
            break;
    }

    return false;
}
#endif
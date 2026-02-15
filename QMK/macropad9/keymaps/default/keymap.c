#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        LT(1, KC_1), LT(2, KC_2), LT(3, KC_3),
        LT(4, KC_4), LT(5, KC_5), LT(6, KC_6),
        LT(7, KC_7), LT(8, KC_8),  LT(9, KC_9)
    )
};

/* Copyright 2020 Christopher Courtney, aka Drashna Jael're  (@drashna) <drashna@live.com>
 * Copyright 2019 Sunjun Kim
 * Copyright 2020 Ploopy Corporation
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
//  The number of keys that you are using tdth for
#define TD_TH_COUNT 1
// The maximum number of taps you want to define actions for on
#define TD_TH_MAX_TAP 2

#include QMK_KEYBOARD_H
#include "users/jonrubens/tdth/tdth_macros.h"

enum {
TD_FN
};

DEFINE_TD_STATES(TD_STATE(TD_FN));

DEFINE_TD_KEYCODES(TD_DEF(TD_FN, ARRAY_LITERAL({
    // Keycode to send when this key is tapped once
    KC_BTN2,
    // Keycode to send when this key is tapped twice
    DRAG_SCROLL_TG
    // etc...
}), ARRAY_LITERAL({
    // Keycode to press and hold when this key is held down
    DRAG_SCROLL,
    // Keycode to press and hold when this key is double tapped and held down
    DRAG_SCROLL
})));

#include "users/jonrubens/tdth/tdth.c"

DEFINE_TD_ACTIONS(TD_ACTION(TD_FN));


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        KC_BTN1, KC_BTN3, TD(TD_FN),
          KC_BTN2, KC_BTN4
    ),
    [1] = LAYOUT(
        KC_BTN5, _______, DRAG_SCROLL_TG,
          _______, _______
    )
};


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
#include QMK_KEYBOARD_H

/* // Tap Dance Declarations */
/* enum { */
/*   TD_drag_scroll,   */
/* }; */

/* void drag_scroll_toggle(qk_tap_dance_state_t *state, void *user_data) { */

/* } */

/* // Tap Dance definition */
/* qk_tap_dance_action_t tap_dance_actions[] = { */
/*     // Tap once for momentary and twice for staying in dragscroll */
/*     [TD_drag_scroll] = ACTION_TAP_DANCE */
/* }; */



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT( /* Base */
        KC_BTN1, KC_BTN3, DRAG_SCROLL,
          KC_BTN2, LT(1,KC_BTN4)
    ),
    [1] = LAYOUT(
        KC_BTN5, _______, DRAG_SCROLL_TG,
          _______, _______
    )
};


/* Copyright 2022 Jordan Duabe
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        KC_ESC,               KC_F1,              KC_F2,              KC_F3,              KC_F4,   KC_F5,   KC_F6,   KC_F7,              KC_F8,              KC_F9,              KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GRV,               KC_1,               KC_2,               KC_3,               KC_4,    KC_5,    KC_6,    KC_7,               KC_8,               KC_9,               KC_0,    KC_MINS, KC_EQL,  KC_SPC,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,               KC_Q,               KC_W,               KC_E,               KC_R,    KC_T,    KC_Y,    KC_U,               KC_I,               KC_O,               KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
        MT(MOD_LCTL, KC_ESC), MT(MOD_LCTL, KC_A), MT(MOD_LGUI, KC_S), MT(MOD_LALT, KC_D), KC_F,    KC_G,    KC_H,    MT(MOD_RALT, KC_J), MT(MOD_RGUI, KC_K), MT(MOD_RCTL, KC_L), KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,              KC_SPC,             KC_Z,               KC_X,    KC_C,      KC_V,    KC_B,    KC_N,    KC_M,               KC_COMM,            KC_DOT,             KC_SLSH, KC_RSFT, KC_SPC,  KC_UP,
        MT(MOD_LCTL, KC_ESC), KC_LGUI,            KC_LALT,            KC_SPC,  KC_RALT,   MO(2),   KC_APP,  KC_RCTL, KC_LEFT,            KC_DOWN,            KC_RGHT
    ),

    [1] = LAYOUT(
        KC_ESC,               KC_F1,              KC_F2,              KC_F3,              KC_F4,   KC_F5,   KC_F6,   KC_F7,              KC_F8,              KC_F9,              KC_F10,  KC_F11,  KC_F12,  KC_PSCR, KC_SLCK, KC_PAUS,
        KC_GRV,               KC_1,               KC_2,               KC_3,               KC_4,    KC_5,    KC_6,    KC_7,               KC_8,               KC_9,               KC_0,    KC_MINS, KC_EQL,  KC_SPC,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
        KC_TAB,               KC_Q,               KC_W,               KC_E,               KC_R,    KC_T,    KC_Y,    KC_U,               KC_I,               KC_O,               KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
        MT(MOD_LGUI, KC_ESC), MT(MOD_LGUI, KC_A), MT(MOD_LCTL, KC_S), MT(MOD_LALT, KC_D), KC_F,    KC_G,    KC_H,    MT(MOD_RALT, KC_J), MT(MOD_RCTL, KC_K), MT(MOD_RGUI, KC_L), KC_SCLN, KC_QUOT, KC_ENT,
        KC_LSFT,              KC_SPC,             KC_Z,               KC_X,    KC_C,      KC_V,    KC_B,    KC_N,    KC_M,               KC_COMM,            KC_DOT,             KC_SLSH, KC_RSFT, KC_SPC,  KC_UP,
        MT(MOD_LGUI, KC_ESC), KC_LGUI,            KC_LALT,            KC_SPC,  KC_RALT,   MO(2),   KC_APP,  KC_RGUI, KC_LEFT,            KC_DOWN,            KC_RGHT
    ),


    [2] = LAYOUT(
        RESET,   TO(0),   TO(1),   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, KC_UP,   _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, KC_LEFT, KC_DOWN, KC_RGHT, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};


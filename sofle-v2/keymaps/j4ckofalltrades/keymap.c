/* Copyright 2021 Jordan Duabe @j4ckofalltrades <me@jduabe.dev>
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

    /*
    * QWERTY
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | Bspc |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  |   |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
    * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
    * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
    * `-----------------------------------------/      /      \      \-----------------------------------------'
    *            | LCtl | LGui | LAlt |LOWER | /Enter /        \Space \  |RAISE | RAlt | RGui | RCtl |
    *            |      |      |      |      |/      /          \      \ |      |      |      |      |
    *            `----------------------------------'            '------''---------------------------'
    */

    [0] = LAYOUT(
      KC_GRV,               KC_1,    KC_2,    KC_3,     KC_4,  KC_5,                         KC_6,    KC_7,     KC_8,     KC_9,   KC_0,    KC_BSPC,
      KC_TAB,               KC_Q,    KC_W,    KC_E,     KC_R,  KC_T,                         KC_Y,    KC_U,     KC_I,     KC_O,   KC_P,    KC_BSLS,
      MT(MOD_LCTL, KC_ESC), KC_A,    KC_S,    KC_D,     KC_F,  KC_G,                         KC_H,    KC_J,     KC_K,     KC_L,   KC_SCLN, KC_QUOT,
      KC_LSFT,              KC_Z,    KC_X,    KC_C,     KC_V,  KC_B,      TO(2),    TO(1),   KC_N,    KC_M,     KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                            KC_LCTL, KC_LGUI, KC_LALT,  MO(2), LT(MO(2),  KC_SPC),  KC_ENT,  MO(1),   KC_RALT,  KC_RGUI,  KC_RCTL
    ),
    /* RAISE
    * ,-----------------------------------------.                    ,-----------------------------------------.
    * | Togg |  F1  |  F2  |  F3  |  F4  |  F5  |                    |  F6  |  F7  |  F8  |  F9  | F10  | F11  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * | Reset|   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | F12  |
    * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
    * |      |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  |   |  |
    * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+------+------|
    * |      |  =   |  -   |  +   |   {  |   }  |-------|    |-------|   [  |   ]  |   ;  |   :  |   \  |      |
    * `-----------------------------------------/      /      \      \-----------------------------------------'
    *            |      |      |      |      | /      /        \      \  |      |      |      |      |
    *            |      |      |      |      |/      /          \      \ |      |      |      |      |
    *            `----------------------------------'            '------''---------------------------'
    */
    [1] = LAYOUT(
      CG_TOGG, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                         KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,
      QK_BOOT, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                          KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_F12,
      _______, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                       KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PIPE,
      _______, KC_EQL,  KC_MINS, KC_PLUS, KC_LCBR, KC_RCBR, _______,     _______, KC_LBRC, KC_RBRC, KC_SCLN, KC_COLN, KC_BSLS, _______,
                        _______, _______, _______, _______, _______,     _______, _______, _______, _______, _______
    ),
    /* LOWER
    * ,----------------------------------------.                     ,----------------------------------------.
    * |      | Prev | Next | Play | Stop |      |                    | Ins | Home  | PgUp |      |     |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+-----+------|
    * |      | VolU | VolD | Mute |      |      |                    | Del | End   | PgDn |      |     |      |
    * |------+------+------+------+------+------|                    |------+------+------+------+-----+------|
    * |      |      |      |      |      |      |-------.    ,-------| Left | Down | Up   | Rght |     |      |
    * |------+------+------+------+------+------| TO(2) |    | TO(1) |------+------+------+------+-----+------|
    * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |     |      |
    * `-----------------------------------------/       /     \      \----------------------------------------'
    *            |      |      |      |      | /       /       \      \  |      |      |      |      |
    *            |      |      |      |      |/       /         \      \ |      |      |      |      |
    *            `-----------------------------------'           '------''---------------------------'
    */
    [2] = LAYOUT(
      _______, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, _______,                        KC_INS,  KC_HOME, KC_PGUP, _______,  _______, _______,
      _______, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______,                        KC_DEL,  KC_END,  KC_PGDN, _______,  _______, _______,
      _______, _______, _______, _______, _______, _______,                        KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______,
      _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______,  _______, _______,
                        _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______
    )
};

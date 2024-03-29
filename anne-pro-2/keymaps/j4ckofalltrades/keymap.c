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

enum anne_pro_layers {
  BASE,
  FN1,
  FN2,
};

// clang-format off
const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /*
   * Layer BASE
   * ,-----------------------------------------------------------------------------------------.
   * | ` |  1  |  2  |  3  |  4  |  5  |  6  |  7  |  8  |  9  |  0  |  -  |  =  |     Bksp    |
   * |-----------------------------------------------------------------------------------------+
   * | Tab   |  q  |  w  |  e  |  r  |  t  |  y  |  u  |  i  |  o  |  p  |  [  |  ]  |    \    |
   * |-----------------------------------------------------------------------------------------+
   * | Esc   |  a  |  s  |  d  |  f  |  g  |  h  |  j  |  k  |  l  |  ;  |  '  |    Enter      |
   * |-----------------------------------------------------------------------------------------+
   * | Shift       |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |  .  |  /  |    Shift      |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  L1   |  Alt  |               space             |  FN1  |  FN2  |  Alt  | Ctrl  |
   * \-----------------------------------------------------------------------------------------/
   *
   * Layer TAP in _BASE
   * ,-----------------------------------------------------------------------------------------.
   * |     |     |     |     |     |     |     |     |     |     |     |     |     |           |
   * |-----------------------------------------------------------------------------------------+
   * |        |     |     |     |     |     |     |     |     |     |     |     |     |        |
   * |-----------------------------------------------------------------------------------------+
   * |         |     |     |     |     |     |     |     |     |     |     |     |             |
   * |-----------------------------------------------------------------------------------------+
   * |            |     |     |     |     |     |     |     |     |     |     |       UP       |
   * |-----------------------------------------------------------------------------------------+
   * |       |       |       |                                 |       |  LEFT | DOWN  | RIGHT |
   * \-----------------------------------------------------------------------------------------/
   */
  [BASE] = LAYOUT_60_ansi(
    KC_GRV,               KC_1,    KC_2,               KC_3,               KC_4,               KC_5,   KC_6, KC_7,               KC_8,               KC_9,               KC_0,             KC_MINS,       KC_EQL,  KC_BSPC,
    KC_TAB,               KC_Q,    KC_W,               KC_E,               KC_R,               KC_T,   KC_Y, KC_U,               KC_I,               KC_O,               KC_P,             KC_LBRC,       KC_RBRC, KC_BSLS,
    MT(MOD_LCTL, KC_ESC), KC_A,    MT(MOD_LCTL, KC_S), MT(MOD_LGUI, KC_D), MT(MOD_LALT, KC_F), KC_G,   KC_H, MT(MOD_RALT, KC_J), MT(MOD_RGUI, KC_K), MT(MOD_RCTL, KC_L), KC_SCLN,          KC_QUOT,       KC_ENT,
    KC_LSFT,              KC_Z,    KC_X,               KC_C,               KC_V,               KC_B,   KC_N, KC_M,               KC_COMM,            KC_DOT,             KC_SLSH,          RSFT_T(KC_UP),
    MT(MOD_LCTL, KC_ESC), KC_LGUI, KC_LALT,                                                    KC_SPC,                           FN1,                LT(FN2, KC_LEFT),   RALT_T(KC_DOWN),  RCTL_T(KC_RGHT)
  ),
  /*
   * Layer FN1
   * ,-----------------------------------------------------------------------------------------.
   * | TOGG |  F1 |  F2 |  F3 |  F4 |  F5 |  F6 |  F7 |  F8 |  F9 | F10 | F11 | F12 |  DELETE  |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |PREV |NEXT |PLAY |STOP |  t  |  y  |  u  |  i  |  o  | PS | HOME | END |   \    |
   * |-----------------------------------------------------------------------------------------+
   * | Esc    | VOLU |VOLD |MUTE |  f  |  g  |  h  |  j  |  k  |  l  | PGUP|PGDN |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |INSRT| DEL |    Shift       |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  L1   |  Alt  |               space             |  FN1  |  FN2  |  Alt  | Ctrl  |
   * \-----------------------------------------------------------------------------------------/
   *
   */
  [FN1] = LAYOUT_60_ansi(
    CG_TOGG, KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,    KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, KC_DEL,
    KC_TRNS, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP,  KC_VOLU,  KC_VOLD,  KC_MUTE, KC_TRNS, KC_TRNS, KC_PSCR, KC_HOME, KC_END, KC_TRNS,
    KC_ESC,  KC_VOLU, KC_VOLD, KC_MUTE, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_PGUP, KC_PGDN, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS, KC_INS,  KC_DEL,  KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, MO(FN1),  MO(FN2),  KC_TRNS,  KC_TRNS
  ),
  /*
   * Layer FN2
   * ,-----------------------------------------------------------------------------------------.
   * |  `  | BT1 | BT2 | BT3 | BT4 |  F5 |  F6 |  F7 |LEDOF|LEDON|LEDIN|LEDSP| F12 |    Bksp   |
   * |-----------------------------------------------------------------------------------------+
   * | Tab    |  q  | UP  |  e  |  r  |  t  |  y  |  u  |  i  |  o  | PS | HOME | END |   \    |
   * |-----------------------------------------------------------------------------------------+
   * | Esc    | LEFT |DOWN |RIGHT|  f  |  g  |  h  |  j  |  k  |  l  | PGUP|PGDN |    Enter    |
   * |-----------------------------------------------------------------------------------------+
   * | Shift      |  z  |  x  |  c  |  v  |  b  |  n  |  m  |  ,  |INSRT| DEL |    Shift       |
   * |-----------------------------------------------------------------------------------------+
   * | Ctrl  |  L1   |  Alt  |               space             |  FN1  |  FN2  |  Alt  | Ctrl  |
   * \-----------------------------------------------------------------------------------------/
   */
  [FN2] = LAYOUT_60_ansi(
    KC_TRNS, KC_AP2_BT1, KC_AP2_BT2, KC_AP2_BT3, KC_AP2_BT4, KC_TRNS,  KC_TRNS,  KC_TRNS, KC_AP_LED_OFF, KC_AP_LED_ON, KC_AP_LED_NEXT_INTENSITY, KC_AP_LED_SPEED, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_UP,      KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,       KC_TRNS,      KC_TRNS,                  KC_TRNS,         KC_TRNS, KC_TRNS,
    KC_TRNS, KC_LEFT,    KC_DOWN,    KC_RGHT,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,       KC_TRNS,      KC_TRNS,                  KC_TRNS,         KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,    KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,       KC_TRNS,      KC_TRNS,                  KC_TRNS,
    KC_TRNS, KC_TRNS,    KC_TRNS,    KC_TRNS,    MO(FN1),    MO(FN2),  KC_TRNS,  KC_TRNS
  ),
};
// clang-format on

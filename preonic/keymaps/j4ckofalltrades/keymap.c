/* Copyright 2022 Jordan Duabe @j4ckofalltrades <me@jduabe.dev>
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
#include "muse.h"

enum preonic_layers {
  _QWERTY,
  _LOWER,
  _RAISE,
  _ADJUST
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* Qwerty
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Bksp |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bsls |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |Enter |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Shift |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * | Ctrl | Alt  | GUI  | GUI  |Lower |    Space    |Raise | GUI  | GUI  |  Alt | Ctrl |
    * `-----------------------------------------------------------------------------------'
    */
    [_QWERTY] = LAYOUT_preonic_grid(
      KC_GRV,               KC_1,    KC_2,               KC_3,               KC_4,               KC_5,    KC_6,   KC_7,               KC_8,               KC_9,               KC_0,    KC_BSPC,
      KC_TAB,               KC_Q,    KC_W,               KC_E,               KC_R,               KC_T,    KC_Y,   KC_U,    KC_I,      KC_O,               KC_P,               KC_BSLS,
      MT(MOD_LCTL, KC_ESC), KC_A,    MT(MOD_LCTL, KC_S), MT(MOD_LGUI, KC_D), MT(MOD_LALT, KC_F), KC_G,    KC_H,   MT(MOD_RALT, KC_J), MT(MOD_RGUI, KC_K), MT(MOD_RCTL, KC_L), KC_SCLN, KC_ENT,
      KC_LSFT,              KC_Z,    KC_X,               KC_C,               KC_V,               KC_B,    KC_N,   KC_M,               KC_COMM,            KC_DOT,             KC_SLSH, KC_RSFT,
      MT(MOD_LCTL, KC_ESC), KC_LALT, KC_LGUI,            KC_LGUI,            TL_LOWR,            KC_SPC,  KC_SPC, TL_UPPR,            KC_RGUI,            KC_RGUI,            KC_RALT, KC_RCTL
    ),

      /* Lower
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      |   [  |   ]  |   '  |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   -  |   =  |   _  |   +  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      | Left | Down |  Up  |Right |
    * `-----------------------------------------------------------------------------------'
    */
    [_LOWER] = LAYOUT_preonic_grid(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
      _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   _______, KC_LBRC, KC_RBRC, KC_QUOT, _______,
      _______, KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_MINS, KC_EQL,  KC_UNDS, KC_PLUS, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT
    ),

    /* Raise
    * ,-----------------------------------------------------------------------------------.
    * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * |      |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |      |   {  |   }  |   "  |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |   -  |   =  |   _  |   +  |      |
    * +------+------+------+------+------+------+------+------+------+------+------+------+
    * |      |      |      |      |             |      |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_RAISE] = LAYOUT_preonic_grid(
      KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,     KC_0,    KC_BSPC,
      KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN,  KC_RPRN, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, KC_LCBR, KC_RCBR,  KC_DQUO, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______
    ),

    /* Adjust (Lower + Raise)
    * ,-----------------------------------------------------------------------------------.
    * | Reset| Prev | Next | Play | Paus |      |      |      | Ins  | Home | PgUp |      |
    * |------+------+------+------+------+-------------+------+------+------+------+------|
    * | Togg | VolU | VolD | Mute |      |      |      |      | Del  | End  | PgDn |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |      | Left | Down | Up   | Right|      |      |
    * |------+------+------+------+------+------|------+------+------+------+------+------|
    * |      |      |      |      |      |      |      |      |      |      |      |      |
    * |------+------+------+------+------+------+------+------+------+------+------+------|
    * |      |      |      |      |      |             |      |      |      |      |      |
    * `-----------------------------------------------------------------------------------'
    */
    [_ADJUST] = LAYOUT_preonic_grid(
      QK_BOOT, KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, _______, _______, _______, KC_INS,  KC_HOME,  KC_PGUP, _______,
      CG_TOGG, KC_VOLU, KC_VOLD, KC_MUTE, _______, _______, _______, _______, KC_DEL,  KC_END,   KC_PGDN, _______,
      _______, _______, _______, _______, _______, _______, KC_LEFT, KC_DOWN, KC_UP,   KC_RIGHT, _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______,
      _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,  _______, _______
    )
};

bool muse_mode = false;
uint8_t last_muse_note = 0;
uint16_t muse_counter = 0;
uint8_t muse_offset = 70;
uint16_t muse_tempo = 50;

bool encoder_update_user(uint8_t index, bool clockwise) {
  if (muse_mode) {
    if (IS_LAYER_ON(_RAISE)) {
      if (clockwise) {
        muse_offset++;
      } else {
        muse_offset--;
      }
    } else {
      if (clockwise) {
        muse_tempo+=1;
      } else {
        muse_tempo-=1;
      }
    }
  } else {
    if (clockwise) {
      register_code(KC_PGDN);
      unregister_code(KC_PGDN);
    } else {
      register_code(KC_PGUP);
      unregister_code(KC_PGUP);
    }
  }
    return true;
}

bool dip_switch_update_user(uint8_t index, bool active) {
    switch (index) {
        case 0:
            if (active) {
                layer_on(_ADJUST);
            } else {
                layer_off(_ADJUST);
            }
            break;
        case 1:
            if (active) {
                muse_mode = true;
            } else {
                muse_mode = false;
            }
    }
    return true;
}


void matrix_scan_user(void) {
#ifdef AUDIO_ENABLE
    if (muse_mode) {
        if (muse_counter == 0) {
            uint8_t muse_note = muse_offset + SCALE[muse_clock_pulse()];
            if (muse_note != last_muse_note) {
                stop_note(compute_freq_for_midi_note(last_muse_note));
                play_note(compute_freq_for_midi_note(muse_note), 0xF);
                last_muse_note = muse_note;
            }
        }
        muse_counter = (muse_counter + 1) % muse_tempo;
    } else {
        if (muse_counter) {
            stop_all_notes();
            muse_counter = 0;
        }
    }
#endif
}

bool music_mask_user(uint16_t keycode) {
  switch (keycode) {
    case TL_LOWR:
    case TL_UPPR:
      return false;
    default:
      return true;
  }
}

/* Copyright 2021 Jordan Duabe
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

#ifdef ENCODER_ENABLE
#    include QMK_KEYBOARD_H

bool encoder_update_user(uint8_t index, bool clockwise) {
    uint8_t temp_mod = get_mods();
    bool is_ctrl  = temp_mod & MOD_MASK_CTRL;
    bool is_shift = temp_mod & MOD_MASK_SHIFT;

    if (is_ctrl) {
        if (index == 0) {
            if (clockwise) {
                tap_code_delay(KC_VOLU, 10);
            } else {
                tap_code_delay(KC_VOLD, 10);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code_delay(KC_BRIU, 10);
            } else {
                tap_code_delay(KC_BRID, 10);
            }
        }
    } else if (is_shift) {
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_MS_L);
            } else {
                tap_code(KC_MS_R);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_MS_U);
            } else {
                tap_code(KC_MS_D);
            }
        }
    } else {
        if (index == 0) {
            if (clockwise) {
                tap_code(KC_WH_L);
            } else {
                tap_code(KC_WH_R);
            }
        } else if (index == 1) {
            if (clockwise) {
                tap_code(KC_PGDOWN);
            } else {
                tap_code(KC_PGUP);
            }
        }
    }
    return true;
}

#endif

/* Copyright 2019 Peraneko
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
#include "bmp.h"
#include "keycode_str_converter.h"

// Defines the keycodes used by our macros in process_record_user
enum custom_keycodes {
    CUSTOM_KEYCODE_START = BMP_SAFE_RANGE,
};

const key_string_map_t custom_keys_user =
{
    .start_kc = CUSTOM_KEYCODE_START,
    .end_kc= CUSTOM_KEYCODE_START,
    .key_strings = "\0"
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    {{
    // Do NOT use LAYOUT() macro and multi-dimesnional array
    //
    // Layer 0
    C(S(KC_E)), S(KC_TAB),  KC_TAB,      KC_0,
    KC_LSFT,    C(KC_LEFT), C(KC_RIGHT), C(KC_Z)
    }}
};

uint32_t keymaps_len() {
  return sizeof(keymaps)/sizeof(uint16_t);
}

/* Rotary encoder settings */
void encoder_update_user(uint16_t index, bool clockwise) {
 if (clockwise) {
    tap_code(KC_UP);    //Rotary encoder clockwise
  } else {
    tap_code(KC_DOWN);  //Rotary encoder Reverse clockwise
  }
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool continue_process = process_record_user_bmp(keycode, record);
  if (continue_process == false)
  {
    return false;
  }

  return true;
}

void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

void led_set_user(uint8_t usb_led) {

}

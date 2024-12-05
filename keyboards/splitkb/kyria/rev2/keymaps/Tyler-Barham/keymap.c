/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
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
#include "animations/crab.h"

enum layers {
    _QWERTY = 0,
    _NAV,
    _SYM,
    _FUNCTION,
};


// Aliases for readability
#define QWERTY   DF(_QWERTY)

#define SYM      MO(_SYM)
#define NAV      MO(_NAV)
#define FKEYS    MO(_FUNCTION)

#define NAV_ENT  LT(_NAV, KC_ENT)
#define SYM_TAB  LT(_SYM, KC_TAB)

#define CTL_TAB  MT(MOD_LCTL, KC_TAB)
#define ALT_DEL  MT(MOD_LALT, KC_DEL)

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT(
       KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                                                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_COLN,
      CTL_TAB,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                                KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,KC_QUOTE,
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC, KC_CAPS,           FKEYS, KC_RBRC,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT,
                                 _______, _______, KC_LGUI,  KC_SPC, NAV_ENT,         SYM_TAB, KC_BSPC, ALT_DEL, KC_LCTL, _______
    ),
    [_NAV] = LAYOUT(
      _______, _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_VOLU,                                            KC_PGUP, KC_HOME,  KC_END, _______, _______,  KC_DEL,
      _______, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_VOLD,                                            KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, _______,  KC_INS,
      _______, _______, _______, _______, _______, KC_MUTE, _______, KC_SCRL,        _______, _______, KC_PGDN, _______, _______, _______, _______, KC_PSCR,
                                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
    ),
    [_SYM] = LAYOUT(
       KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,  KC_EQL,
      KC_TILD, KC_EXLM,   KC_AT, KC_HASH,  KC_DLR, KC_PERC,                                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS,
      KC_PIPE, KC_BSLS, KC_COLN, KC_SCLN, KC_MINS, KC_LBRC, KC_LCBR, _______,        _______, KC_RCBR, KC_RBRC, KC_UNDS,   KC_LT,   KC_GT, KC_QUES, _______,
                                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
    ),
    [_FUNCTION] = LAYOUT(
      _______,   KC_F9,  KC_F10,  KC_F11,  KC_F12, _______,                                            _______, _______, _______, _______, _______, _______,
      _______,   KC_F5,   KC_F6,   KC_F7,   KC_F8, _______,                                            _______, KC_RSFT, KC_RCTL, KC_LALT, KC_RGUI, _______,
      _______,   KC_F1,   KC_F2,   KC_F3,   KC_F4, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______,
                                 _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
    ),
    // [_LAYERINDEX] = LAYOUT(
    //   _______, _______, _______, _______, _______, _______,                                            _______, _______, _______, _______, _______, _______,
    //   _______, _______, _______, _______, _______, _______,                                            _______, _______, _______, _______, _______, _______,
    //   _______, _______, _______, _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______, _______, _______, _______,
    //                              _______, _______, _______, _______, _______,        _______, _______, _______, _______, _______
    // ),
};

#ifdef OLED_ENABLE
oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_180; }

void oled_render_layer_info(void) {
    // QMK Logo and version information
    // clang-format off
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0};
    // clang-format on

    oled_write_P(qmk_logo, false);
    oled_write_P(PSTR("Kyria rev2.1\n\n"), false);

    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);
    switch (get_highest_layer(layer_state|default_layer_state)) {
        case _QWERTY:
            oled_write_P(PSTR("QWERTY\n"), false);
            break;
        case _NAV:
            oled_write_P(PSTR("Nav\n"), false);
            break;
        case _SYM:
            oled_write_P(PSTR("Sym\n"), false);
            break;
        case _FUNCTION:
            oled_write_P(PSTR("Function\n"), false);
            break;
        default:
            oled_write_P(PSTR("Undefined\n"), false);
    }

    // Write host Keyboard LED Status to OLEDs
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_P(led_usb_state.num_lock    ? PSTR("NUMLCK ") : PSTR("       "), false);
    oled_write_P(led_usb_state.caps_lock   ? PSTR("CAPLCK ") : PSTR("       "), false);
    oled_write_P(led_usb_state.scroll_lock ? PSTR("SCRLCK ") : PSTR("       "), false);
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_render_layer_info();
    } else {
        oled_render_anim();
    }
    return false;
}
#endif

#ifndef MAGIC_ENABLE
uint16_t keycode_config(uint16_t keycode) {
    return keycode;
}

uint8_t mod_config(uint8_t mod) {
    return mod;
}
#endif

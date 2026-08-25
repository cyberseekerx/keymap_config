/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.
This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.
You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

// Miryoku Home Row Mods (ARST / NEIO mapping for Colemak-DH)
#define HOME_LGU LGUI_T(KC_A)
#define HOME_LAL LALT_T(KC_R)
#define HOME_LCK LCTL_T(KC_S)
#define HOME_LSF LSFT_T(KC_T)

#define HOME_RSF RSFT_T(KC_N)
#define HOME_RCK RCTL_T(KC_E)
#define HOME_RAL RALT_T(KC_I)
#define HOME_RGU RGUI_T(KC_O)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
        /* Base Layer: Colemak-DH (Outer columns disabled with KC_NO) */
        KC_NO,   KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,        KC_J,    KC_L,    KC_U,    KC_Y,    KC_QUOT, KC_NO,
        KC_NO,   HOME_LGU,HOME_LAL,HOME_LCK,HOME_LSF,KC_G,        KC_M,    HOME_RSF,HOME_RCK,HOME_RAL,HOME_RGU,KC_NO,
        KC_NO,   KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,        KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_NO,

        /* Thumbs (3 active per side) */
        LT(1, KC_ESC), LT(2, KC_SPC), LT(3, KC_TAB),   LT(4, KC_ENT), LT(5, KC_BSPC), LT(6, KC_DEL)
    ),

[1] = LAYOUT_split_3x6_3(
        /* Layer 1: Media & Controls */
        KC_NO,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_MPRV, KC_MNXT, KC_MPLY, KC_MSTP, XXXXXXX, KC_PWR,
        KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,     KC_MUTE, KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX,  KC_NO,
        KC_NO,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_BRID, KC_BRIU, BL_STEP, BL_DOWN, BL_TOGG, KC_NO,

        _______, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, _______
    ),

    [2] = LAYOUT_split_3x6_3(
        /* Layer 2: Navigation */
        KC_NO,   KC_INS,  KC_HOME, KC_UP,   KC_END,  KC_PGUP,     KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_NO,
        KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, KC_PGDN,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_CAPS, KC_NO,
        KC_NO,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_ENT,  KC_BSPC, KC_DEL,  XXXXXXX, XXXXXXX, KC_NO,

        XXXXXXX, _______, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX
    ),


[3] = LAYOUT_split_3x6_3(
        /* Layer 3: Extra / Media / Nav */
        KC_NO,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     KC_AGIN, KC_UNDO, KC_CUT,  KC_COPY, KC_PSTE, KC_NO,
        KC_NO,   KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, XXXXXXX,     XXXXXXX, KC_MINS, KC_PLUS, XXXXXXX, XXXXXXX, KC_NO,
        KC_NO,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NO,

        XXXXXXX, XXXXXXX, _______,     XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [4] = LAYOUT_split_3x6_3(
        /* Layer 4: Symbols */
// Left Hand                                                                    // Right Hand
    KC_NO,   KC_GRAVE, KC_LT,   KC_GT,   KC_MINS, KC_PIPE,    KC_CIRC, KC_LCBR, KC_RCBR, KC_DLR,  KC_BSLS,   KC_NO,
    KC_NO,   KC_EXLM,  KC_ASTR, KC_SLSH, KC_EQL,  KC_AMPR,    KC_HASH, KC_LPRN, KC_RPRN, KC_SCLN, KC_DQT,  KC_NO,
    KC_NO,   KC_TILD,  KC_PLUS, KC_LBRC, KC_RBRC, KC_PERC,    KC_AT,   KC_COLN, KC_COMM, KC_DOT,  KC_QUOT, KC_NO,

        XXXXXXX, KC_UNDS,  KC_QUES,     _______, XXXXXXX, XXXXXXX
    ),

    [5] = LAYOUT_split_3x6_3(
        /* Layer 5: Numbers */
        // number on the left added; //TODO add symbols plus home row mods on the right;
        KC_NO, KC_7, KC_8, KC_9, KC_PLUS, KC_ASTR,                  KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,      KC_NO,
        KC_NO, KC_4, KC_5, KC_6, KC_MINS, KC_SLSH,                  KC_NO,       KC_LSFT,       KC_LCTL,       KC_LALT,       KC_LGUI,    KC_NO,
        KC_NO, KC_1, KC_2, KC_3, KC_EQL,  KC_DOT,                   KC_NO,         KC_NO,         KC_NO,         KC_NO,         KC_NO,       KC_NO,

        XXXXXXX, KC_0, XXXXXXX,     XXXXXXX, _______, XXXXXXX
    ),

    [6] = LAYOUT_split_3x6_3(
        /* Layer 6: Function */
        KC_NO,   KC_F12,  KC_F7,   KC_F8,   KC_F9,   KC_PSCR,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, QK_BOOT, KC_NO,
        KC_NO,   KC_F11,  KC_F4,   KC_F5,   KC_F6,   KC_SCRL,     XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_LGUI, KC_NO,
        KC_NO,   KC_F10,  KC_F1,   KC_F2,   KC_F3,   KC_PAUSE,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_NO,

        XXXXXXX, XXXXXXX, XXXXXXX,     XXXXXXX, XXXXXXX, _______
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [4] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [5] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
    [6] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_VALD, RM_VALU), ENCODER_CCW_CW(KC_RGHT, KC_LEFT), },
};
#endif

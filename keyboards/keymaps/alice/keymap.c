#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT_all( /* Base */
/*  
    COL0       COL1    COL2     COL3 	 COL4     COL5	   COL6     COL7     COL8     COL9     COL10    COL11     COL12     COL13     COL14   COL15
*/
    QK_GESC, KC_GRAVE, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,             KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,   KC_BSPC, KC_DEL,   \
    KC_F1,   KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,    KC_6,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_LBRC, KC_RBRC,  KC_BSLS, KC_PGUP,  \
    KC_F2,   KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,    KC_T,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,            KC_ENT,  KC_PGDN,  \
    KC_F3,   KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,    KC_G,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,           KC_RSFT,  KC_UP,   KC_HOME,  \
    KC_F4,   KC_LCTL, KC_LGUI, KC_LALT,  KC_SPC,  KC_B,    MO(1),   KC_B,    KC_SPC,  KC_RALT,                             KC_LEFT,  KC_DOWN, KC_RGHT), 
[1] = LAYOUT_all(
    QK_BOOT,  QK_GESC, KC_F1,   KC_F2,    KC_F3,    KC_F4,    KC_F5,              KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,  KC_F12,   KC_BSPC,  KC_DEL,  \
    KC_F1,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS, \
    KC_F2,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,           KC_TRNS,  KC_TRNS, \
    KC_F3,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,           KC_TRNS,  KC_TRNS,  KC_TRNS, \
    KC_F4,    KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                               KC_TRNS,  KC_TRNS,  KC_TRNS),
};

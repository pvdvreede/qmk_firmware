#include "preonic_ex.h"

#define _QRTY 0
#define _ARWS 1

#define _____ KC_TRNS
#define XXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QRTY] = KEYMAP(
        KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_BSLS,   KC_BSPC,
        KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_LBRC,   KC_RBRC,
        KC_ESC,    KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_ENT ,
        KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_RSFT,   KC_MINS,
        KC_DEL,    KC_LCTL,   KC_LALT,   KC_LGUI,   MO(_ARWS),       KC_SPC,         MO(_ARWS), KC_LEFT,   KC_DOWN,   KC_UP,     KC_RGHT,   KC_EQUAL
    ),

    [_ARWS] = KEYMAP(
        _____,   KC_F1,   KC_F2,   KC_F3,      KC_F4,      KC_F5,      KC_F6,      KC_F7,      KC_F8,      KC_F9,      KC_F10,     KC_F11,     KC_F12,
        _____,   _____,   KC_UP,   _____,      _____,      _____,      _____,      _____,      _____,      _____,      _____,      _____,      _____,
        _____,   KC_LEFT, KC_DOWN, KC_RGHT,    _____,      _____,      _____,      KC_TILD,    _____,      _____,      _____,      _____,      _____,
        _____,   _____,   _____,   _____,      _____,      _____,      _____,      _____,      _____,      _____,      _____,      _____,      _____,
        _____,   _____,   _____,   _____,      _____,            _____,            _____,      _____,      _____,      _____,      _____,      RESET
    ),
};

const uint16_t PROGMEM fn_actions[] = {};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
  // MACRODOWN only works in this function
      switch(id) {
        case 0:
          if (record->event.pressed) {
            register_code(KC_RSFT);
          } else {
            unregister_code(KC_RSFT);
          }
        break;
      }
    return MACRO_NONE;
};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

}

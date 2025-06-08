#include QMK_KEYBOARD_H
#include "version.h"
#include "i18n.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_169_255_255,
  HSV_74_255_255,
  HSV_0_255_255,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  MAC_LOCK,
};



#define DUAL_FUNC_0 LT(1, KC_F)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    KC_GRAVE,       ST_MACRO_0,     KC_MAC_PASTE,   LCTL(KC_A),     KC_MAC_COPY,    KC_MAC_CUT,                                     KC_HOME,        KC_LEFT,        KC_RIGHT,       KC_END,         LGUI(KC_TAB),   KC_BSLS,        
    KC_TAB,         KC_B,           KC_L,           KC_D,           KC_W,           KC_Z,                                           KC_QUOTE,       KC_F,           KC_O,           KC_U,           KC_J,           KC_SCLN,        
    KC_BSPC,        LT(1, KC_N),    MT(MOD_LALT, KC_R),MT(MOD_LSFT, KC_T),LT(2, KC_S),    KC_G,                                           KC_Y,           LT(3, KC_H),    MT(MOD_RSFT, KC_A),MT(MOD_RALT, KC_E),LT(1, KC_I),    KC_SLASH,       
    CW_TOGG,        MT(MOD_LGUI, KC_Q),KC_X,           KC_M,           MT(MOD_LCTL, KC_C),KC_V,                                           KC_K,           MT(MOD_RCTL, KC_P),KC_DOT,         LT(4, KC_MINUS),MT(MOD_RGUI, KC_COMMA),KC_ENTER,       
                                                    DUAL_FUNC_0,    KC_SPACE,                                       KC_TRANSPARENT, KC_ESCAPE
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LCTL(KC_PGDN),  KC_PGDN,        KC_PAGE_UP,     LCTL(KC_PAGE_UP),KC_TRANSPARENT, KC_AUDIO_MUTE,  
    ST_MACRO_1,     KC_GRAVE,       KC_LABK,        KC_RABK,        KC_TRANSPARENT, KC_PIPE,                                        KC_CIRC,        KC_LBRC,        KC_RBRC,        KC_DLR,         ST_MACRO_2,     ST_MACRO_3,     
    KC_TRANSPARENT, KC_EXLM,        KC_MINUS,       KC_PLUS,        KC_EQUAL,       KC_AMPR,                                        KC_HASH,        KC_LPRN,        KC_RPRN,        KC_COLN,        KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TILD,        KC_SLASH,       KC_ASTR,        KC_BSLS,        KC_PERC,                                        KC_AT,          KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 MAC_LOCK,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    LALT(KC_TAB),   LGUI(KC_R),     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_HOME,        KC_TRANSPARENT, KC_END,         ST_MACRO_4,     KC_PAGE_UP,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_DELETE,      KC_PGDN,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_5,     LCTL(LSFT(KC_LEFT)),LCTL(LSFT(KC_RIGHT)),KC_APPLICATION, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    LGUI(KC_LEFT),  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_SLASH,    KC_9,           KC_8,           KC_7,           KC_KP_ASTERISK,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_KP_MINUS,    KC_3,           KC_2,           KC_1,           KC_KP_PLUS,                                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_X,           KC_6,           KC_5,           KC_4,           KC_PERC,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_KP_COMMA,    KC_KP_DOT,      KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    TO(0),          KC_KP_0,                                        KC_TRANSPARENT, QK_LLCK
  ),
  [4] = LAYOUT_voyager(
    LALT(LGUI(KC_0)),KC_TRANSPARENT, RGB_MODE_FORWARD,RGB_SLD,        RGB_VAD,        RGB_VAI,                                        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, QK_BOOT,        
    LALT(LGUI(KC_MINUS)),LALT(LGUI(KC_EQUAL)),KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,KC_AUDIO_MUTE,  LCTL(KC_GRAVE),                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LALT(KC_3),     LALT(KC_2),     LALT(KC_1),     LGUI(KC_F3),                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    RGB_TOG,        TOGGLE_LAYER_COLOR,LALT(KC_6),     LALT(KC_5),     LALT(KC_4),     KC_TRANSPARENT,                                 HSV_169_255_255,HSV_74_255_255, HSV_0_255_255,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};


uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_SPACE:
            return TAPPING_TERM -50;
        default:
            return TAPPING_TERM;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {227,217,235}, {227,217,235}, {227,217,235}, {0,0,255}, {169,255,255}, {0,0,0}, {0,0,0}, {91,218,204}, {91,218,204}, {227,217,235}, {169,255,255}, {0,0,0}, {169,255,255}, {91,218,204}, {91,218,204}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,255}, {0,0,255}, {48,232,244}, {48,232,244}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {48,232,244}, {48,232,244}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,255}, {48,232,244}, {48,232,244}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {146,255,255}, {0,0,0}, {146,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {146,255,255}, {0,0,0}, {146,255,255}, {131,255,255}, {131,255,255}, {131,255,255}, {146,255,255}, {0,245,245}, {131,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {146,255,255}, {146,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {91,218,204}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT))SS_DELAY(100)  SS_LGUI(SS_LSFT(SS_TAP(X_RIGHT))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A))SS_DELAY(100)  SS_TAP(X_LBRC));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_MINUS)SS_DELAY(100)  SS_LSFT(SS_TAP(X_DOT)));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_C))SS_DELAY(100)  SS_LGUI(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_PAUSE)SS_DELAY(100)  SS_LGUI(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_C))SS_DELAY(100)  SS_LGUI(SS_TAP(X_T))SS_DELAY(100)  SS_TAP(X_PAUSE)SS_DELAY(100)  SS_LGUI(SS_TAP(X_V)));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_TAP(X_LEFT))SS_DELAY(100)  SS_LGUI(SS_LSFT(SS_TAP(X_RIGHT))));
    }
    break;
    case MAC_LOCK:
      HCS(0x19E);

    case DUAL_FUNC_0:
      if (record->tap.count > 0) {
        if (record->event.pressed) {
          register_code16(KC_UNDS);
        } else {
          unregister_code16(KC_UNDS);
        }
      } else {
        if (record->event.pressed) {
          layer_on(4);
        } else {
          layer_off(4);
        }  
      }  
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_169_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(169,255,255);
      }
      return false;
    case HSV_74_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(74,255,255);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
  }
  return true;
}



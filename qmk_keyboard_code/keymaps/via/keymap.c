// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1
#define _RAISE 2
#define _AHK 3
#define _NUM 4

enum custom_keycodes {
    BASE = SAFE_RANGE,
    LOWER,
    RAISE,
    AHK,
    NUM,
    MY_Squo,
    MY_Parentheses,
    MY_Shrp,
    MY_Br,
    MY_Ast,
    MY_CPIp,
    MY_CPIm,
    MY_CPId,
    MY_Anglep,
    MY_Anglem,
    MY_Angled
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
      KC_ESC,KC_1,KC_2,KC_3,KC_4,KC_5,KC_MUTE,
      KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,KC_ENT,
      KC_LALT,KC_A,KC_S,KC_D,KC_F,KC_G,LCTL(KC_SLSH),
      KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_DEL,
      KC_LCTL,KC_LGUI,KC_LALT,NUM,KC_BSPC,KC_SPC,LOWER,
      KC_MS_BTN1,      KC_6,   KC_7,   KC_8,   KC_9,   KC_0,    KC_PSCR,
      KC_MS_BTN1,      KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,    KC_INT3,
      KC_MS_BTN1,      KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN, KC_QUOT,
      KC_MS_BTN1,      KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH, KC_RSFT,
      RAISE,         KC_ENT, KC_MINS,AHK,    KC_RBRC,KC_NUHS, KC_LBRC
    ),
    [_LOWER] = LAYOUT(
      KC_ESC,KC_F2,KC_F2,KC_F3,KC_F4,KC_F5,KC_F11,
      KC_TAB,LCTL(KC_T),KC_MS_BTN1,LGUI(KC_UP),LSFT(KC_F10),LALT(LSFT(KC_TAB)),0x0068,
      KC_LALT,LCTL(KC_W),LGUI(KC_LEFT),LALT(LCTL(KC_TAB)),LGUI(KC_RGHT),LALT(KC_TAB),0x0069,
      KC_LSFT,LGUI(KC_S),LALT(KC_F4),LGUI(KC_DOWN),LGUI(KC_T),LGUI(KC_TAB),KC_DEL,
      KC_LCTL,KC_LGUI,KC_LALT,_______,KC_BSPC,KC_SPC,_______,
      KC_EQL,            KC_F6 ,     KC_F7 ,     KC_F8 ,     KC_F9 ,     KC_F10 ,    KC_PAUS ,
      LCTL(LSFT(KC_TAB)),KC_PAST ,   KC_P7 ,     KC_P8 ,     KC_P9 ,     KC_PMNS ,   KC_INT3 ,
      LCTL(KC_TAB),      KC_PSLS ,   KC_P4 ,     KC_P5 ,     KC_P6 ,     KC_PPLS ,   MY_CPId,
      KC_MS_BTN3 ,         KC_QUOT ,   KC_P1 ,     KC_P2 ,     KC_P3 ,     KC_EQL ,    KC_RSFT,
      _______,           KC_ENT ,    KC_MINS ,   KC_P0 ,     KC_PDOT ,   MY_CPIm ,   MY_CPIp
      ),
    [_RAISE] = LAYOUT(
      KC_ESC,KC_F2,KC_F2,KC_F3,KC_F4,KC_F5,KC_F11,
      KC_TAB,KC_Q,KC_W,KC_E,KC_R,KC_T,0x0068,
      KC_LALT,KC_A,KC_S,KC_D,KC_F,KC_G,0x0069,
      KC_LSFT,KC_Z,KC_X,KC_C,KC_V,KC_B,KC_DEL,
      KC_LCTL,KC_LGUI,KC_LALT,NUM,KC_BSPC,KC_SPC,_______,
      KC_F12 ,        KC_F6 ,     KC_F7 ,     KC_F8 ,     KC_F9 ,     KC_F10 ,     KC_PAUS ,
      KC_WWW_FORWARD, KC_MS_BTN1 ,  KC_HOME ,   KC_UP ,     KC_END ,    LSFT(KC_F10),KC_ESC ,
      KC_WWW_BACK,    KC_HOME ,   KC_LEFT ,   KC_DOWN ,   KC_RGHT ,   KC_END ,     MY_Angled ,
      KC_MS_BTN3 ,      KC_PGDN ,   MY_Shrp    ,MY_Parentheses , MY_Squo, KC_PGUP,   KC_RSFT ,
      _______,        MY_Br ,    KC_INT1 ,   AHK,        KC_WH_R ,    MY_Anglem ,   MY_Anglep
    ),
    [_AHK] = LAYOUT(
      KC_ESC,KC_F2,KC_F2,KC_F3,KC_F4,KC_F5,KC_F11,
      KC_TAB,KC_F15,KC_F16,KC_F17,KC_F18,KC_F19,KC_MS_BTN1,
      KC_LALT,LCTL(KC_F15),LCTL(KC_F16),LCTL(KC_F17),LCTL(KC_F18),LCTL(KC_F19),KC_MS_BTN2,
      KC_LSFT,LSFT(KC_F15),LSFT(KC_F16),LSFT(KC_F17),LSFT(KC_F18),LSFT(KC_F19),KC_DEL,
      KC_LCTL,KC_LGUI,KC_LALT,NUM,KC_BSPC,KC_SPC,_______,
      KC_F12 ,        KC_F6 ,       KC_F7,       KC_F8,       KC_F9,             KC_F10,  KC_PAUS,
      KC_MS_BTN2,      KC_F20,       KC_F21,      KC_F22,      KC_F23,            KC_F24,  KC_ESC,
      KC_MS_BTN1,  LCTL(KC_F20), LCTL(KC_F21), LCTL(KC_F22),LCTL(KC_F23),    LCTL(KC_F24),  KC_ESC,
      KC_MS_BTN3,  LSFT(KC_F20), LSFT(KC_F21), LSFT(KC_F22),LSFT(KC_F23),    LSFT(KC_F24),  KC_RSFT,
      _______,       KC_ENT ,      KC_INT1,  _______,         KC_WH_R,           KC_NO,  KC_LBRC
    ),
    [_NUM] = LAYOUT(
      KC_ESC,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_F11,
      KC_TAB,LSFT(KC_1),LSFT(KC_2),LSFT(KC_3),LSFT(KC_4),LSFT(KC_5),KC_ENT,
      KC_LALT,LALT(KC_1),LALT(KC_2),LALT(KC_3),LALT(KC_4),LALT(KC_5),KC_F11,
      KC_LSFT,KC_F1,KC_F2,KC_F3,KC_F4,KC_F5,KC_DEL,
      KC_LCTL,KC_LGUI,KC_LALT,_______,KC_BSPC,KC_SPC,LOWER,
      KC_F12 ,    KC_F6 ,          KC_F7,     KC_F8,     KC_F9,       KC_F10,       KC_PSCR,
      KC_EQL,        LSFT(KC_6), LSFT(KC_7),LSFT(KC_8),LSFT(KC_9), LSFT(KC_0),         KC_ESC,
      KC_F12,         LALT(KC_6), LALT(KC_7), LALT(KC_8), LALT(KC_9), LALT(KC_0), KC_QUOT,
      KC_MS_BTN3,       KC_F6 ,          KC_F7,     KC_F8,     KC_F9,       KC_F10,       KC_RSFT,
      RAISE,          KC_ENT,          KC_MINS,   AHK,       KC_RBRC,     KC_NUHS,      KC_LBRC
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BASE] =   { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),ENCODER_CCW_CW(KC_MS_WH_DOWN,KC_MS_WH_UP)},
    [_LOWER] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),ENCODER_CCW_CW(KC_MS_WH_DOWN,KC_MS_WH_UP)},
    [_RAISE] =  { ENCODER_CCW_CW(KC_MS_WH_UP, KC_MS_WH_DOWN),ENCODER_CCW_CW(KC_MS_WH_DOWN,KC_MS_WH_UP)},
    [_AHK] =    { ENCODER_CCW_CW(KC_VOLU,KC_VOLD), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [_NUM] =    { ENCODER_CCW_CW(KC_VOLU,KC_VOLD), ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_MS_WH_DOWN);
        } else {
            tap_code(KC_MS_WH_UP);
        }
    } else if (index == 1) {
        if (clockwise) {
            tap_code(KC_MS_WH_DOWN);
        } else {
            tap_code(KC_MS_WH_UP);
        }
    }
    return false;
}

static bool lower_pressed = false;
static uint16_t lower_pressed_time = 0;
static bool raise_pressed = false;
static uint16_t raise_pressed_time = 0;
bool isScrollMode;
bool isDragMode1;
bool isDragMode2;
bool isPointM_low;
static uint16_t _cpi = 1250;
static uint16_t temp_cpi = 1250;
static double angle_degrees = 0;
static double cos_theta = 1;
static double sin_theta = 1;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  pointing_device_set_cpi(1250);
  switch (keycode)
  {
    case LOWER:
      if (record->event.pressed) {
        lower_pressed = true;
        isScrollMode = true;
        lower_pressed_time = record->event.time;
        layer_on(_LOWER);
      } else {
        isScrollMode = false;
        layer_off(_LOWER);
        if (lower_pressed && (TIMER_DIFF_16(record->event.time, lower_pressed_time) < TAPPING_TERM)) {
          register_code(KC_INT4);
          unregister_code(KC_INT4);
        }
        lower_pressed = false;
      }
      return false;
    case RAISE:
      if (record->event.pressed) {
        raise_pressed = true;
        isPointM_low = true;
        raise_pressed_time = record->event.time;
        layer_on(_RAISE);
      } else {
        isPointM_low = false;
        layer_off(_RAISE);
        if (raise_pressed && (TIMER_DIFF_16(record->event.time, raise_pressed_time) < TAPPING_TERM)) {
          register_code(KC_INT5);
          unregister_code(KC_INT5);
        }
        raise_pressed = false;
      }
      return false;
    case AHK:
        if (record->event.pressed) {
            raise_pressed = true;
            isScrollMode = true;
            raise_pressed_time = record->event.time;
            layer_on(_AHK);
        } else {
            isScrollMode = false;
            layer_off(_AHK);
            if (raise_pressed && (TIMER_DIFF_16(record->event.time, raise_pressed_time) < TAPPING_TERM)) {
                register_code(KC_ESC);
                unregister_code(KC_ESC);
            }
            raise_pressed = false;
        }
        return false;
    case NUM:
        if (record->event.pressed) {
            raise_pressed = true;
            isPointM_low = true;
            raise_pressed_time = record->event.time;
            layer_on(_NUM);
        } else {
            isPointM_low = false;
            layer_off(_NUM);
            if (raise_pressed && (TIMER_DIFF_16(record->event.time, raise_pressed_time) < TAPPING_TERM)) {
                register_code(KC_TAB);
                unregister_code(KC_TAB);
            }
            raise_pressed = false;
        }
        return false;
    case MY_Squo:
        if (record->event.pressed) {
        register_code(KC_INT5);
        unregister_code(KC_INT5);
        register_code(KC_LSFT);
        register_code(KC_7);
        unregister_code(KC_7);
        register_code(KC_7);
        unregister_code(KC_7);
        unregister_code(KC_LSFT);
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
        }
        return false;
    case MY_Parentheses:
        if (record->event.pressed) {
        register_code(KC_INT5);
        unregister_code(KC_INT5);
        register_code(KC_LSFT);
        register_code(KC_8);
        unregister_code(KC_8);
        register_code(KC_9);
        unregister_code(KC_9);
        unregister_code(KC_LSFT);
        register_code(KC_LEFT);
        unregister_code(KC_LEFT);
        }
        return false;
    case MY_Shrp:
        if (record->event.pressed) {
        register_code(KC_INT5);
        unregister_code(KC_INT5);
        register_code(KC_LSFT);
        register_code(KC_3);
        unregister_code(KC_3);
        unregister_code(KC_LSFT);
        }
        return false;
    case MY_Br:
        if (record->event.pressed) {
        register_code(KC_INT5);
        unregister_code(KC_INT5);
        register_code(KC_LSFT);
        register_code(KC_COMM);
        unregister_code(KC_COMM);
        unregister_code(KC_LSFT);
        register_code(KC_B);
        unregister_code(KC_B);
        register_code(KC_R);
        unregister_code(KC_R);
        register_code(KC_LSFT);
        register_code(KC_DOT);
        unregister_code(KC_DOT);
        unregister_code(KC_LSFT);
        }
        return false;
    case MY_Ast:
        if (record->event.pressed) {
            register_code(KC_INT5);
            unregister_code(KC_INT5);
            register_code(KC_LSFT);
            register_code(KC_QUOT);
            unregister_code(KC_QUOT);
            unregister_code(KC_LSFT);
        }
        return false;
    case MY_CPIp:
      if (record->event.pressed) {
        temp_cpi = _cpi;
        temp_cpi = temp_cpi + 125;
        if(temp_cpi > 1375){
          temp_cpi = 1375;
        }
        _cpi = temp_cpi;
      }
      return false;
    case MY_CPIm:
      if (record->event.pressed) {
        temp_cpi = _cpi;
        temp_cpi = temp_cpi - 125;
        if(temp_cpi < 125){
          temp_cpi = 125;
        }
        _cpi = temp_cpi;
      }
      return false;
    case MY_CPId:
      if (record->event.pressed) {
        _cpi = 1250;
      }
      return false;
    case MY_Anglep:
      if (record->event.pressed) {
        angle_degrees = angle_degrees + 3;
        if (angle_degrees > 360){
          angle_degrees=0;
        }
        cos_theta = cos(angle_degrees * (M_PI / 180.0));
        sin_theta = sin(angle_degrees * (M_PI / 180.0));
      }
      return false;
    case MY_Anglem:
      if (record->event.pressed) {
        angle_degrees = angle_degrees - 3;
        if (angle_degrees < 0){
          angle_degrees=360;
        }
        cos_theta = cos(angle_degrees * (M_PI / 180.0));
        sin_theta = sin(angle_degrees * (M_PI / 180.0));
      }
      return false;
    case MY_Angled:
      if (record->event.pressed) {
        angle_degrees = 0;
        cos_theta = 1;
        sin_theta = 1;
      }
      return false;
    default:
      if (record->event.pressed) {
        // reset the flags
        lower_pressed = false;
        raise_pressed = false;
      }
      break;
  }
  return true;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    float temp_x,temp_y;
    if (isScrollMode) {
        pointing_device_set_cpi(1250);
        temp_x = -0.4*((float)mouse_report.x - (float)mouse_report.y);
        temp_y = 0.4*((float)mouse_report.x + (float)mouse_report.y);
        // temp_x = mouse_report.x - mouse_report.y;
        // temp_y = mouse_report.x + mouse_report.y;
        mouse_report.h = temp_x;
        mouse_report.v = temp_y;
        mouse_report.x=0;
        mouse_report.y=0;
    }
    else if(isPointM_low){
        pointing_device_set_cpi(500);
        mouse_report.h = 0;
        mouse_report.v = 0;
        temp_x = -mouse_report.x + mouse_report.y;
        temp_y = -mouse_report.x - mouse_report.y;
        mouse_report.x = temp_x;
        mouse_report.y = temp_y;
    }
    else{
        pointing_device_set_cpi(_cpi);
        mouse_report.h = 0;
        mouse_report.v = 0;
        // temp_x = -mouse_report.x + mouse_report.y;
        // temp_y = -mouse_report.x - mouse_report.y;
        temp_x = (int16_t)(-mouse_report.x * cos_theta + mouse_report.y * sin_theta);
        temp_y = (int16_t)(-mouse_report.x * sin_theta - mouse_report.y * cos_theta);
        mouse_report.x = temp_x;
        mouse_report.y = temp_y;
    }
    return mouse_report;
}


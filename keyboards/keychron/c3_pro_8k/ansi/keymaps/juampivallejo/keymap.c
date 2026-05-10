/* Copyright 2024 @ Keychron (https://www.keychron.com)
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
#include "keychron_common.h"

enum layers {
    MAC_BASE,
    MAC_FN,
    WIN_BASE,
    WIN_FN,
    MAC_EXT,
};

#define FN_MAC MO(MAC_FN)
#define FN_WIN MO(WIN_FN)

// Left Hand
#define BRM_Z  MT(MOD_LSFT, KC_Z)
#define BRM_X  MT(MOD_LCTL, KC_X)
#define BRM_C  MT(MOD_LGUI, KC_C)
#define BRM_V  MT(MOD_LALT, KC_V)

// Right Hand
#define BRM_SL MT(MOD_RSFT, KC_SLSH)
#define BRM_DT MT(MOD_RCTL, KC_DOT)
#define BRM_CM MT(MOD_RGUI, KC_COMM)
#define BRM_M  MT(MOD_RALT, KC_M)
#define OSM_AS OSM(MOD_LALT | MOD_LSFT)


// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [MAC_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,                         KC_BRID,   KC_BRIU,   KC_MCTRL,  KC_LNPAD,  UG_VALD,  UG_VALU,  KC_MPRV,    KC_MPLY,   KC_MNXT,    KC_MUTE,     KC_VOLD,    KC_VOLU,  KC_SNAP,  KC_SIRI,  UG_NEXT,
        KC_GRV,               KC_1,     KC_2,      KC_3,      KC_4,      KC_5,      KC_6,     KC_7,     KC_8,       KC_9,      KC_0,       KC_MINS,     KC_EQL,     KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,               KC_Q,     KC_W,      KC_E,      KC_R,      KC_T,      KC_Y,     KC_U,     KC_I,       KC_O,      KC_P,       KC_LBRC,     KC_RBRC,    KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        LT(MAC_EXT,KC_ESC),   KC_A,     KC_S,      KC_D,      KC_F,      KC_G,      KC_H,     KC_J,     KC_K,       KC_L,      KC_SCLN,    KC_QUOT,     KC_ENT,
        KC_LSFT,              BRM_Z,    BRM_X,     BRM_C,     BRM_V,     KC_B,     KC_N,     BRM_M,     BRM_CM,     BRM_DT,    BRM_SL,                  KC_RSFT,              KC_UP,
        KC_LCTL,              KC_LOPTN, KC_LGUI,                             KC_SPC,                                KC_RGUI,   KC_LOPTN,   FN_MAC,      KC_RCTL,    KC_LEFT,  KC_DOWN,  KC_RGHT ),


    [MAC_FN] = LAYOUT_tkl_ansi(
        _______,            KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  UG_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        OS_TOGGL, UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [WIN_BASE] = LAYOUT_tkl_ansi(
        KC_ESC,             KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,    KC_F11,  KC_F12,   KC_PSCR,  KC_CTANA, UG_NEXT,
        KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,   KC_EQL,  KC_BSPC,  KC_INS,   KC_HOME,  KC_PGUP,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,   KC_RBRC, KC_BSLS,  KC_DEL,   KC_END,   KC_PGDN,
        KC_CAPS,  KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,            KC_ENT,
        KC_LSFT,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,
        KC_LCTL,  KC_LWIN,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RWIN,   FN_WIN,  KC_RCTL,  KC_LEFT,  KC_DOWN,  KC_RGHT),

    [WIN_FN] = LAYOUT_tkl_ansi(
        _______,            KC_BRID,  KC_BRIU,  KC_TASK,  KC_FILE,  UG_VALD,  UG_VALU,  KC_MPRV,  KC_MPLY,  KC_MNXT,  KC_MUTE,  KC_VOLD,  KC_VOLU,  _______,  _______,  UG_TOGG,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        UG_TOGG,  UG_NEXT,  UG_VALU,  UG_HUEU,  UG_SATU,  UG_SPDU,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        OS_TOGGL, UG_PREV,  UG_VALD,  UG_HUED,  UG_SATD,  UG_SPDD,  _______,  _______,  _______,  _______,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  GU_TOGG,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [MAC_EXT] = LAYOUT_tkl_ansi(
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  UG_TOGG,
        _______,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,  _______,  _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,
        KC_TRNS,  OSM_AS,   _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,            _______,
        _______,            _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),
};

// juampivallejo custom
// 1. Name your combos
enum combos {
  WE_WS1,
  SD_WS2,
  DF_ENT,
  JK_ESC,
  ER_TAB,
  CAPS_WORD,
  COMBO_LENGTH // This must be last
};

// 2. Define the trigger keys (ends with COMBO_END)
const uint16_t PROGMEM we_combo[] = {KC_W, KC_E, COMBO_END};
const uint16_t PROGMEM sd_combo[] = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM df_combo[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM jk_combo[] = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM er_combo[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM caps_combo[] = {BRM_SL, BRM_Z, COMBO_END};

// 3. Map the trigger keys to the action
combo_t key_combos[] = {
  [WE_WS1] = COMBO(we_combo, A(KC_1)), // Alt + 1 for Aerospace
  [SD_WS2] = COMBO(sd_combo, A(KC_2)), // Alt + 2 for Aerospace
  [DF_ENT] = COMBO(df_combo, KC_ENT),  // Home row Enter
  [JK_ESC] = COMBO(jk_combo, KC_ESC),  // Home row Escape
  [ER_TAB] = COMBO(er_combo, KC_TAB),  // Home row Escape
  [CAPS_WORD] = COMBO(caps_combo, QK_CAPS_WORD_TOGGLE) // Caps Word
};

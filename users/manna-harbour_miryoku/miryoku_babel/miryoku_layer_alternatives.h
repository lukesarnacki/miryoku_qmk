// Copyright 2022 Manna Harbour
// https://github.com/manna-harbour/miryoku
// generated -*- buffer-read-only: t -*-
// target: qmk

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

// Left-hand home row mods
#define GUI_A LGUI_T(KC_A)
#define CTL_A LCTL_T(KC_A)
#define ALT_S LALT_T(KC_S)
#define GUI_D LGUI_T(KC_D)
#define CTL_D LCTL_T(KC_D)
#define SFT_F LSFT_T(KC_F)
#define AGR_G RALT_T(KC_G)
#define AGR_E RALT_T(KC_E)
#define AGR_W RALT_T(KC_W)

// Right-hand home row mods
#define AGR_O RALT_T(KC_O)
#define AGR_I RALT_T(KC_I)
#define AGR_H RALT_T(KC_H)
#define SFT_J RSFT_T(KC_J)
#define GUI_K RGUI_T(KC_K)
#define CTL_K RCTL_T(KC_K)
#define ALT_L LALT_T(KC_L)
#define GUI_SCLN RGUI_T(KC_SCLN)
#define CTL_SCLN RCTL_T(KC_SCLN)
#define GUI_QUOT RGUI_T(KC_QUOT)

#define LAYER_BASE_NIX \
KC_Q,              AGR_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              AGR_O,              KC_P,              \
GUI_A,             ALT_S,             CTL_D,             SFT_F,             AGR_G,            AGR_H,              SFT_J,             CTL_K,             ALT_L,             GUI_SCLN,           \
LT(U_BUTTON,KC_Z), KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,    LT(U_BUTTON,KC_SLSH),\
U_NP,              U_NP,              LT(U_FUN,KC_ESC),LT(U_SYM2,KC_BSPC), LT(U_NAV,KC_TAB),  LT(U_NUM,KC_ENT), LT(U_SYM,KC_SPC),   LT(U_MOUSE,KC_DEL),U_NP,              U_NP

#define LAYER_MOUSE_NIX \
KC_WH_U,           KC_WH_L,           KC_MS_U,           KC_WH_R,           U_NU,              U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_WH_D,           KC_MS_L,           KC_MS_D,           KC_MS_R,           U_NU,              KC_RALT,           KC_LSFT,           KC_LGUI,           KC_LALT,           KC_LCTL,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    U_NA,              U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define LAYER_MOUSE_MAC \
KC_WH_U,           KC_WH_L,           KC_MS_U,           KC_WH_R,           U_NU,              U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_WH_D,           KC_MS_L,           KC_MS_D,           KC_MS_R,           U_NU,              KC_RALT,           KC_LSFT,           KC_LGUI,           KC_LALT,           KC_LCTL,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_NA,              TD(U_TD_U_MOUSE),  TD(U_TD_U_SYM),    U_NA,              U_NA,              \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define LAYER_NAV_NIX \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_RALT,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CW_TOGG,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              LT(U_MEDIA,KC_ENT),            KC_BSPC,           KC_DEL,            U_NP,              U_NP


#define LAYER_NAV_MAC \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           KC_RALT,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           CW_TOGG,           \
U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    U_NA,              KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            KC_INS,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_ENT,            KC_BSPC,           KC_DEL,            U_NP,              U_NP

#define LAYER_MEDIA_NIX \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_RALT,           U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define LAYER_MEDIA_MAC \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           \
KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           KC_RALT,           U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,              OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,              \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP

#define LAYER_SYM_NIX \
KC_GRV,           KC_AMPR,           KC_ASTR,           KC_PERC,           U_NA,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
KC_EQL,           KC_CIRC,           KC_MINS,           KC_UNDS,           KC_DLR,           KC_RALT,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
KC_TILD,          KC_EXLM,           KC_AT,             KC_HASH,           U_NA,           U_NA,              TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              \
U_NP,             U_NP,              U_NA,              U_NA,              KC_TAB,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define LAYER_SYM2_NIX \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,    U_NA, KC_LCBR,           KC_RCBR,           KC_PLUS,               KC_PIPE,               \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_RALT, U_NA, KC_LBRC,           KC_RBRC,           KC_DQT,             KC_QUOT,               \
U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  U_NA,    KC_LABK, KC_LPRN,           KC_RPRN,           KC_RABK,               KC_BSLS,               \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,    U_NA, U_NU,              U_NU,              U_NU,               U_NP  

#define LAYER_NUM_NIX \
U_NA,           KC_7,              KC_8,              KC_9,              U_NA,           U_NA,              TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    TD(U_TD_BOOT),     \
U_NA,            KC_4,              KC_5,              KC_6,              U_NA,              KC_RALT,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_NA,            KC_1,              KC_2,              KC_3,              U_NA,           U_NA,              TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              \
U_NP,              U_NP,              U_NA,           KC_0,           MO(U_MEDIA),           U_NA,              U_NA,              U_NA,              U_NP,              U_NP

#define LAYER_FUN_NIX \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_RALT,           KC_SCRL,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            \
U_NA,              KC_ALGR,           TD(U_TD_U_MEDIA),  TD(U_TD_U_FUN),    U_NA,              KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP

#define LAYER_FUN_MAC \
TD(U_TD_BOOT),     TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   U_NA,              KC_PSCR,           KC_F7,             KC_F8,             KC_F9,             KC_F12,            \
KC_LCTL,           KC_LALT,           KC_LGUI,           KC_LSFT,           KC_RALT,           KC_SCRL,           KC_F4,             KC_F5,             KC_F6,             KC_F11,            \
U_NA,              KC_ALGR,           TD(U_TD_U_MEDIA),  TD(U_TD_U_FUN),    U_NA,              KC_PAUS,           KC_F1,             KC_F2,             KC_F3,             KC_F10,            \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_TAB,            KC_SPC,            KC_APP,            U_NP,              U_NP


#define LAYER_TAP \
KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_QUOT,           \
KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           \
U_NP,              U_NP,              KC_ESC,            KC_BSPC,           KC_TAB,            KC_ENT,            KC_SPC,            KC_DEL,            U_NP,              U_NP


// --------------------------------------------------

#define MIRYOKU_ALTERNATIVES_BASE_AZERTY_FLIP \
KC_A,              KC_Z,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              \
LGUI_T(KC_Q),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_M),      \
LT(U_BUTTON,KC_W), ALGR_T(KC_X),      KC_C,              KC_V,              KC_B,              KC_N,              KC_COMM,           KC_DOT,            ALGR_T(KC_SLSH),   LT(U_BUTTON,KC_QUOT),\
U_NP,              U_NP,              LT(U_FUN,KC_DEL),  LT(U_NUM,KC_BSPC), LT(U_SYM,KC_ENT),  LT(U_MOUSE,KC_TAB),LT(U_NAV,KC_SPC),  LT(U_MEDIA,KC_ESC),U_NP,              U_NP

#define MIRYOKU_ALTERNATIVES_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           U_NU,              U_NU,              KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              KC_BTN3,           KC_BTN1,           KC_BTN2,           KC_BTN2,           KC_BTN1,           KC_BTN3,           U_NP,              U_NP

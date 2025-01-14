#pragma once
#include "sadekbaroudi.h"
/*
Since our quirky block definitions are basically a list of comma separated
arguments, we need a wrapper in order for these definitions to be
expanded before being used as arguments to the LAYOUT_xxx macro.
*/

// Since Reviung39 uses the name LAYOUT_reviung39 instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_reviung39))
#    define LAYOUT LAYOUT_reviung39
#endif

// Since Reviung41 uses the name LAYOUT_reviung41 instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_reviung41))
#    define LAYOUT LAYOUT_reviung41
#endif

// Since Reviung39 uses the name LAYOUT_reviung39 instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_ortho_5x12))
#    define LAYOUT LAYOUT_ortho_5x12
#endif

// Since enigma36 uses the name LAYOUT_enigma36 instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_enigma36))
#    define LAYOUT LAYOUT_enigma36
#endif

// Since Euclid36 uses the name LAYOUT_euclid36 instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_euclid36))
#    define LAYOUT LAYOUT_euclid36
#endif

// Since euclid36proto uses the name LAYOUT_euclid36proto instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_euclid36proto))
#    define LAYOUT LAYOUT_euclid36proto
#endif

// Since pteron38 uses the name LAYOUT_pteron38 instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_pteron38))
#    define LAYOUT LAYOUT_pteron38
#endif

// Since barobordhw uses the name LAYOUT_barobordhw instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_barobordhw))
#    define LAYOUT LAYOUT_barobordhw
#endif

// Since barobord uses the name LAYOUT_barobord instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_barobord))
#    define LAYOUT LAYOUT_barobord
#endif

// Since barobord uses the name LAYOUT_barobord instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_ortho_4x12))
#    define LAYOUT LAYOUT_ortho_4x12
#endif

// Since ffkbhw uses the name LAYOUT_ffkbhw instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_ffkbhw))
#    define LAYOUT LAYOUT_ffkbhw
#endif

// Since ffkbhw uses the name LAYOUT_ffkb instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_ffkb))
#    define LAYOUT LAYOUT_ffkb
#endif

// Since bgkeeb uses the name LAYOUT_bgkeeb instead of LAYOUT
#if (!defined(LAYOUT) && defined(LAYOUT_bgkeeb))
#    define LAYOUT LAYOUT_bgkeeb
#endif


// clang-format off
#define LAYOUT_ergodox_wrapper(...)          LAYOUT_ergodox(__VA_ARGS__)
#define LAYOUT_ergodox_pretty_wrapper(...)   LAYOUT_ergodox_pretty(__VA_ARGS__)
#define KEYMAP_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ortho_4x12_wrapper(...)       LAYOUT_ortho_4x12(__VA_ARGS__)
#define LAYOUT_ortho_5x12_wrapper(...)       LAYOUT_ortho_5x12(__VA_ARGS__)
#define LAYOUT_gergo_wrapper(...)            LAYOUT_gergo(__VA_ARGS__)
#define LAYOUT_split_3x6_3_wrapper(...)      LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_reviung39_wrapper(...)        LAYOUT_reviung39(__VA_ARGS__)
#define LAYOUT_pteron38_wrapper(...)         LAYOUT_pteron38(__VA_ARGS__)
#define LAYOUT_ffkbhw_wrapper(...)           LAYOUT_ffkbhw(__VA_ARGS__)

/*
Blocks for each of the four major keyboard layouts
Organized so we can quickly adapt and modify all of them
at once, rather than for each keyboard, one at a time.
And this allows for much cleaner blocks in the keymaps.
For instance Tap/Hold for Control on all of the layouts

NOTE: These are all the same length.  If you do a search/replace
  then you need to add/remove underscores to keep the
  lengths consistent.
*/

#define _________________META_NAV_1________________			KC_ESC,  KC_PGUP, KC_UP,   KC_PGDN, _______
#define _________________META_NAV_2________________			KC_HOME, KC_LEFT, KC_DOWN, KC_RGHT, KC_END

#define _________________META_NAV_L1_______________			KC_CAPS,               KC_GRV,                LCTL(LSFT(KC_TAB)),    LCTL(LGUI(KC_LEFT)),   C_CAPSWORD
#define _________________META_NAV_R1_______________			C_UNDERSCORECASE,      LCTL(LGUI(KC_RIGHT)),  LCTL(KC_TAB),          C_ANYCASE,             KC_BSLS

#define __________________WIN_NAV_1________________			_______,               _______,               LGUI(KC_UP),           _______,               _______
#define __________________WIN_NAV_2________________			_______,               LGUI(KC_LEFT),         LGUI(KC_DOWN),         LGUI(KC_RGHT),         _______

#define __ALPHA_THUMB_L1__ KC_DEL
#define __ALPHA_THUMB_L2__ KC_ENT
#define __ALPHA_THUMB_L3__ KC_TAB
#define __ALPHA_THUMB_R1__ KC_BSPC
#define __ALPHA_THUMB_R2__ KC_SPACE
#define __ALPHA_THUMB_R3__ KC_QUOT

#define __ALPHA_THUMBS_LEFT_2__                             __ALPHA_THUMB_L2__, __ALPHA_THUMB_L3__
#define __ALPHA_THUMBS_RIGHT_2__                            __ALPHA_THUMB_R1__, __ALPHA_THUMB_R2__

#define __ALPHA_THUMBS_LEFT_3__                             __ALPHA_THUMB_L1__, __ALPHA_THUMB_L2__, __ALPHA_THUMB_L3__
#define __ALPHA_THUMBS_RIGHT_3__                            __ALPHA_THUMB_R1__, __ALPHA_THUMB_R2__, __ALPHA_THUMB_R3__

#define __ALPHA_THUMBS_4__                                  __ALPHA_THUMBS_LEFT_2__, __ALPHA_THUMBS_RIGHT_2__
#define __ALPHA_THUMBS_5__                                  __ALPHA_THUMB_L1__, __ALPHA_THUMB_L2__, __ALPHA_THUMB_R1__, __ALPHA_THUMB_R2__, __ALPHA_THUMB_R3__
#define __ALPHA_THUMBS_6__                                  __ALPHA_THUMBS_LEFT_3__, __ALPHA_THUMBS_RIGHT_3__

#define __ALPHA_ALT_THUMB_L1__ __ALPHA_THUMB_L1__
#define __ALPHA_ALT_THUMB_L2__ KC_O
#define __ALPHA_ALT_THUMB_L3__ __ALPHA_THUMB_L3__
#define __ALPHA_ALT_THUMB_R1__ __ALPHA_THUMB_R1__
#define __ALPHA_ALT_THUMB_R2__ __ALPHA_THUMB_R2__
#define __ALPHA_ALT_THUMB_R3__ __ALPHA_THUMB_R3__

#define __ALPHA_ALT_THUMBS_LEFT_2__                         __ALPHA_ALT_THUMB_L2__, __ALPHA_ALT_THUMB_L3__
#define __ALPHA_ALT_THUMBS_RIGHT_2__                        __ALPHA_ALT_THUMB_R1__, __ALPHA_ALT_THUMB_R2__

#define __ALPHA_ALT_THUMBS_LEFT_3__                         __ALPHA_ALT_THUMB_L1__, __ALPHA_ALT_THUMB_L2__, __ALPHA_ALT_THUMB_L3__
#define __ALPHA_ALT_THUMBS_RIGHT_3__                        __ALPHA_ALT_THUMB_R1__, __ALPHA_ALT_THUMB_R2__, __ALPHA_ALT_THUMB_R3__

#define __ALPHA_ALT_THUMBS_4__                              __ALPHA_ALT_THUMBS_LEFT_2__, __ALPHA_ALT_THUMBS_RIGHT_2__
#define __ALPHA_ALT_THUMBS_5__                              __ALPHA_ALT_THUMB_L1__, __ALPHA_ALT_THUMB_L2__, __ALPHA_ALT_THUMB_R1__, __ALPHA_ALT_THUMB_R2__, __ALPHA_ALT_THUMB_R3__
#define __ALPHA_ALT_THUMBS_6__                              __ALPHA_ALT_THUMBS_LEFT_3__, __ALPHA_ALT_THUMBS_RIGHT_3__

#define _________________ALPHA_ALT_L1_________________                 KC_ENT,  KC_Q,    KC_W,    KC_P,    KC_B
#define _________________ALPHA_ALT_L2_________________                 KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define _________________ALPHA_ALT_L3_________________                 KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define _________________ALPHA_ALT_R1_________________                 KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define _________________ALPHA_ALT_R2_________________                 KC_F,    KC_N,    KC_E,    KC_I,    KC_H
#define _________________ALPHA_ALT_R3_________________                 KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLASH

#define __________________ALPHA_L1____________________			KC_Q,    KC_W,    KC_F,    KC_P,    KC_B
#define __________________ALPHA_L2____________________			KC_A,    KC_R,    KC_S,    KC_T,    KC_G
#define __________________ALPHA_L3____________________			KC_Z,    KC_X,    KC_C,    KC_D,    KC_V

#define __________________ALPHA_R1____________________			KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN
#define __________________ALPHA_R2____________________			KC_M,    KC_N,    KC_E,    KC_I,    KC_O
#define __________________ALPHA_R3____________________			KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLASH

#define _________________ISRT_L1________________			  KC_Y,    KC_C,    KC_L,   KC_M,     KC_K
#define _________________ISRT_L2________________			  KC_I,    KC_S,    KC_R,   KC_T,     KC_G
#define _________________ISRT_L3________________			  KC_Q,    KC_V,    KC_W,   KC_D,     KC_J

#define _________________ISRT_R1________________			  KC_Z,    KC_F,    KC_U,    KC_COMM, KC_SCLN
#define _________________ISRT_R2________________			  KC_P,    KC_N,    KC_E,    KC_A,    KC_O
#define _________________ISRT_R3________________			  KC_B,    KC_H,    KC_SLSH, KC_DOT,  KC_X

#define ___________________BLANK___________________			_______, _______, _______, _______, _______

#define ________________NAVIGATION_1_______________			_________________META_NAV_1________________
#define ________________NAVIGATION_2_______________			_________________META_NAV_2________________
#define ________________NAVIGATION_3_______________			LCTL(KC_Z), LCTL(KC_X), LCTL(KC_C), _______, LCTL(KC_V)

#define _________________NUMPAD_1__________________			KC_ASTR, KC_7,    KC_8,    KC_9,    KC_MINS
#define _________________NUMPAD_2__________________			KC_SLSH, KC_4,    KC_5,    KC_6,    KC_PLUS
#define _________________NUMPAD_3__________________			KC_EQL,  KC_1,    KC_2,    KC_3,    KC_0

#define ________________SYMBOLS_L1_________________			KC_EXLM,               KC_AT,                 KC_HASH,               KC_DLR,                KC_PERC
#define ________________SYMBOLS_L2_________________			KC_MINS,               KC_LBRC,               KC_LCBR,               KC_LPRN,               KC_LT
#define ________________SYMBOLS_L3_________________			_________________META_NAV_L1_______________

#define ________________SYMBOLS_R1_________________			KC_CIRC,               KC_AMPR,               KC_ASTR,               KC_UNDS,               KC_EQL
#define ________________SYMBOLS_R2_________________			KC_GT,                 KC_RPRN,               KC_RCBR,               KC_RBRC,               KC_PLUS
#define ________________SYMBOLS_R3_________________			_________________META_NAV_R1_______________

#define ________________SHIFTNAV_1_________________			_______,               LSFT(KC_PGUP),         LSFT(KC_UP),           LSFT(KC_PGDN),         _______
#define ________________SHIFTNAV_2_________________			LSFT(KC_HOME),         LSFT(KC_LEFT),         LSFT(KC_DOWN),         LSFT(KC_RGHT),         LSFT(KC_END)
#define ________________SHIFTNAV_3_________________			LCTL(KC_Z),            LCTL(KC_X),            LCTL(KC_C),            LCTL(KC_V),            KC_MUTE

#define ________________FUNCTION_1_________________			KC_MPLY,               KC_F7,                 KC_F8,                 KC_F9,                 KC_F10
#define ________________FUNCTION_2_________________			KC_VOLU,               KC_F4,                 KC_F5,                 KC_F6,                 KC_F11
#define ________________FUNCTION_3_________________			KC_VOLD,               KC_F1,                 KC_F2,                 KC_F3,                 KC_F12

#define ___________________RGB_1___________________			RGB_TOG,               RGB_MODE_REVERSE,      RGB_MODE_FORWARD,      _______,               TG(_ALPHA_ALT)
#define ___________________RGB_2___________________			KC_RGB_BLT,            RGB_HUI,               RGB_SAI,               RGB_VAI,               TG(_ALPHA)
#define ___________________RGB_3___________________			KC_RGB_T,              RGB_HUD,               RGB_SAD,               RGB_VAD,               _______

#define __________________MOUSE_1__________________			RESET,                 KC_MS_WH_UP,           KC_MS_UP,              KC_MS_WH_DOWN,         _______
#define __________________MOUSE_2__________________			KC_MS_WH_LEFT,         KC_MS_LEFT,            KC_MS_DOWN,            KC_MS_RIGHT,           KC_MS_WH_RIGHT
#define __________________MOUSE_3__________________			KC_MS_ACCEL0,          KC_MS_ACCEL1,          KC_MS_ACCEL2,          _______,               _______


// // UNCOMMENT TO DISABLE MACROS
// #define _________________MACROS_1__________________			___________________BLANK___________________
// #define _________________MACROS_2__________________			___________________BLANK___________________
// #define _________________MACROS_3__________________			___________________BLANK___________________

// COMMENT TO DISABLE MACROS
#define _________________MACROS_1__________________			RGB_SPI,               _______,               L_GITCOMMIT,           _______,               _______
#define _________________MACROS_2__________________			_______,               _______,               _______,               _______,               _______
#define _________________MACROS_3__________________			RGB_SPD,               _______,               _______,               _______,               _______

// #define ______________2_THUMB_BASE_________________     LT(_NAVIGATION,KC_ENT), LT(_FUNCTION,KC_BSPC)
// #define ______________2_THUMB_NAV__________________     _______,                KC_BSPC
// #define ______________2_THUMB_SYM__________________     MO(_MEDIA),             KC_BSPC
// #define ______________2_THUMB_FUNC_________________     _______,                _______
// #define ______________2_THUMB_MEDIA________________     _______,                _______
// #define ______________2_THUMB_MOUSE________________     KC_MS_BTN1,             KC_MS_BTN2
// #define ______________2_THUMB_WINNAV_______________     _______,                _______

// #define ______________4_THUMB_BASE_________________     LT(_NAVIGATION,KC_ENT), LT(_FUNCTION,KC_TAB),  LT(_FUNCTION,KC_BSPC), LT(_SYMBOLS,KC_SPACE)
// #define ______________4_THUMB_NAV__________________     _______,                KC_TAB,                KC_BSPC,               MO(_MEDIA)
// #define ______________4_THUMB_SYM__________________     MO(_MEDIA),             KC_TAB,                KC_BSPC,               _______
// #define ______________4_THUMB_FUNC_________________     _______,                _______,               _______,               _______
// #define ______________4_THUMB_MEDIA________________     _______,                _______,               _______,               _______
// #define ______________4_THUMB_MOUSE________________     KC_MS_BTN1,             KC_MS_BTN3,            KC_MS_BTN3,            KC_MS_BTN2
// #define ______________4_THUMB_WINNAV_______________     _______,                _______,               _______,               _______

// #define ______________6_THUMB_BASE_________________     KC_DEL,    ______________4_THUMB_BASE_________________, KC_QUOT
// #define ______________6_THUMB_NAV__________________     _______,   ______________4_THUMB_NAV__________________, KC_DOT
// #define ______________6_THUMB_SYM__________________     _______,   ______________4_THUMB_SYM__________________, _______
// #define ______________6_THUMB_FUNC_________________     _______,   ______________4_THUMB_FUNC_________________, _______
// #define ______________6_THUMB_MEDIA________________     _______,   ______________4_THUMB_MEDIA________________, _______
// #define ______________6_THUMB_MOUSE________________     _______,   ______________4_THUMB_MOUSE________________, _______
// #define ______________6_THUMB_WINNAV_______________     _______,   ______________4_THUMB_WINNAV_______________, _______


// clang-format on

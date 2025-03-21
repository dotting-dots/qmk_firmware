// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
        TO(2),   KC_MUTE, KC_VOLD, KC_VOLU,
        TO(1),   KC_PSLS, KC_PAST, KC_PMNS,
        KC_P7,   KC_P8,   KC_P9,   KC_PPLS,        
        KC_P4,   KC_P5,   KC_P6,      
        KC_P1,   KC_P2,   KC_P3,   KC_PENT,                    
        KC_P0,            KC_PDOT
    ),
    [1] = LAYOUT(
        TO(2),   KC_NO,   KC_NO,   KC_NO,
        TO(0),   KC_NO,   KC_NO,   KC_NO,
        KC_HOME, KC_UP,   KC_PGUP, KC_NO,         
        KC_LEFT, KC_NO,   KC_RIGHT,   
        KC_END,  KC_DOWN, KC_PGDN, KC_NO,                      
        KC_INS,           KC_DEL 
    ),
    [2] = LAYOUT(
        TO(0),   KC_NO,   KC_NO, KC_NO,
        KC_NO,   KC_NO,   KC_NO, KC_NO,
        KC_NO,   UG_VALU, KC_NO, KC_NO,         
        UG_HUED, UG_TOGG, UG_HUEU,   
        KC_NO,   UG_VALD, KC_NO, KC_NO,                      
        KC_NO,            KC_NO
    ),    
    [3] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    ),
    [4] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    ),
    [5] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    ),
    [6] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    ),
    [7] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    ),        
    [8] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    ),
    [9] = LAYOUT(
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,
        KC_NO, KC_NO, KC_NO, KC_NO,         
        KC_NO, KC_NO, KC_NO,   
        KC_NO, KC_NO, KC_NO, KC_NO,                      
        KC_NO,        KC_NO
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
/* layer 0 */    [0]   = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD)},
/* layer 1 */    [1]   = { ENCODER_CCW_CW(MS_WHLR, MS_WHLL)},
/* layer 2 */    [2]   = { ENCODER_CCW_CW(BL_DOWN, BL_UP)},
/* layer 3 */    [3]   = { ENCODER_CCW_CW(KC_NO, KC_NO)},
/* layer 4 */    [4]   = { ENCODER_CCW_CW(KC_NO, KC_NO)},
/* layer 5 */    [5]   = { ENCODER_CCW_CW(KC_NO, KC_NO)},
/* layer 6 */    [6]   = { ENCODER_CCW_CW(KC_NO, KC_NO)},
/* layer 7 */    [7]   = { ENCODER_CCW_CW(KC_NO, KC_NO)},
/* layer 8 */    [8]   = { ENCODER_CCW_CW(KC_NO, KC_NO)},
/* layer 9 */    [9]   = { ENCODER_CCW_CW(KC_NO, KC_NO)}
};
#endif

#include "ergodox_ez.h"
#include "debug.h"
#include "action_layer.h"

#define BASE 0 // default layer
#define SYMB 1 // symbols

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Basic layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |  ESC   |   !  |   @  |   #  |   $  |   %  |  ^   |           |      |      |      |      |      |      |  BkSp  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * | Tab    |   Q  |   W  |   E  |   R  |   T  |  L1  |           |      |   Y  |   U  |   I  |   O  |   P  |   Del  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   A  |   S  |   D  |   F  |   G  |------|           |------|   H  |   J  |   K  |   L  | ; :  |  ' "   |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * | LShift |   Z  |   X  |   C  |   V  |   B  |      |           |      |   N  |   M  | < ,  |   >. |  /?  | RShift |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |Ctrl  |      |      |      | Space|                                       |  Up  | Down | left | right|      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |  (   |   )  |       |  {   |  }   |
     *                                 ,------|------|------|       |------+--------+------.
     *                                 |      |      | Home |       | /    |        |      |
     *                                 |      |      |------|       |------|        |Enter |
     *                                 | Space|      | End  |       | *    |        |      |
     *                                 `--------------------'       `----------------------'
     */
    // If it accepts an argument (i.e, is a function), it doesn't need KC_.
    // Otherwise, it needs KC_*
    [BASE] = KEYMAP(  // layer 0 : default
                    // left hand
                    KC_ESC,        KC_EXLM,      KC_AT,    KC_HASH,    KC_DLR, KC_PERC,    KC_ESC,
                    KC_TAB,         KC_Q,         KC_W,     KC_E,       KC_R,   KC_T,       TG(SYMB),
                    KC_ESC,        KC_A,         KC_S,     KC_D,       KC_F,   KC_G,
                    KC_LSFT,        KC_Z,         KC_X,     KC_C,       KC_V,   KC_B,       KC_ESC,
                    KC_LCTL,          KC_ESC,      KC_ESC,  KC_ESC,    KC_SPC,
                    KC_LPRN,    KC_RPRN,
                    KC_HOME,
                    KC_VOLU,KC_BSPC,KC_END,
                    // right hand
                    KC_ESC,    KC_ESC,   KC_ESC,   KC_ESC,   KC_ESC,   KC_ESC,    KC_BSPC,
                    KC_ESC,    KC_Y,    KC_U,       KC_I,   KC_O,   KC_P,    KC_DEL,
                                KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,    KC_QUOT,
                    KC_ESC,    KC_N,   KC_M,   KC_COMM, KC_DOT, KC_SLSH,   KC_RSFT,
                                        KC_UP,  KC_DOWN,    KC_LEFT,    KC_RGHT,    KC_ESC,
                    KC_LBRC,    KC_RBRC,
                    KC_SLSH,
                    KC_ASTR,    KC_TAB,     KC_ENT
                    ),
    /* Keymap 1: Numpad Layer
     *
     * ,--------------------------------------------------.           ,--------------------------------------------------.
     * |        |  F1  |  F2  |  F3  |  F4  |  F5  |      |           |      |  F6  |  F7  |  F8  |  F9  |  F10 |   F11  |
     * |--------+------+------+------+------+-------------|           |------+------+------+------+------+------+--------|
     * |        |   !  |   @  |   {  |   }  |   |  |      |           |      |   Up |   7  |   8  |   9  |   *  |   F12  |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   #  |   $  |   (  |   )  |   `  |------|           |------| Down |   4  |   5  |   6  |   +  |        |
     * |--------+------+------+------+------+------|      |           |      |------+------+------+------+------+--------|
     * |        |   %  |   ^  |   [  |   ]  |   ~  |      |           |      |   &  |   1  |   2  |   3  |   \  |        |
     * `--------+------+------+------+------+-------------'           `-------------+------+------+------+------+--------'
     *   |      |      |      |      |      |                                       |      |   0  |   .  |   =  |      |
     *   `----------------------------------'                                       `----------------------------------'
     *                                        ,-------------.       ,-------------.
     *                                        |      |      |       |      |      |
     *                                 ,------|------|------|       |------+------+------.
     *                                 |      |      |      |       |      |      |      |
     *                                 |      |      |------|       |------|      |      |
     *                                 |      |      |      |       |      |      |      |
     *                                 `--------------------'       `--------------------'
     */
    // SYMBOLS
    [SYMB] = KEYMAP(
                    // left hand
                    KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                    KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                    KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                    KC_TRNS,KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,
                    KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,KC_TRNS,
                    KC_TRNS,KC_TRNS,
                    KC_TRNS,
                    KC_TRNS,KC_TRNS,KC_TRNS,
                    // right hand
                    KC_TRNS, KC_F6,   KC_F7,  KC_F8,   KC_F9,   KC_F10,  KC_F11,
                    KC_TRNS, KC_UP,   KC_7,   KC_8,    KC_9,    KC_ASTR, KC_F12,
                    KC_DOWN, KC_4,   KC_5,    KC_6,    KC_PLUS, KC_TRNS,
                    KC_TRNS, KC_AMPR, KC_1,   KC_2,    KC_3,    KC_BSLS, KC_TRNS,
                    KC_TRNS,KC_0,  KC_DOT,    KC_EQL,  KC_TRNS,
                    KC_TRNS, KC_TRNS,
                    KC_TRNS,
                    KC_TRNS, KC_TRNS, KC_TRNS
                    ),
};

const uint16_t PROGMEM fn_actions[] = {
    [1] = ACTION_LAYER_TAP_TOGGLE(SYMB)                // FN1 - Momentary Layer 1 (Symbols)
};

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

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {
    
};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {
    
    uint8_t layer = biton32(layer_state);
    
    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
            // TODO: Make this relevant to the ErgoDox EZ.
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
        default:
            // none
            break;
    }
    
};

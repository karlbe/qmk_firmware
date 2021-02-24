#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        /* QWERTY
     * .--------------------------------------------------------------------------------------------------------------------------------------.
     * | ESC    | 1      | 2      | 3      | 4      | 5      | 6      | 7      | 8      | 9      | 0      | - _    | + =    | BACKSP | DEL    |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------|
     * | TAB    | Q      | W      | E      | R      | T      | ~ `    | \ |    | Y      | U      | I      | O      | P      | Å [    |  ]     |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+-----------------+--------|
     * | BACKSP | A      | S      | D      | F      | G      | PSCR   | PAUS   | H      | J      | K      | L      | Ö :;   | Ä  '"  | ENTER  |
     * |--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------+--------------------------+--------|
     * | LSHIFT | Z      | X      | C      | V      | B      | PGUP   | PGDN   | N      | M      | /?     | RSHFT  | HOME   |  UP    | END    |
     * |--------+--------+--------+--------+--------+-----------------+--------+--------+--------+--------+-----------------+--------+--------|
     * | LCTRL  | LGUI   | LALT   | MOD    | COMM   | SPACE  | ENTER  | ENTER  | SPACE  | DOT    | RALT   | RCTRL  | LEFT   | DOWN   | RIGHT  |
     * '--------------------------------------------------------------------------------------------------------------------------------------'
     */
        [0] = LAYOUT_ortho_5x15(
                KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,     KC_7,     KC_8,   KC_9,    KC_0,     KC_MINS, KC_EQL,  KC_BSPC,  KC_DEL , 
                KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_GRV,   KC_BSLS,  KC_Y,   KC_U,    KC_I,     KC_O,    KC_P,    KC_LBRC,  KC_RBRC, 
                KC_BSPC, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_PSCR,  KC_PAUS,  KC_H,   KC_J,    KC_K,     KC_L,    KC_SCLN, KC_QUOT,  KC_ENT, 
                KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_PGUP,  KC_PGDN,  KC_N,   KC_M,    KC_SLASH, KC_RSFT, KC_HOME, KC_UP,    KC_END, 
                KC_LCTL, KC_LGUI, KC_LALT, MO(1),   KC_COMM, KC_SPC,  KC_ENT,   KC_ENT,   KC_SPC, KC_DOT,  KC_RALT,  KC_RCTL, KC_LEFT, KC_DOWN,  KC_RGHT
        ),

        [1] = LAYOUT_ortho_5x15(
                KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6, KC_F7, KC_F8, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_INS,  RESET, 
                KC_MPRV, KC_MPLY, KC_MNXT, KC_MSTP, KC_NO,   KC_NO, KC_NO, KC_NO, KC_P7, KC_P8,   KC_P9,   KC_PPLS, KC_PMNS, KC_NLCK, KC_SLCK, 
                KC_CAPS, KC_MUTE, KC_VOLU, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_P4, KC_P5,   KC_P6,   KC_PAST, KC_PSLS, KC_NO,   KC_NO, 
                KC_TRNS, KC_NO,   KC_VOLD, KC_NO,   KC_NO,   KC_NO, KC_NO, KC_NO, KC_P1, KC_P2,   KC_P3,   KC_PEQL, KC_PCMM, KC_TRNS, KC_NO, 
                KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO, KC_P0, KC_PDOT, KC_TRNS, KC_PENT, KC_TRNS, KC_TRNS, KC_TRNS)
    };


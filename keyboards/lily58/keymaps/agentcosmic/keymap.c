#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _LOWER,
  _COH,
  _ADJUST,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  `   |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  | DEL  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | BSPC |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  | ENT  |
 * |------+------+------+------+------+------|  = +  |    |   \   |------+------+------+------+------+------|
 * |Shft/(|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |Shft/)|
 * `-----------------------------------------/       /    \       \-----------------------------------------'
 *                   | LGUI | LALT |LCTRL | /LT(SPC)/      \LT(SPC)\  |RCTRL | RALT |A(Tab)|
 *                   |      |      |      |/       /        \       \ |      |      |      |
 *                   `----------------------------'          '-------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_GRV,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC,
  KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
  KC_LSPO,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_EQL,    KC_BSLS, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSPC,
  KC_LGUI, KC_LALT, MT(MOD_LCTL, KC_LBRC), LT(_LOWER, KC_SPC),  LT(_LOWER, KC_SPC), MT(MOD_RCTL, KC_RBRC), KC_RALT, A(KC_TAB)
),

/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |  [   |   ]  |      |      |                    |      |      |  Up  | PgU  |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |  -   |  {   |   }  |   _  |      |-------.    ,-------| PtSc | Left | Down |Right |  '   |      |
 * |------+------+------+------+------+------| BOOT  |    | BOOT  |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------| INS  | Home | End  | PgD  |  "   |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  | L(1) |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_LOWER] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  _______, _______, KC_LBRC, KC_RBRC, _______, _______,                   _______, _______, KC_UP,   KC_PGUP, _______, _______,
  _______, KC_MINS, KC_LCBR, KC_RCBR, KC_UNDS,  _______,                   KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT, KC_QUOT, _______,
  _______, _______, _______, _______, _______, _______, QK_BOOT,  QK_BOOT, KC_INS,  KC_HOME, KC_END,  KC_PGDN, KC_DQUO, _______,
                             _______, _______, _______, _______,  _______, TG(_COH),_______, _______
),

/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |  F1  |  F2  |  F3  |  F4  |  F5  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|   U   |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      |      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   |      |      |      | /       /       \      \  |      |      |      |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_COH] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, KC_F1,   KC_F2,   KC_F3, _______, _______,  KC_U,      _______, _______, _______, _______, _______, _______, _______,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |RGB ON| HUE+ | SAT+ | VAL+ |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|      |      | MODE | HUE- | SAT- | VAL- |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return state;
}

// Combos

const uint16_t PROGMEM combo_ctrl_w[] = {KC_Q, KC_W, COMBO_END};
const uint16_t PROGMEM combo_ctrl_r[] = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM combo_ctrl_t[] = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM combo_ctrl_a[] = {KC_ESC, KC_A, COMBO_END};
const uint16_t PROGMEM combo_ctrl_s[] = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM combo_ctrl_f[] = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM combo_ctrl_z[] = {KC_LSPO, KC_Z, COMBO_END};
const uint16_t PROGMEM combo_ctrl_x[] = {KC_Z, KC_X, COMBO_END};
const uint16_t PROGMEM combo_ctrl_c[] = {KC_X, KC_C, COMBO_END};
const uint16_t PROGMEM combo_ctrl_v[] = {KC_C, KC_V, COMBO_END};
const uint16_t PROGMEM combo_quote[] = {KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM combo_dquote[] = {KC_SCLN, KC_ENT, COMBO_END};
combo_t key_combos[COMBO_COUNT] = {
  COMBO(combo_ctrl_w, LCTL(KC_W)),
  COMBO(combo_ctrl_r, LCTL(KC_R)),
  COMBO(combo_ctrl_t, LCTL(KC_T)),
  COMBO(combo_ctrl_a, LCTL(KC_A)),
  COMBO(combo_ctrl_s, LCTL(KC_S)),
  COMBO(combo_ctrl_f, LCTL(KC_F)),
  COMBO(combo_ctrl_z, LCTL(KC_Z)),
  COMBO(combo_ctrl_x, LCTL(KC_X)),
  COMBO(combo_ctrl_c, LCTL(KC_C)),
  COMBO(combo_ctrl_v, LCTL(KC_V)),
  COMBO(combo_quote, KC_QUOT),
  COMBO(combo_dquote, KC_DQUO),
};

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);


// https://joric.github.io/qle/
// to get it on the other side, you need to update config.h to right master and flash the other side
static void render_logo(void) {
    static const char PROGMEM raw_logo[] = {
        0,  0,  0,  0,  0,  0, 16, 32, 64,128,  0,  0,255,  0,  0,  0, 34,178,170,166,162, 34,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  4,  8, 16,  0,  0,128,128, 64, 78, 64,128,128,  0,  0, 32, 16,  8,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16, 40, 68,130,
        1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,255,  0,  0,  0,243, 68, 68, 68, 68, 67,  0,145, 89, 85,211, 81, 81,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 16, 16, 16,
        0,  0, 56,198,  1,  0,  0,  0,  0,  0,  0,  0,  1,198, 56,  0,  0, 16, 16, 16,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,112,136,  4,  4,248,  0,  0,  0,  0,  0,  0,  0,  0,  1,  2,  4,  8, 16, 32,192,128,  0,  0,  0,
        0,  0,  0,  0,  0, 0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,  0,  0,145, 80, 80,208, 80, 94,
        0,249, 34, 34, 35, 34, 34,  0,  0,  0,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0, 64, 32, 16,  0,  1,  2,  2,  4,228,  4,  2,
        2,  1,  0, 16, 32, 64,  0,  0,  0,  0,  0,  0,  0,  0,  0,224,144,  8,  4,  4,  4,  8,240,  1,  1,  0,  0,  0,
        0,  0,  0,  0,  0,  0, 64,160, 16, 16,  8,  4,255,  0,  1,  2,  0,  0,  0,  0,  0,  0, 0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,113, 74, 74, 75, 74,114,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,255,  0,
        0,  1,  2,  4,  8,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,
        0,  0,  0,  0,  1, 50, 78,132,128, 64, 63,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  2,
        4,255,  0,  0,  0,  0,  0,  0,  0,  0,  0,
    };
    oled_write_raw_P(raw_logo, sizeof(raw_logo));
}


bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    render_logo();
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}

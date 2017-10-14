#include "infinity60.h"

//Define Layer Names
#define _BASE 0
#define _HHKB 1
#define _NAV 2
#define _MOUSE 3
#define _CONFIG 4
#define _MACRO 5

enum function_keycode {
  F_TILE_NAV,
};

enum function_id {
  TILE_NAV,
};

enum macro_id {
  WORK_EMAIL,
  PERSONAL_EMAIL,
  SCRAP_EMAIL,
  STRIPE_DUMMY_CC,
};

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|
     * |-----------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Fn1|
     * |-----------------------------------------------------------|
     * |FNav|Gui |Alt |         Space        |Fn2 |Fn3 |Fn4 |Fn5   |
     * `-----------------------------------------------------------'
     */
    [_BASE] = KEYMAP(
      KC_ESC,   KC_1,     KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSLS,  KC_GRV, \
      KC_TAB,   KC_Q,     KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSPC,          \
      KC_LCTL,  KC_A,     KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT,                     \
      KC_LSFT,  KC_Z,     KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,  MO(_HHKB),                  \
      F(F_TILE_NAV),  KC_LALT,  KC_LGUI,            KC_SPC,          TG(_NAV), TG(_MOUSE), MO(_CONFIG), MO(_MACRO)                             \
    ),

    /* Layer 1: HHKB mode (HHKB Fn)
     * ,-----------------------------------------------------------.
     * |Pwr| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Ins|Del|
     * |-----------------------------------------------------------|
     * |Caps |PRV|PLY|FWD|   |   |   |   |Psc|Slk|Pus|Up |   |Backs|
     * |-----------------------------------------------------------|
     * |      |VoD|VoU|Mut|   |   |  *|  /|Hom|PgU|Lef|Rig|Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |  +|  -|End|PgD|Dow|      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
     */
    [_HHKB] = KEYMAP(
      KC_PWR,   KC_F1,    KC_F2,    KC_F3,    KC_F4,   KC_F5,   KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_INS,  KC_DEL, \
      KC_CAPS,  KC_MRWD,  KC_MPLY,  KC_MFFD,  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_PSCR,  KC_SLCK,  KC_PAUS,  KC_UP,    KC_NO,    KC_BSPC,         \
      KC_NO,    KC_VOLD,  KC_VOLU,  KC_MUTE,  KC_NO,   KC_NO,   KC_PAST,  KC_PSLS,  KC_HOME,  KC_PGUP,  KC_LEFT,  KC_RGHT,  KC_PENT,                   \
      KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   KC_NO,   KC_PPLS,  KC_PMNS,  KC_END,   KC_PGDN,  KC_DOWN,  KC_NO,    KC_NO,                     \
      KC_NO,    KC_NO,    KC_NO,             KC_NO,               KC_NO,  KC_NO,  KC_NO,  KC_NO                                                        \
    ),

    /* Layer 2: Navigational
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |LFT|DWN|UP |RGT|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
     */
    [_NAV] = KEYMAP(
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  \
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,  KC_NO,  KC_NO,  KC_NO,          \
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_LEFT,  KC_DOWN,  KC_UP,  KC_RIGHT,  KC_NO,  KC_NO,  KC_NO,                  \
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,  KC_NO,     KC_NO,  KC_NO,  KC_NO,                  \
      KC_NO,  KC_NO,  KC_NO,             KC_NO,                 KC_NO,    KC_NO,  KC_NO,     KC_NO                                   \
    ),

    /* Layer 3: Mouse
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |MWD|MUP|MWU|   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |MLT|MDN|MRT|   |   |   |M1 |M2 |M3 |M4 |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
     */
    [_MOUSE] = KEYMAP(
      KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,  \
      KC_NO,  KC_WH_D,  KC_MS_U,  KC_WH_U,  KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,          \
      KC_NO,  KC_MS_L,  KC_MS_D,  KC_MS_R,  KC_NO,  KC_NO,  KC_NO,  KC_BTN1,  KC_BTN2,  KC_BTN3,  KC_BTN4,  KC_NO,  KC_NO,                  \
      KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,  KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,  KC_NO,                  \
      KC_NO,  KC_NO,    KC_NO,             KC_NO,                 KC_NO,    KC_NO,  KC_NO,  KC_NO                                           \
    ),

/* Layer 4: Config
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |RST|
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
    */
    [_CONFIG] = KEYMAP(
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  RESET, \
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,         \
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 \
      KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 \
      KC_NO,  KC_NO,  KC_NO,             KC_NO,               KC_NO,  KC_NO,  KC_NO,  KC_NO                                  \
    ),

     /* Layer 5: Macros
     * ,-----------------------------------------------------------.
     * |M1 |M2 |M3 |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |M4   |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |
     * `-----------------------------------------------------------'
    */
    [_MACRO] = KEYMAP(
      M(WORK_EMAIL),     M(PERSONAL_EMAIL),  M(SCRAP_EMAIL),  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
      M(STRIPE_DUMMY_CC),  KC_NO,                KC_NO,             KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,         \
      KC_NO,               KC_NO,                KC_NO,             KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 \
      KC_NO,               KC_NO,                KC_NO,             KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 \
      KC_NO,               KC_NO,                KC_NO,             KC_NO,               KC_NO,  KC_NO,  KC_NO,  KC_NO                                             \
    ),

     /* Layer X: Blank
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |  15
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |  14
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |  13
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |      |   |  13
     * `-----------------------------------------------------------'
     * |     |   |     |                       |     |   |   |     |  8
     * `-----------------------------------------------------------'
     *
     * [_BLANK] = KEYMAP(
     *  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO, \
     *  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,         \
     *  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 \
     *  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,  KC_NO,                 \
     *  KC_NO,  KC_NO,  KC_NO,             KC_NO,               KC_NO,  KC_NO,  KC_NO,  KC_NO                                  \
     * )
    */
};

const uint16_t fn_actions[] = {
  [F_TILE_NAV] = ACTION_FUNCTION(TILE_NAV),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  switch (id) {
    case TILE_NAV:
      if (record->event.pressed) {
        add_key(KC_LCTL);
        add_key(KC_LALT);
        add_key(KC_LGUI);
        send_keyboard_report();
      } else {
        del_key(KC_LCTL);
        del_key(KC_LALT);
        del_key(KC_LGUI);
        send_keyboard_report();
      }
      break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
    switch(keycode) {
      case WORK_EMAIL:
        SEND_STRING("leon@guavapass.com");
        return false;
        break;
      case PERSONAL_EMAIL:
        SEND_STRING("mok.leon@gmail.com");
        return false;
        break;
      case SCRAP_EMAIL:
        SEND_STRING("zidail@hotmail.com");
        return false;
        break;
      case STRIPE_DUMMY_CC:
        SEND_STRING("4111111111111111");
        return false;
        break;
    }
  }

  return true;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

};

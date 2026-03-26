
#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_muthurpad(
                                       KC_1,  KC_2,  KC_3,     KC_4,
                 KC_UP,   KC_MUTE,     KC_5,  KC_6,  KC_7,     KC_8,
        KC_LEFT, KC_DOWN, KC_RGHT,     KC_9,  KC_0,  KC_EQUAL, KC_MINUS
    )
    
};

// Encoder Map

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};

// OLED Display

bool oled_task_user(void) {
    oled_write_ln("MU/TH/UR", false);
    oled_write_ln("Macropad", false);
    return false;
}

// RGB Lighting
void keyboard_post_init_user(void) {
    rgblight_enable();
    rgblight_sethsv(HSV_BLUE); // default color
}
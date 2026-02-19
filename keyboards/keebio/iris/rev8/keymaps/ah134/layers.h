#pragma once

// layer names
enum layer_names {
    QWERTY,
    SYMBOL,
    NAVIGATION,
    GAMING
};

// layer macros
#define MO_SYM MO(SYMBOL)
#define MO_NAV MO(NAVIGATION)
#define TG_GAM TG(GAMING)

// keycode aliases
#define ALT_TAB LALT(KC_TAB)
#define SALT_TAB S(LALT(KC_TAB)) 
#pragma once

// layer names
enum layer_names {
    _QWERTY,
    _SYMBOL,
    _NAVIGATION,
    _GAMING
};

// layer macros
#define _MO_SYM MO(_SYMBOL)
#define _MO_NAV MO(_NAVIGATION)
#define _TG_GAM TG(_GAMING)

// keycode aliases
#define _OSM_LSFT OSM(KC_LSFT)
#define _ALT_TAB LALT(KC_TAB)
#define _SALT_TAB S(LALT(KC_TAB)) 
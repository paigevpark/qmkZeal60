#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"


/* enable/disable LEDs based on layout */
#undef BACKLIGHT_USE_SPLIT_BACKSPACE
#define BACKLIGHT_USE_SPLIT_BACKSPACE 0

#undef BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define BACKLIGHT_USE_SPLIT_LEFT_SHIFT 0

#undef BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 0

#undef BACKLIGHT_USE_7U_SPACEBAR
#define BACKLIGHT_USE_7U_SPACEBAR 0

#undef BACKLIGHT_USE_ISO_ENTER
#define BACKLIGHT_USE_ISO_ENTER 1

#undef BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS
#define BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

#endif //CONFIG_USER_H

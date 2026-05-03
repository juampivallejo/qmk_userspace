
// Max layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define TAPPING_TERM 200           // Time (ms) to hold a key before it registers as a Modifier instead of a Tap.
#define QUICK_TAP_TERM 120         // If double-tapping within 120ms, it forces a "Tap" (prevents Mod accidental triggers on Vim 'dd').
// #define RETRO_TAPPING              // If you hold a key longer than TAPPING_TERM but don't hit another key, still send the "Tap" on release.
#define PERMISSIVE_HOLD
#define CHORDAL_HOLD  //  Same hand keys are always taps

#define FLOW_TAP_TERM 150


// How long (in ms) you have to press the keys together.
// Start at 40 and go down if you get accidental triggers.
#define COMBO_TERM 45

// If you have keys that overlap (like A+S and A+S+D), enable this:
#define COMBO_MUST_HOLD_PER_COMBO

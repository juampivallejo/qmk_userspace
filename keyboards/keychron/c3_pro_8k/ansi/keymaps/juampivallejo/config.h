
// Max layers
#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define TAPPING_TERM 180           // Time (ms) to hold a key before it registers as a Modifier instead of a Tap.
#define QUICK_TAP_TERM 120         // If double-tapping within 120ms, it forces a "Tap" (prevents Mod accidental triggers on Vim 'dd').
#define HOLD_ON_OTHER_KEY_PRESS    // If Mod is held and a key on the OTHER hand is pressed, trigger the Mod immediately (Bilateral logic).
#define RETRO_TAPPING              // If you hold a key longer than TAPPING_TERM but don't hit another key, still send the "Tap" on release.


// How long (in ms) you have to press the keys together.
// Start at 40 and go down if you get accidental triggers.
#define COMBO_TERM 35

// If you have keys that overlap (like A+S and A+S+D), enable this:
#define COMBO_MUST_HOLD_PER_COMBO

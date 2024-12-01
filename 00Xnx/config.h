/*
  Set any config.h overrides for your specific keymap here.
  See config.h options at https://docs.qmk.fm/#/config_options?id=the-configh-file
*/

#undef RGB_MATRIX_HUE_STEP
#define RGB_MATRIX_HUE_STEP 6

#undef RGB_MATRIX_VAL_STEP
#define RGB_MATRIX_VAL_STEP 10

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "00Xnx/4Lpxo"
#define LAYER_STATE_16BIT
#define COMBO_COUNT 1
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define TAPPING_TERM_PER_KEY
#define RGB_MATRIX_STARTUP_SPD 60


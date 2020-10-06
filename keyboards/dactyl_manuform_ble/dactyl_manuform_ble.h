#ifndef DACTYL_MANUFORM_BLE_H_
#define DACTYL_MANUFORM_BLE_H_

#include "quantum.h"

/** 
// Used to create a keymap using only KC_ prefixed keys
#define LAYOUT_kc_ortho_4x14( \
    L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, \
    L10, L11, L12, L13, L14, L15, L16, R10, R11, R12, R13, R14, R15, R16, \
    L20, L21, L22, L23, L24, L25, L26, R20, R21, R22, R23, R24, R25, R26, \
    L30, L31, L32, L33, L34, L35, L36, R30, R31, R32, R33, R34, R35, R36 \
    ) \
    LAYOUT( \
        KC_##L00, KC_##L01, KC_##L02, KC_##L03, KC_##L04, KC_##L05, KC_##L06, KC_##R00, KC_##R01, KC_##R02, KC_##R03, KC_##R04, KC_##R05, KC_##R06, \
        KC_##L10, KC_##L11, KC_##L12, KC_##L13, KC_##L14, KC_##L15, KC_##L16, KC_##R10, KC_##R11, KC_##R12, KC_##R13, KC_##R14, KC_##R15, KC_##R16, \
        KC_##L20, KC_##L21, KC_##L22, KC_##L23, KC_##L24, KC_##L25, KC_##L26, KC_##R20, KC_##R21, KC_##R22, KC_##R23, KC_##R24, KC_##R25, KC_##R26, \
        KC_##L30, KC_##L31, KC_##L32, KC_##L33, KC_##L34, KC_##L35, KC_##L36, KC_##R30, KC_##R31, KC_##R32, KC_##R33, KC_##R34, KC_##R35, KC_##R36 \
    )

#define LAYOUT_ortho_4x14( \
  L00, L01, L02, L03, L04, L05, L06, R00, R01, R02, R03, R04, R05, R06, \
  L10, L11, L12, L13, L14, L15, L16, R10, R11, R12, R13, R14, R15, R16, \
  L20, L21, L22, L23, L24, L25, L26, R20, R21, R22, R23, R24, R25, R26, \
  L30, L31, L32, L33, L34, L35, L36, R30, R31, R32, R33, R34, R35, R36 \
  ) \
  { \
    { L00, L01, L02, L03, L04, L05, L06 }, \
    { L10, L11, L12, L13, L14, L15, L16 }, \
    { L20, L21, L22, L23, L24, L25, L26 }, \
    { L30, L31, L32, L33, L34, L35, L36 }, \
    { R06, R05, R04, R03, R02, R01, R00 }, \
    { R16, R15, R14, R13, R12, R11, R10 }, \
    { R26, R25, R24, R23, R22, R21, R20 }, \
    { R36, R35, R34, R33, R32, R31, R30 } \
  }
*/

// #define LAYOUT LAYOUT_ortho_4x14

#define LAYOUT_5x7( \
    L11, L12, L13, L14, L15, L16, L17,      \
    L21, L22, L23, L24, L25, L26, L27,      \
    L31, L32, L33, L34, L35, L36, L37,      \
    L41, L42, L43, L44, L45, L46,           \
    L51, L52, L53, L54,                     \
                        L55, L56,           \
                                  L65, L66, \
                                  L63, L64, \
         R11, R12, R13, R14, R15, R16, R17, \
         R21, R22, R23, R24, R25, R26, R27, \
         R31, R32, R33, R34, R35, R36, R37, \
              R42, R43, R44, R45, R46, R47, \
                        R54, R55, R56, R57, \
              R52, R53,                     \
    R62, R63,                               \
    R64, R65                                \
  ) \
  { \
    { L11,   L12,   L13, L14, L15, L16,   L17   }, \
    { L21,   L22,   L23, L24, L25, L26,   L27   }, \
    { L31,   L32,   L33, L34, L35, L36,   L37   }, \
    { L41,   L42,   L43, L44, L45, L46,   KC_NO }, \
    { L51,   L52,   L53, L54, L55, L56,   KC_NO }, \
    { KC_NO, KC_NO, L63, L64, L65, L66,   KC_NO }, \
    \
    { R11,   R12,   R13, R14, R15, R16,   R17   }, \
    { R21,   R22,   R23, R24, R25, R26,   R27   }, \
    { R31,   R32,   R33, R34, R35, R36,   R37   }, \
    { KC_NO, R42,   R43, R44, R45, R46,   R47   }, \
    { KC_NO, R52,   R53, R54, R55, R56,   R57   }, \
    { KC_NO, R62,   R63, R64, R65, KC_NO, KC_NO }  \
}

#define LAYOUT LAYOUT_5x7

void nrf_bootloader_jump(void);

#endif

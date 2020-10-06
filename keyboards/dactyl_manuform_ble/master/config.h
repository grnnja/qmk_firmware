#ifndef MASTER_CONFIG_H_
#define MASTER_CONFIG_H_

#include "custom_board.h"

#define THIS_DEVICE_ROWS 6
#define THIS_DEVICE_COLS 7

// #define MATRIX_ROW_PINS { PIN12, PIN11, PIN10, PIN9, PIN8, PIN7 }
// #define MATRIX_ROW_PINS { PIN7, PIN8, PIN9, PIN10, PIN11, PIN12 }
#define MATRIX_ROW_PINS { PIN18, PIN17, PIN16, PIN15, PIN14, PIN13 }

// #define MATRIX_COL_PINS { PIN13, PIN14, PIN15, PIN16, PIN17, PIN18, PIN19 }
// #define MATRIX_COL_PINS { PIN19, PIN18, PIN17, PIN16, PIN15, PIN14, PIN13 }
#define MATRIX_COL_PINS { PIN6, PIN7, PIN9, PIN8, PIN10, PIN11, PIN12 }

#define IS_LEFT_HAND  true

#endif /* MASTER_CONFIG_H_ */

// No include guard here. This file is intended to be included multiple times.

#if defined(STM32F301x8)
#include "stm32f301x8_handler.h"
#elif defined(STM32F302x8)
#include "stm32f302x8_handler.h"
#elif defined(STM32F302xC)
#include "stm32f302xc_handler.h"
#elif defined(STM32F302xE)
#include "stm32f302xe_handler.h"
#elif defined(STM32F303x8)
#include "stm32f303x8_handler.h"
#elif defined(STM32F303xC)
#include "stm32f303xc_handler.h"
#elif defined(STM32F303xE)
#include "stm32f303xe_handler.h"
#elif defined(STM32F373xC)
#include "stm32f373xc_handler.h"
#elif defined(STM32F334x8)
#include "stm32f334x8_handler.h"
#elif defined(STM32F318xx)
#include "stm32f318xx_handler.h"
#elif defined(STM32F328xx)
#include "stm32f328xx_handler.h"
#elif defined(STM32F358xx)
#include "stm32f358xx_handler.h"
#elif defined(STM32F378xx)
#include "stm32f378xx_handler.h"
#elif defined(STM32F398xx)
#include "stm32f398xx_handler.h"
#else
#error "Please select first the target STM32F3xx device used in your application (in stm32f3xx.h file)"
#endif

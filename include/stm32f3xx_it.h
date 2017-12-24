/*
 * stm32f4xx_it.h
 *
 *  Created on: Dec 4, 2017
 *      Author: technix
 */

#ifndef PLATFORM_INCLUDE_STM32F4XX_IT_H_
#define PLATFORM_INCLUDE_STM32F4XX_IT_H_

#include <stm32f3xx.h>
#include <sys/cdefs.h>

__BEGIN_DECLS

extern void (*ISR_Vector[])(void);

#define IRQN_HANDLER(id, name) extern void name ##_IRQHandler(void);
#define SKIP_HANDLER(id)
#include <stm32f3xx_handler.h>
#undef IRQN_HANDLER
#undef SKIP_HANDLER

__END_DECLS

#endif /* PLATFORM_INCLUDE_STM32F4XX_IT_H_ */

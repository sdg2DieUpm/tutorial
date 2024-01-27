/**
 * @file interr.c
 * @brief Interrupt service routines for the STM32F4 platform.
 * @author Román Cárdenas, Alberto Boscá, Josué Pagán (r.cardenas@upm.es, j.pagan@upm.es, alberto.bosca@upm.es)
 * @date 2024-01-01
 */
/* Includes ------------------------------------------------------------------*/
// Include HW dependencies:
#include "port_system.h"
#include "stm32f4xx.h"

/* Interrupt service routines --------------------------------------------------*/
/**
 * @brief This function handles the System tick timer that increments the system millisecond counter.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. **Increment the System tick counter `msTicks` in 1 count.** 
 *  `msTicks` is a `static volatile` variable declared in @link port_system.c @endlink. \n
 * Use set and get functions from port_system.c in order to modify it.
 *
 * @warning **The variable `msTicks` must be declared volatile!** Just because it is modified in this ISR, in order to avoid [*race conditions*](https://en.wikipedia.org/wiki/Race_condition)
. **Add it to the definition** after *static*.
 * 
 */
void SysTick_Handler(void)
{
  
}

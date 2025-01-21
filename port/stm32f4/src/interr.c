/**
 * @file interr.c
 * @brief Interrupt service routines for the STM32F4 platform.
 * @author Román Cárdenas (r.cardenas@upm.es)
 * @date 2024-01-01
 */
// Include headers of different port elements:
#include "stm32f4xx.h"
#include "port_system.h"

//------------------------------------------------------
// INTERRUPT SERVICE ROUTINES
//------------------------------------------------------
/**
 * @brief This function handles the System tick timer that increments the system millisecond counter.
 *
 * > **TODO alumnos:**
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

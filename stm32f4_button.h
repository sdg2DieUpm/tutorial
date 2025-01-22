/**
 * @file stm32f4_button.h
 * @brief Header for stm32f4_button.c file.
 * @author Román Cárdenas, Alberto Boscá, Josué Pagán (r.cardenas@upm.es, j.pagan@upm.es, alberto.bosca@upm.es)
 * @date 2024-01-01
 */
#ifndef STM32F4_BUTTON_H_
#define STM32F4_BUTTON_H_


/* HW dependent includes */
#include "stm32f4xx.h"
#include "stm32f4_system.h"

/* Defines -------------------------------------------------------------------*/
#define BUTTON_PORT GPIOC /*!< Button port */
#define BUTTON_PIN 13     /*!< Button pin */

#define MODER13_MASK (0x03 << BUTTON_PIN * 2) /*<! Mask for BUTTON_PIN in MODER register */
#define PUDR13_MASK (0x03 << BUTTON_PIN * 2)  /*<! Mask for BUTTON_PIN in PUPDR register */

#define MODER13_AS_INPUT (STM32F4_GPIO_MODE_IN << BUTTON_PIN * 2)       /*<! Input mode for BUTTON_PIN in MODER register */
#define PUPDR13_AS_NOPUPD (STM32F4_GPIO_PUPDR_NOPULL << BUTTON_PIN * 2) /*<! No pull up/down for BUTTON_PIN in PUPDR register */
#define IDR13_MASK (0x01 << BUTTON_PIN)                         /*<! Mask for BUTTON_PIN in IDR register */

#endif // STM32F4_BUTTON_H_

/**
 * @file port_button.h
 * @brief Header for port_button.c file.
 * @author Román Cárdenas, Alberto Boscá, Josué Pagán (r.cardenas@upm.es, j.pagan@upm.es, alberto.bosca@upm.es)
 * @date 2024-01-01
 */
#ifndef PORT_BUTTON_H_
#define PORT_BUTTON_H_

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stdbool.h>

/* HW dependent includes */
#include "port_system.h"

/* Defines -------------------------------------------------------------------*/
#define BUTTON_PORT GPIOC /*!< Button port */
#define BUTTON_PIN 13     /*!< Button pin */

#define MODER13_MASK (0x03 << BUTTON_PIN * 2) /*<! Mask for BUTTON_PIN in MODER register */
#define PUDR13_MASK (0x03 << BUTTON_PIN * 2)  /*<! Mask for BUTTON_PIN in PUPDR register */

#define MODER13_AS_INPUT (GPIO_MODE_IN << BUTTON_PIN * 2)       /*<! Input mode for BUTTON_PIN in MODER register */
#define PUPDR13_AS_NOPUPD (GPIO_PUPDR_NOPULL << BUTTON_PIN * 2) /*<! No pull up/down for BUTTON_PIN in PUPDR register */
#define IDR13_MASK (0x01 << BUTTON_PIN)                         /*<! Mask for BUTTON_PIN in IDR register */

/* Typedefs ------------------------------------------------------------------*/


/* Function prototypes and documentation ---------------------------------------*/
/**
 * @brief Configures the GPIO pin of the button.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Enable GPIOC clock in AHB1ENR \n
 * > ✅ 2. Clean previous configuration for pin 13 in MODER and PUPDR \n
 * > ✅ 2. Set pin 13 mode as input in MODER \n
 * > ✅ 3. Set pull up/down configuration as no PUPD for pin 13 in PUPDR
 *
 */
void port_button_gpio_setup(void);

/**
 * @brief Reads status of the button and returns true if it is pressed.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Read button value in the corresponding IDR register \n
 *
 * @return true if button is pressed, false otherwise
 */
bool port_button_read(void);

#endif // PORT_BUTTON_H_

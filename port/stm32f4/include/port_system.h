/**
 * @file port_system.h
 * @brief Header for port_system.c file.
 * @author Román Cárdenas, Alberto Boscá, Josué Pagán (r.cardenas@upm.es, j.pagan@upm.es, alberto.bosca@upm.es)
 * @date 2024-01-01
 */

#ifndef PORT_SYSTEM_H_
#define PORT_SYSTEM_H_

/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stdint.h>

/* Defines -------------------------------------------------------------------*/
#define GPIO_MODE_OUT 0x01     /*!< GPIO as output */
#define GPIO_PUPDR_NOPULL 0x00 /*!< GPIO no pull up or down */

/* Function prototypes and explanation -------------------------------------------------*/
/**
 * @brief Initializes the system.
 */
uint32_t port_system_init(void);

/**
 * @brief Returns the number of milliseconds since the system started.
 *
 * @retval number of milliseconds since the system started.
 */
uint32_t port_system_get_millis(void);

/**
 * @brief Sets the number of milliseconds since the system started.
 *
 * @param ms New number of milliseconds since the system started.
 */
void port_system_set_millis(uint32_t ms);

/**
 * @brief Delays the program execution for the specified number of milliseconds.
 *
 * @param ms Number of milliseconds to delay.
 */
void port_system_delay_ms(uint32_t ms);

/**
 * @brief Delays the program execution until the specified number of milliseconds since the system started.
 *
 * @param t Pointer to the variable that stores the number of milliseconds to delay until.
 * @param ms Number of milliseconds to delay until.
 *
 * @note This function modifies the value of the variable pointed by t to the number of milliseconds to delay until.
 * @note This function is useful to implement periodic tasks.
 */
void port_system_delay_until_ms(uint32_t *t, uint32_t ms);

#endif /* PORT_SYSTEM_H_ */

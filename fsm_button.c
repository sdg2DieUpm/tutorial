/**
 * @file fsm_button.c
 * @brief Button FSM main file.
 * @author Román Cárdenas, Alberto Boscá, Josué Pagán (r.cardenas@upm.es, j.pagan@upm.es, alberto.bosca@upm.es)
 * @date 2024-01-01
 */
/* Includes ------------------------------------------------------------------*/
/* Standard C includes */
#include <stddef.h>
#include <stdlib.h>

/* HW dependent includes */
#include "port_button.h"
#include "port_system.h"

/* Other includes */
#include "fsm_button.h"

/* State machine input or transition functions */
/**
 * @brief checks if the button is released.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Read and return the button state
 *
 * @param p_fsm pointer to the button FSM
 * @return true if the button is realeased; false otherwise.
 */
static bool check_button_released(fsm_t *p_fsm)
{
    return false;
}

/**
 * @brief checks if the button is pressed.
 *
 * @note it is the opposite to check_button_released
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Return the opposite to check_button_released
 *
 * @param p_fsm pointer to the button FSM
 * @return true if the button is pressed; false otherwise.
 */
static bool check_button_pressed(fsm_t *p_fsm)
{
    return false;
}

/**
 * @brief checks if the debounce time has passed.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Cast pointer to button FSM \n
 * > ✅ 2. get current system time \n
 * > ✅ 3. check if the current time is greater than the last debounce timeout \n
 *
 * @param p_fsm pointer to the button FSM
 * @return true if the current system time is greater than the last debounce timeout.
 */
static bool check_timeout(fsm_t *p_fsm)
{
    return false;
}

/* State machine output or action functions */
/**
 * @brief stores the current system time as the last time the button was pressed
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Cast pointer to button FSM \n
 * > ✅ 2. store current system time in tick_pressed \n
 * > ✅ 3. update next_timeout to successfully wait the debouce time \n
 *
 * @param p_fsm pointer to the button FSM
 */
static void do_store_tick_pressed(fsm_t *p_fsm)
{
}

/**
 * @brief it computes the time since the last time the button has been pressed.
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Cast pointer to button FSM \n
 * > ✅ 2. compute time since the last time the button was pressed \n
 * > ✅ 3. update next_timeout to successfully wait the debouce time \n
 *
 * @param p_fsm pointer to the button FSM
 */
static void do_set_duration(fsm_t *p_fsm)
{
}

/**
 * @brief Button FSM transition table
 *
 * > **TO-DO alumnos:**
 * >
 * > ✅ 1. Define the FSM's transitions. \n
 * > ✅ 2. Add a null transition (this is mandatory for all the FSMs).
 *
 */
static fsm_trans_t fsm_trans_button[] = {};

/* FSM public functions */

/* **TO-DO alumnos: ** implement fsm_button_get_duration */

/* **TO-DO alumnos: ** implement fsm_button_reset_duration */

fsm_t *fsm_button_new(uint32_t debounce_time)
{
    fsm_t *p_fsm = malloc(sizeof(fsm_button_t));
    if (p_fsm)
    {
        fsm_button_init(p_fsm, debounce_time);
    }
    return p_fsm;
}

void fsm_button_init(fsm_t *p_fsm, uint32_t debounce_time)
{
    fsm_button_t *p_button = (fsm_button_t *)p_fsm;
    fsm_init(&p_button->fsm, fsm_trans_button);
    /* **TO-DO alumnos: complete this function ** */
}

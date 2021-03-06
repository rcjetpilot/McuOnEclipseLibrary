/**
 * \file
 * \brief Configuration header file for Wait
 *
 * This header file is used to configure settings of the busy waiting module.
 */

#ifndef __McuWait_CONFIG_H
#define __McuWait_CONFIG_H

#include "McuLib.h" /* include library configuration */

#if !defined(McuWait_CONFIG_USE_CYCLE_COUNTER)
  #define McuWait_CONFIG_USE_CYCLE_COUNTER  (1 && (McuLib_CONFIG_CORTEX_M>=3))
    /*!< 1: Use hardware cycle counter (if present, only on Cortex-M3 or higher), 0: not using hardware cycle counter */
#endif

#if !defined(McuWait_CONFIG_USE_RTOS_WAIT)
  #define McuWait_CONFIG_USE_RTOS_WAIT  (0)
    /*!< 1: Use RTOS wait if RTOS is present; 0: use normal busy waiting */
#endif

#if McuWait_CONFIG_USE_CYCLE_COUNTER
  #include "McuKinetisTools.h" /* include Cortex utility functions */
#endif

#endif /* __McuWait_CONFIG_H */

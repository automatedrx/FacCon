#ifndef SYSSTATUS_H
#define SYSSTATUS_H

#include "main.h"

typedef enum {
    SYSTEM_STATE_UNKNOWN = 0,	//Initial state
	SYSTEM_STATE_BOOT,     		// All LEDs on (test pattern)
    SYSTEM_STATE_STABLE        	// Slow 4-second blink
} SystemState_t;

void SysStatus_Init(TIM_HandleTypeDef* hTimerHandle, SPI_HandleTypeDef* hLcdSpiHandle);

void LEDs_SetSystemState(SystemState_t state);
void LED_Comms_Trigger(void);
void LEDs_Process(void);       // Call every main loop iteration

#endif

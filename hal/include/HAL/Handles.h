/*----------------------------------------------------------------------------*/
/* Copyright (c) FIRST 2016. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <stdint.h>

#define HAL_INVALID_HANDLE 0

typedef int32_t HalHandle;

typedef HalHandle HalPortHandle;

typedef HalHandle HalInterruptHandle;

typedef HalHandle HalNotifierHandle;

typedef HalHandle HalAnalogOutputHandle;

typedef HalHandle HalAnalogInputHandle;

typedef HalHandle HalAnalogTriggerHandle;

typedef HalHandle HalRelayHandle;

typedef HalHandle HalDigitalHandle;

typedef HalHandle HalDigitalPWMHandle;

typedef HalHandle HalCounterHandle;

typedef HalHandle HalCompressorHandle;

typedef HalHandle HalSolenoidHandle;

typedef HalHandle HalFPGAEncoderHandle;

typedef HalHandle HalEncoderHandle;
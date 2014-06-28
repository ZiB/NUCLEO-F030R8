/*
 * File: main.h
 * Date: 09.11.2013
 * Denis Zheleznyakov aka ZiB @ http://ziblog.ru
 */

#ifndef MAIN_H_
#define MAIN_H_

#define PIN_USER_LED			A, 5, HIGH, MODE_OUTPUT_PUSH_PULL_PULL_DOWN, SPEED_2MHZ, AF_NO
#define PIN_USER_BUTTON			C, 13, LOW, MODE_INPUT_PULL_UP, SPEED_2MHZ, AF_NO

#define STM32F0XX_MD
#define HSE_VALUE       8000000UL

#include "stm32f0xx.h"

#include "macros.h"
#include "macros_stm32f0xx.h"

#endif /* MAIN_H_ */

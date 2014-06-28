/*
 * File: main.c
 * Date: 09.11.2013
 * Denis Zheleznyakov aka ZiB @ http://ziblog.ru
 */

#include "main.h"

inline static void gpio_init(void)
{
	RCC->AHBENR |= RCC_AHBENR_GPIOAEN | RCC_AHBENR_GPIOBEN | RCC_AHBENR_GPIOCEN | RCC_AHBENR_GPIODEN | RCC_AHBENR_GPIOFEN;

	// светодиод пользователя
	PIN_CONFIGURATION(PIN_USER_LED);
	PIN_OFF(PIN_USER_LED);

	// кнопка пользователя
	PIN_CONFIGURATION(PIN_USER_BUTTON);
}

void main(void)
{
	gpio_init();

	while (1)
	{
		if(PIN_SIGNAL(PIN_USER_BUTTON))
		{
			PIN_ON(PIN_USER_LED);
		}
		else
		{
			PIN_OFF(PIN_USER_LED);
		}
	}
}

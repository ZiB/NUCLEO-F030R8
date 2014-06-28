/*
 *	File:	macros.h
 *	Date:	31.08.2012
 *	Denis Zheleznyakov http://ziblog.ru
 */

#ifndef MACROS_H_
#define MACROS_H_

#define BIT(NUMBER)            		(1UL << (NUMBER))

#define ARRAY_LENGHT(Value)			(sizeof(Value) / sizeof(Value[0]))

typedef enum {FALSE = 0, TRUE = 1} flags;

typedef signed long  int32_t;
typedef signed short int16_t;
typedef signed char  int8_t;

typedef unsigned long  uint32_t;
typedef unsigned short uint16_t;
typedef unsigned char  uint8_t;

#endif /* MACROS_H_ */

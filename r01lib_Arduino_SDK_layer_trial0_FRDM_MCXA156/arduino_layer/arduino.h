/*
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#ifndef R01LIB_ARDUINO_H
#define R01LIB_ARDUINO_H

#include	"r01lib.h"
#include	"arduino_serial.h"
#include	"arduino_io.h"

int		main() __attribute__((weak));
void	setup( void );
void	loop( void );
void	delay( unsigned long ms );

#endif // !R01LIB_ARDUINO_H

/*
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#ifndef R01LIB_ARDUINO_IO_H
#define R01LIB_ARDUINO_IO_H

constexpr int	INPUT			= DigitalInOut::INPUT;
constexpr int	OUTPUT			= DigitalInOut::OUTPUT;
constexpr int	INPUT_PULLUP	= INPUT | DigitalInOut::PullUp;

constexpr bool	HIGH	= true;
constexpr bool	LOW		= false;

void	pin_mode( int pin_num, int mode );
void	digitalWrite( int pin_num, bool state );
bool	digitalRead( int pin_num );

constexpr int	RISING	= 0;
constexpr int	FALLING	= 1;
constexpr int	CHANGE	= 2;

void	attachInterrupt( int int_num, void (*callback)(void), int mode );
int		digitalPinToInterrupt( int pin_num );


#endif // !R01LIB_ARDUINO_IO_H

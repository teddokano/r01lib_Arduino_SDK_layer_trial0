/*
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#include	"r01lib.h"
#include	"arduino.h"

#include	<map>

std::map<int, DigitalInOut*>	digital_pins;

void pin_mode( int pin_num, int mode )
{
	auto	it	= digital_pins.find( pin_num );
	
	if ( it != digital_pins.end() )
	{
		(digital_pins[ pin_num ])->mode( mode );
	}
	else
	{	
		digital_pins[ pin_num ]	= new DigitalInOut( pin_num, mode );

		if ( digital_pins[ pin_num ] == nullptr )
			panic( "error @ new, in pin_mode()" );
	}
}

void digitalWrite( int pin_num, bool state )
{
	auto	it	= digital_pins.find( pin_num );
	
	if ( it != digital_pins.end() )
		*(digital_pins[ pin_num ])	= state;
}

bool digitalRead( int pin_num )
{
	auto	it	= digital_pins.find( pin_num );
	
	if ( it != digital_pins.end() )
		return	*(digital_pins[ pin_num ]);
	else
		return	false;
}

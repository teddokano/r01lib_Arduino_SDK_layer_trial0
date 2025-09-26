/*
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#include	"arduino.h"

void setup( void )
{
	Serial.begin( 115200 );
	pin_mode( BLUE, OUTPUT );
}

void loop( void )
{
	Serial.println( "Hello, world!" );

	digitalWrite( BLUE, HIGH );
	delay( 500 );

	digitalWrite( BLUE, LOW );
	delay( 500 );
}

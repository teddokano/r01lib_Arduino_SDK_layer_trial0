/*
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#ifndef R01LIB_ARDUINO_SERIAL_H
#define R01LIB_ARDUINO_SERIAL_H

#include	"arduino_serial.h"

class SerialClass
{
public:
	void	begin( int baud );
	void	print( const char *s );
	void	print( int n );
	void	print( unsigned int n );
	void	print( long n );
	void	print( unsigned long n );
	void	print( double n );
	void	print( char c );
	void	print( const std::string& s );
	void	print( std::string_view s );
	void	println( void );
	void	println( const char *s );
	void	println( int n );
	void	println( unsigned int n );
	void	println( long n );
	void	println( unsigned long n );
	void	println( double n );
	void	println( char c );
	void	println( const std::string& s );
	void	println( std::string_view s );
private:
	void	mcu_init_stdio( int baud );
};

extern SerialClass	Serial;

#endif // !R01LIB_ARDUINO_SERIAL_H

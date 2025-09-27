/*
 *  @author Tedd OKANO
 *
 *  Released under the MIT license
 */

#include	"r01lib.h"
#include	"arduino.h"

void	SerialClass::begin( int baud ) { mcu_init_stdio( baud ); }
void	SerialClass::print( const char *s ) { printf( "%s", s ); }
void	SerialClass::print( int n ) { printf( "%d", n ); }
void	SerialClass::print( unsigned int n ) { printf( "%u", n ); }
void	SerialClass::print( long n ) { printf( "%ld", n ); }
void	SerialClass::print( unsigned long n ) { printf( "%lu", n ); }
void	SerialClass::print( double n ) { printf( "%lf", n ); }
void	SerialClass::print( char c ) { putchar( c ); }
void	SerialClass::print( const std::string& s ) { printf( "%s", s.c_str	() ); }
void	SerialClass::print( std::string_view s ) { printf( "%s", s.data() ); }
void	SerialClass::println( void ) { printf( "\r\n" ); }
void	SerialClass::println( const char *s ) { print( s ); println(); }
void	SerialClass::println( int n ) { print( n ); println(); }
void	SerialClass::println( unsigned int n ) { print( n ); println(); }
void	SerialClass::println( long n ) { print( n ); println(); }
void	SerialClass::println( unsigned long n ) { print( n ); println(); }
void	SerialClass::println( double n ) { print( n ); println(); }
void	SerialClass::println( char c ) { print( c ); println(); }
void	SerialClass::println( const std::string& s ) { print( s ); println(); }
void	SerialClass::println( std::string_view s ) { print( s ); println(); }
void	SerialClass::mcu_init_stdio( int baud ) {}
SerialClass	Serial;

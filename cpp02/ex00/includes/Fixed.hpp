// Create a class in Orthodox Canonical Form that represents a fixed-point number:
// • Private members:
// ◦ An integer to store the fixed-point number value.
// ◦ A static constant integer to store the number of fractional bits. Its value
// will always be the integer literal 8.
// • Public members:
// ◦ A default constructor that initializes the fixed-point number value to 0.
// ◦ A copy constructor.
// ◦ A copy assignment operator overload.
// ◦ A destructor.
// ◦ A member function int getRawBits( void ) const;
// that returns the raw value of the fixed-point value.
// ◦ A member function void setRawBits( int const raw );
// that sets the raw value of the fixed-point number.

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed
{
	public :
	Fixed(void); // default constructor
	Fixed(Fixed const & src); // copy constructor?? idkkkkkk
	~Fixed(void); // default destructor

	Fixed	&operator=(Fixed const & wth); // i think copy assignement operator overload ??
	int		getsRawBits(int const raw); // returns the raw value of the fixed-point value.
	void	setRawBits(int const raw); // sets the raw value of the fixed-point number.

	private :
	int	_stock;
	static const int	_bits;
};



#endif
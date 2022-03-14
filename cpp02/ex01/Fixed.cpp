#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	fixed_point_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const int int_num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixed_point_value = int_num << this->n_frac_bits;
}

Fixed::Fixed(const float float_num)
{
	int power = 1 << this->n_frac_bits;

	std::cout << "Float constructor called" << std::endl;
	this->fixed_point_value = roundf(float_num * power);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int		Fixed::toInt(void) const
{
	return (this->fixed_point_value >> this->n_frac_bits);
}

float	Fixed::toFloat() const
{
	int power = 1 << this->n_frac_bits;
	float float_num = (float)this->fixed_point_value / power;

	return (float_num);
}

int		Fixed::getRawBits(void) const
{
	return this->fixed_point_value;
}

void	Fixed::setRawBits(int const raw)
{
	this->fixed_point_value = raw;
}

Fixed& Fixed::operator= (const Fixed& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->fixed_point_value = copy.getRawBits();
	return *this;
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

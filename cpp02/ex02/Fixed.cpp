#include "Fixed.hpp"

Fixed::Fixed()
{
	fixed_point_value = 0;
}

Fixed::Fixed(const Fixed& copy)
{
	*this = copy;
}

Fixed::Fixed(const int int_num)
{
	this->fixed_point_value = int_num << this->n_frac_bits;
}

Fixed::Fixed(const float float_num)
{
	int power = 1 << this->n_frac_bits;

	this->fixed_point_value = roundf(float_num * power);
}

Fixed::~Fixed()
{
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
	this->fixed_point_value = copy.getRawBits();
	return *this;
}

bool Fixed::operator>(const Fixed& d) const
{
	return this->fixed_point_value > d.getRawBits();
}

bool Fixed::operator<(const Fixed& d) const
{
	return this->fixed_point_value < d.getRawBits();
}

bool Fixed::operator>=(const Fixed& d) const
{
	return this->fixed_point_value >= d.getRawBits();
}

bool Fixed::operator<=(const Fixed& d) const
{
	return this->fixed_point_value <= d.getRawBits();
}

bool Fixed::operator==(const Fixed& d) const
{
	return this->fixed_point_value == d.getRawBits();
}

bool Fixed::operator!=(const Fixed& d) const
{
	return this->fixed_point_value != d.getRawBits();
}

Fixed Fixed::operator+(const Fixed& d)
{
	Fixed res;

	res.setRawBits(this->getRawBits() + d.getRawBits());
	return (res);
}

Fixed Fixed::operator-(const Fixed& d)
{
	Fixed res;

	res.setRawBits(this->getRawBits() - d.getRawBits());
	return (res);
}

Fixed Fixed::operator*(const Fixed& d)
{
	Fixed res;
	int power = 1 << this->n_frac_bits;
	res.setRawBits(this->toFloat() * d.toFloat() * power);
	return (res);
}

Fixed Fixed::operator/(const Fixed& d)
{
	Fixed res;
	int power = 1 << this->n_frac_bits;
	res.setRawBits(this->toFloat() / d.toFloat() * power);
	return (res);
}

Fixed& Fixed::operator++()
{
	++this->fixed_point_value;
	return (*this);
}

Fixed& Fixed::operator--()
{
	--this->fixed_point_value;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);

	++(*this);
	return (temp);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(fixed_point_value);

	--(*this);
	return (temp);
}

std::ostream& operator<< (std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat();
	return out;
}

Fixed& Fixed::min(Fixed& value1, Fixed& value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

const Fixed& Fixed::min(const Fixed& value1, const Fixed& value2)
{
	if (value1 < value2)
		return (value1);
	return (value2);
}

Fixed& Fixed::max(Fixed& value1, Fixed& value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

const Fixed& Fixed::max(const Fixed& value1, const Fixed& value2)
{
	if (value1 > value2)
		return (value1);
	return (value2);
}

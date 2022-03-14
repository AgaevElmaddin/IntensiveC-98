#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
			Fixed();
			Fixed(const Fixed& copy);
			Fixed(const int int_num);
			Fixed(const float float_num);
			~Fixed();

			Fixed& operator= (const Fixed& copy);
			bool operator>(const Fixed& d) const;
			bool operator<(const Fixed& d) const;
			bool operator>=(const Fixed& d) const;
			bool operator<=(const Fixed& d) const;
			bool operator==(const Fixed& d) const;
			bool operator!=(const Fixed& d) const;
			Fixed operator+(const Fixed& d);
			Fixed operator-(const Fixed& d);
			Fixed operator*(const Fixed& d);
			Fixed operator/(const Fixed& d);
			Fixed& operator++();
			Fixed& operator--();
			Fixed operator++(int);
			Fixed operator--(int);

			static Fixed& min(Fixed& value1, Fixed& value2);
			static const Fixed& min(const Fixed& value1, const Fixed& value2);
			static Fixed& max(Fixed& value1, Fixed& value2);
			static const Fixed& max(const Fixed& value1, const Fixed& value2);

			int		getRawBits(void) const;
			void	setRawBits(int const raw);

			int		toInt(void) const;
			float	toFloat(void) const;

	private:
			int	fixed_point_value;
			static const int n_frac_bits = 8;

};

std::ostream& operator<< (std::ostream& out, const Fixed& fixed);

#endif

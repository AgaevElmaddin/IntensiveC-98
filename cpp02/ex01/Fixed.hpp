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

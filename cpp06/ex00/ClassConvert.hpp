#ifndef CLASSCONVERT_HPP
# define CLASSCONVERT_HPP

#include <iostream>
#include <limits>
#include <cmath>

class ClassConvert
{
	private:
			std::string			typeDetection;

			int					selectedType;

			char				scalarChar;
			int					scalarInt;
			float				scalarFloat;
			double				scalarDouble;

			static const int	typeChar = 0;
			static const int	typeInt = 1;
			static const int	typeFloat = 2;
			static const int	typeDouble = 3;
			static const int	typeUndefined = 4;

	public:
			ClassConvert();
			ClassConvert(std::string typeDetection);
			ClassConvert(const ClassConvert& copy);
			~ClassConvert();

			ClassConvert& operator=(const ClassConvert& copy);

			int		researchCases(std::string typeDetection);
			int		symbolCases(std::string typeDetection);
			int		getType(std::string typeDetection);
			void	setType(std::string typeDetection);
			void	printChar();
			void	printInt();
			void	printFloat();
			void	printDouble();
			void	printTypes();
			int		checkDemotionToChar(double value);
			int		checkDemotionToInt(double value);
			int		checkDemotionToFloat(double value);
};

#endif

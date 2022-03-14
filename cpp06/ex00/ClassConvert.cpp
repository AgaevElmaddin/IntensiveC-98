#include "ClassConvert.hpp"

ClassConvert::ClassConvert()
{
	this->typeDetection = "";
	this->selectedType = typeUndefined;
	this->scalarChar = 0;
	this->scalarInt = 0;
	this->scalarFloat = 0;
	this->scalarDouble = 0;
}

ClassConvert::ClassConvert(std::string typeDetection)
{
	this->typeDetection = typeDetection;
	this->selectedType = typeUndefined;
	this->scalarChar = 0;
	this->scalarInt = 0;
	this->scalarFloat = 0;
	this->scalarDouble = 0;
	if (typeDetection.length() == 0)
	{
		std::cout << "The length of the literal is zero. Please, enter something ";
		std::cout << "with type 'char', 'int', 'float' or 'double'!" << std::endl;
	}
	if (!this->getType(typeDetection))
	{
		std::cout << "type is undefined. Please, enter something ";
		std::cout << "with type 'char', 'int', 'float' or 'double'!" << std::endl;
	}
	this->setType(typeDetection);
}

ClassConvert::ClassConvert(const ClassConvert& copy)
{
	this->typeDetection = copy.typeDetection;
	this->selectedType = copy.selectedType;
	this->scalarChar = copy.scalarChar;
	this->scalarInt = copy.scalarInt;
	this->scalarFloat = copy.scalarFloat;
	this->scalarDouble = copy.scalarDouble;
}

ClassConvert::~ClassConvert()
{

}

ClassConvert& ClassConvert::operator=(const ClassConvert& copy)
{
	this->typeDetection = copy.typeDetection;
	this->selectedType = copy.selectedType;
	this->scalarChar = copy.scalarChar;
	this->scalarInt = copy.scalarInt;
	this->scalarFloat = copy.scalarFloat;
	this->scalarDouble = copy.scalarDouble;
	return (*this);
}

int		ClassConvert::researchCases(std::string typeDetection)
{
	if (typeDetection == "-inff" || typeDetection == "+inff" || typeDetection == "nanf")
		return (this->typeFloat);
	if (typeDetection == "-inf" || typeDetection == "+inf" || typeDetection == "nan")
		return (this->typeDouble);
	return (this->typeUndefined);
}

int		ClassConvert::symbolCases(std::string typeDetection)
{
	int	amountOfDots;
	int i;

	amountOfDots = 0;
	i = 0;
	if (typeDetection[0] == '-' && typeDetection[1] != '\0')
		i++;

	if (typeDetection[i] == '.' && (typeDetection[i + 1] == 'f' || typeDetection[i + 1] == '\0'))
		return (this->typeUndefined);

	while (typeDetection[i] == '.'
		|| (typeDetection[i] >= '0' && typeDetection[i] && typeDetection[i] <= '9'))
	{
		if (typeDetection[i] == '.')
			amountOfDots++;
		if (amountOfDots > 1)
			return (this->typeUndefined);
		i++;
	}
	if (typeDetection[i] == '\0')
	{
		if (amountOfDots == 1)
			return (this->typeDouble);
		return (this->typeInt);
	}
	else if (typeDetection[i] == 'f' && typeDetection[i + 1] == '\0' && amountOfDots == 1)
		return (this->typeFloat);
	return (this->typeUndefined);
}

int		ClassConvert::getType(std::string typeDetection)
{
	this->selectedType = researchCases(typeDetection);
	if (this->selectedType != this->typeUndefined)
		return (1);
	if ((typeDetection[0] >= '0' && typeDetection[0] <= '9')
		|| typeDetection[0] == '-' || typeDetection[0] == '.')
	{
		this->selectedType = symbolCases(typeDetection);
		if (this->selectedType != this->typeUndefined)
			return (1);
	}
	if (typeDetection[1] != '\0')
		return (0);
	this->selectedType = this->typeChar;
	return (1);
}

void		ClassConvert::setType(std::string typeDetection)
{
	if (this->selectedType == this->typeChar)
		this->scalarChar = typeDetection[0];
	else if (this->selectedType == this->typeInt)
		this->scalarInt = atoi(typeDetection.c_str());
	else if (this->selectedType == this->typeFloat)
		this->scalarFloat = atof(typeDetection.c_str());
	else if (this->selectedType == this->typeDouble)
		this->scalarDouble = atof(typeDetection.c_str());
}

int		ClassConvert::checkDemotionToChar(double value)
{

	if (value > 127 || value < 0 || value - static_cast<int>(value) != 0)
	{
		std::cout << "char: impossible" << std::endl;
		return (0);
	}
	else if (value < 32 || value == 127)
	{
		std::cout << "char: Non displayable" << std::endl;
		return (0);
	}
	return (1);
}

void	ClassConvert::printChar()
{
	if (this->selectedType == this->typeChar)
		std::cout << "char: '" << this->scalarChar << "'" << std::endl;
	else if (this->selectedType == this->typeInt)
	{
		if (this->checkDemotionToChar(this->scalarInt))
			std::cout << "char: '" << static_cast<char>(this->scalarInt) << "'" << std::endl;
	}
	else if (this->selectedType == this->typeFloat)
	{
		if (this->checkDemotionToChar(this->scalarFloat))
			std::cout << "char: '" << static_cast<char>(this->scalarFloat) << "'" << std::endl;
	}
	else if (this->selectedType == this->typeDouble)
	{
		if (this->checkDemotionToChar(this->scalarDouble))
			std::cout << "char: '" << static_cast<char>(this->scalarDouble) << "'" << std::endl;
	}
}

int		ClassConvert::checkDemotionToInt(double value)
{
	return (value <= std::numeric_limits<int>::max()
			&& value >= std::numeric_limits<int>::min()
			&& value != std::numeric_limits<double>::infinity()
			&& value != -std::numeric_limits<double>::infinity()
			&& value != std::numeric_limits<double>::quiet_NaN());
}

void	ClassConvert::printInt()
{
	if (this->selectedType == this->typeChar)
		std::cout << "int: " << static_cast<int>(this->scalarChar) << std::endl;
	else if (this->selectedType == this->typeInt)
		std::cout << "int: " << static_cast<int>(this->scalarInt) << std::endl;
	else if (this->selectedType == this->typeFloat)
	{
		if (checkDemotionToInt(this->scalarFloat))
			std::cout << "int: " << static_cast<int>(this->scalarFloat) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
	else if (this->selectedType == this->typeDouble)
	{	if (checkDemotionToInt(this->scalarDouble))
			std::cout << "int: " << static_cast<int>(this->scalarDouble) << std::endl;
		else
			std::cout << "int: impossible" << std::endl;
	}
}

int		ClassConvert::checkDemotionToFloat(double value)
{
	return ((value <= std::numeric_limits<float>::max()
			&& value >= -std::numeric_limits<float>::max())
			|| value != std::numeric_limits<double>::infinity()
			|| value != -std::numeric_limits<double>::infinity()
			|| std::isnan(value));
}

void	ClassConvert::printFloat()
{
	if (this->selectedType == this->typeChar)
		std::cout << "float: " << static_cast<float>(this->scalarChar) << ".0f" << std::endl;
	else if (this->selectedType == this->typeInt)
		std::cout << "float: " << static_cast<float>(this->scalarInt) << ".0f" << std::endl;
	else if (this->selectedType == this->typeFloat)
	{
		if (static_cast<float>(this->scalarFloat) - static_cast<int>(this->scalarFloat) != 0)
			std::cout << "float: " << static_cast<float>(this->scalarFloat) << "f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(this->scalarFloat) << ".0f" << std::endl;
	}
	else if (this->selectedType == this->typeDouble)
	{
		if (static_cast<double>(this->scalarDouble) - static_cast<int>(this->scalarDouble) != 0)
			std::cout << "float: " << static_cast<float>(this->scalarDouble) << "f" << std::endl;
		else
			std::cout << "float: " << static_cast<float>(this->scalarFloat) << ".0f" << std::endl;
	}

}

void	ClassConvert::printDouble()
{
	if (this->selectedType == this->typeChar)
		std::cout << "double: " << static_cast<double>(this->scalarChar) << ".0" << std::endl;
	else if (this->selectedType == this->typeInt)
		std::cout << "double: " << static_cast<double>(this->scalarInt) << ".0" << std::endl;
	else if (this->selectedType == this->typeFloat)
	{
		if (static_cast<float>(this->scalarFloat) - static_cast<int>(this->scalarFloat) != 0)
			std::cout << "double: " << static_cast<double>(this->scalarFloat) << std::endl;
		else
			std::cout << "double: " << static_cast<double>(this->scalarFloat) << ".0" << std::endl;
	}
	else if (this->selectedType == this->typeDouble)
	{
		if ((this->scalarDouble) - static_cast<int>(this->scalarDouble) != 0)
			std::cout << "double: " << (this->scalarDouble) << std::endl;
		else
			std::cout << "double: " << (this->scalarDouble) << ".0" << std::endl;
	}
}

void	ClassConvert::printTypes()
{
	if (this->selectedType == this->typeUndefined)
	{
		std::cout << "Undefined type! Please, make sure you enter literals from these types: ";
		std::cout << "char, int, float, double" << std::endl;
	}
	this->printChar();
	this->printInt();
	this->printFloat();
	this->printDouble();
}

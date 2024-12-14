#include "ScalarConverter.hpp"

void ScalarConverter::convert(const std::string &literal)
{
	if (literal.empty())
	{
		std::cerr << "Error: Empty input." << std::endl;
		return;
	}

	if (isCharLiteral(literal))
	{
		char c = literal[1];
		printAsChar(c);
		printAsInt(static_cast<int>(c));
		printAsFloat(static_cast<float>(c));
		printAsDouble(static_cast<double>(c));
	}
	else if (isPseudoLiteral(literal))
	{
		handlePseudoLiteral(literal);
	}
	else
	{
		convertNumericLiteral(literal);
	}
}

bool ScalarConverter::isCharLiteral(const std::string &literal)
{
	return literal.size() == 3 && literal[0] == '\'' && literal[2] == '\'';
}

bool ScalarConverter::isPseudoLiteral(const std::string &literal)
{
	return literal == "-inff" || literal == "+inff" || literal == "nanf" ||
		   literal == "-inf" || literal == "+inf" || literal == "nan";
}

void ScalarConverter::handlePseudoLiteral(const std::string &literal)
{
	if (literal[literal.size() - 1] == 'f')
	{
		printAsCharImpossible();
		printAsIntImpossible();
		printAsFloat(literal);
		printAsDouble(literal.substr(0, literal.size() - 1));
	}
	else
	{
		printAsCharImpossible();
		printAsIntImpossible();
		printAsFloat(literal + "f");
		printAsDouble(literal);
	}
}

void ScalarConverter::convertNumericLiteral(const std::string &literal)
{
	char *end;
	errno = 0;
	double value = std::strtod(literal.c_str(), &end);

	if (errno == ERANGE || *end != '\0')
	{
		std::cerr << "Error: Invalid numeric literal." << std::endl;
		return;
	}

	if (value < std::numeric_limits<int>::min() || value > std::numeric_limits<int>::max())
	{
		printAsCharImpossible();
		printAsIntImpossible();
	}
	else
	{
		int intValue = static_cast<int>(value);
		printAsChar(intValue);
		printAsInt(intValue);
	}

	if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
	{
		printAsFloatImpossible();
	}
	else
	{
		printAsFloat(static_cast<float>(value));
	}

	printAsDouble(value);
}

void ScalarConverter::printAsChar(char c)
{
	if (std::isprint(c))
	{
		std::cout << "char: '" << c << "'" << std::endl;
	}
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}
}

void ScalarConverter::printAsCharImpossible()
{
	std::cout << "char: impossible" << std::endl;
}

void ScalarConverter::printAsInt(int i)
{
	std::cout << "int: " << i << std::endl;
}

void ScalarConverter::printAsIntImpossible()
{
	std::cout << "int: impossible" << std::endl;
}

void ScalarConverter::printAsFloat(float f)
{
	std::cout << std::fixed << std::setprecision(1) << "float: " << f << "f" << std::endl;
}

void ScalarConverter::printAsFloat(const std::string &pseudoLiteral)
{
	std::cout << "float: " << pseudoLiteral << std::endl;
}

void ScalarConverter::printAsFloatImpossible()
{
	std::cout << "float: impossible" << std::endl;
}

void ScalarConverter::printAsDouble(double d)
{
	std::cout << std::fixed << std::setprecision(1) << "double: " << d << std::endl;
}

void ScalarConverter::printAsDouble(const std::string &pseudoLiteral)
{
	std::cout << "double: " << pseudoLiteral << std::endl;
}

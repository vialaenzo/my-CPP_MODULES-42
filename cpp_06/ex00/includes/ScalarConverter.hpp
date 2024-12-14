#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <iostream>
#include <sstream>
#include <limits>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cerrno>
#include <string>


class ScalarConverter
{
public:
	ScalarConverter() {};

	static void convert(const std::string &literal);

private:
	static bool isCharLiteral(const std::string &literal);
	static bool isPseudoLiteral(const std::string &literal);
	static void handlePseudoLiteral(const std::string &literal);
	static void convertNumericLiteral(const std::string &literal);

	static void printAsChar(char c);
	static void printAsCharImpossible();
	static void printAsInt(int i);
	static void printAsIntImpossible();
	static void printAsFloat(float f);
	static void printAsFloat(const std::string &pseudoLiteral);
	static void printAsFloatImpossible();
	static void printAsDouble(double d);
	static void printAsDouble(const std::string &pseudoLiteral);
};

#endif

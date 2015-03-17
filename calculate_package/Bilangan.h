#ifndef _BILANGAN_H
#define _BILANGAN_H

#include <string>

const int DIVIDE_BY_ZERO = 0;
const int NEGATIVE_VALUE = 1;
const int LARGE_NUMBER = 2;
const int VALUE_ZERO = 3;

class Bilangan {
	public :
		virtual int calculate() = 0;
		virtual int binaryOpt(std::string, int, int) = 0;
		virtual int unaryOpt(std::string, int) = 0;
		virtual int toInt(std::string) = 0;
		virtual std::string toString(int) = 0;
};

#endif
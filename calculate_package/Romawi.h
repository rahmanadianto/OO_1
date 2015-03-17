/* Author : Rahman Adianto */

#ifndef _ROMAWI_H
#define _ROMAWI_H

#include "Aritmatik.h"
#include "Bilangan.h"
#include "RomawiExp.h"

class Romawi : public Aritmatik, public Bilangan {
	public :
		/* ctor, dtor, cctor, copy assignment */
		Romawi();
		Romawi(std::string, int);
		~Romawi();
		//Romawi(const Romawi&);
		//Romawi& operator=(const Romawi&);

		/* ABS method implementation */
		int calculate();
		int binaryOpt(std::string, int, int);
		int unaryOpt(std::string, int);
		int toInt(std::string);
		std::string toString(int);

	private :
		int intRomawi(char);
};

#endif
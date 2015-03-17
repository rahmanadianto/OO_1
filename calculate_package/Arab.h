/* Author : Rahman Adianto */

#ifndef _ARAB_H
#define _ARAB_H

#include "Aritmatik.h"
#include "Bilangan.h"
#include "ArabExp.h"

class Arab : public Aritmatik, public Bilangan {
	public :
		/* ctor, dtor, cctor, copy assignment */
		Arab();
		Arab(std::string, int);
		~Arab();
		//Arab(const Arab&);
		//Arab& operator=(const Arab&);

		/* ABS method implementation */
		int calculate();
		int binaryOpt(std::string, int, int);
		int unaryOpt(std::string, int);
		int toInt(std::string);
		std::string toString(int);
};

#endif
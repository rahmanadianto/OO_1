/* Author : Rahman Adianto */

#ifndef _ARITMATIK_H
#define _ARITMATIK_H

#include "Ekspresi.h"

class Aritmatik : public Ekspresi {
	public :
		/* ctor, dtor, cctor, copy assignment */
		Aritmatik();
		Aritmatik(std::string, int);
		~Aritmatik();
		//Boolean(const Boolean&);
		//Boolean& operator=(const Boolean&);

		/* ABS method implementation */
		bool isOperan(std::string);
		bool isOperator(std::string);
		bool higherPrecedence(std::string, std::string);

	protected :
		/* ABS protected method implementation */
		int getOperatorWeight(std::string);
};

#endif
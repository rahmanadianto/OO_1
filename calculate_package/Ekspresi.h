/* Author : Rahman Adianto */

#ifndef _EKSPRESI_H
#define _EKSPRESI_H

#include "BinTree.h"

const int PREFIX = 0;
const int INFIX = 1;
const int POSTFIX = 2;

class Ekpresi {
	public :
		/* ctor, dtor, cctor, copy assignment */
		Ekpresi(std::string, int);
		~Ekspresi();

		/* other method */
		virtual std::string getPrefix() = 0;
		virtual std::string getInfix() = 0;
		virtual std::string getPosfix() = 0;

	protected :
		/* attribute */
		std::string ekspresi;
		const int id;
};

#endif
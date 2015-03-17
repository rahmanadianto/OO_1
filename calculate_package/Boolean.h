/* Author : Rahman Adianto */

#ifndef _BOOLEAN_H
#define _BOOLEAN_H

#include "Ekspresi.h"

class Boolean : public Ekspresi {
	public :
		/* ctor, dtor, cctor, copy assigment */
		Boolean();
		Boolean(std::string, int);
		~Boolean();
		//Boolean(const Boolean&);
		//Boolean& operator=(const Boolean&);

		/* ABS method implementation */
		bool isOperan(std::string);
		bool isOperator(std::string);
		bool higherPrecedence(std::string, std::string);

		/* other method */
		bool calculate();
		bool binaryOpt(std::string, bool, bool);
		bool unaryOpt(std::string, bool);
		bool toBool(std::string);
		std::string toString(bool);
	
	private :
		/* ABS protected method implementation */
		int getOperatorWeight(std::string);
};

#endif
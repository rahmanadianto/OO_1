/* Author : Rahman Adianto */

#ifndef _EKSPRESI_H
#define _EKSPRESI_H

#include "../controller_package/Setting.h"
#include "../memory_package/stack.h"
#include <sstream>
#include <string>

class Ekspresi {
	public :
		/* ctor, dtor, cctor, copy assignment */
		Ekspresi();
		Ekspresi(std::string, int);
		~Ekspresi();
		//Ekspresi(const Ekspresi&);
		//Ekspresi& operator=(const Ekspresi&);

		/* getter setter */
		std::string getEkspresi();
		int getInitialId();
		void setEkspresi(std::string);

		/* other method */
		virtual bool isOperan(std::string) = 0;
		virtual bool isOperator(std::string) = 0;
		virtual bool higherPrecedence(std::string, std::string) = 0;

	protected :
		/* attribute */
		std::string ekspresi;
		const int id;

		/* protected method */
		virtual int getOperatorWeight(std::string) = 0;
		void PrefixToPostfix();
		void InfixToPostfix();
};

#endif
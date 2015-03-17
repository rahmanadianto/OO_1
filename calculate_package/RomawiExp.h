/* Author : Rahman Adianto */

#ifndef _ROMAWIEXP_H
#define _ROMAWIEXP_H

#include <string>
#include "Bilangan.h"

class RomawiExp {
	public:
		/* ctor, cctor */
		RomawiExp(int);
		RomawiExp(const RomawiExp&);

		void displayMsg();

	private:
		static std::string msg[];
		const int msg_id;
};

#endif
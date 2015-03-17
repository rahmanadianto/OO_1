/* Author : Rahman Adianto */

#ifndef _ARABEXP_H
#define _ARABEXP_H

#include <string>
#include "Bilangan.h"

class ArabExp {
	public:
		/* ctor, cctor */
		ArabExp(int);
		ArabExp(const ArabExp&);

		void displayMsg();

	private:
		static std::string msg[];
		const int msg_id;
};

#endif
/* Author : Rahman Adianto */

#ifndef _ARABEXP_H
#define _ARABEXP_H

#include <string>
#include "Bilangan.h"
/**
* ArabExp class. menangani input yang tidak memungkinkan output, seperti dibagi dengan nol 
*/
class ArabExp {
	public:
		/* ctor, cctor */
		/**
		* A constructor.
		* Memnginisialisasi msg_id = id dengan ctor initilization list
		* @param id sebagai int
		*/
		ArabExp(int);
		/**
		* A copy constructor.
		* Memnginisialisasi msg_id = exp.msg_id dengan ctor initilization list
		* @param exp sebagai konstanta reference dari ArabExp
		*/
		ArabExp(const ArabExp&);
		/**
		* A void to display the string ( msg[]).
		* Memngoutput msg[msg_id]
		*/
		void displayMsg();

	private:
		/**
		* Attribute, private variable berupa static string
		*/
		static std::string msg[];
		/**
		* Attribute, private variable berupa konstanta integer
		*/
		const int msg_id;
};

#endif
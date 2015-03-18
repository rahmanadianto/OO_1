/* Author : Husni Munaya */
/* NIM		: 13513022 */

#ifndef _ROMAWIEXP_H
#define _ROMAWIEXP_H

#include <string>
#include "Bilangan.h"

class RomawiExp {
	public:
		/* ctor, cctor */
		/**
		* A constructor.
		* Memnginisialisasi msg_id = id dengan ctor initilization list
		* @param id sebagai int
		*/
		RomawiExp(int);
		/**
		* A copy constructor.
		* Memnginisialisasi msg_id = exp.msg_id dengan ctor initilization list
		* @param exp sebagai konstanta reference dari RomawibExp
		*/
		RomawiExp(const RomawiExp&);
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
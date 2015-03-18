#ifndef _KALKULATOR_H
#define _KALKULATOR_H

#include "../calculate_package/calculate_header.h"
#include "../memory_package/memory_header.h"
#include "Setting.h"
/**
* Kalkulator class.menjalankan kalkulator
*/
class Kalkulator {
	public :
		/**
		* A constructor.
		*/
		Kalkulator();
		/**
		* A destructor.
		*/
		~Kalkulator();
		/**
		* public void 
		* running the kalkulator, 
		*/
		void run();		
		/**
		* public attribute
		* history. memori kalkulator 
		*/
		History history;
};

#endif
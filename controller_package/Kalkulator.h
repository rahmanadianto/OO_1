#ifndef _KALKULATOR_H
#define _KALKULATOR_H

#include "../calculate_package/calculate_header.h"
#include "../memory_package/memory_header.h"
#include "Setting.h"

class Kalkulator {
	public :
		Kalkulator();
		~Kalkulator();
		void run();		

		History history;
};

#endif
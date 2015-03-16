#ifndef _ROMAWI_H
#define _ROMAWI_H

#include "Bilangan.h"
#include <string>

class BilanganRomawi : public Bilangan {
public:
	std::string toString(int bil);
	int toInt(std::string bil);
private:
	int intRomawi(char c);
};

#endif
#ifndef _ROMAWI_H
#define _ROMAWI_H

#include "Bilangan.h"
#include "Aritmatik.h"
#include <string>

class BilanganRomawi : public Bilangan, public Aritmatik {
public:
	std::string toString(int bil);
	int toInt(std::string bil);
  int tambah(std::string OP1, std::string OP2);
  int kurang(std::string OP1, std::string OP2);
  int kali(std::string OP1, std::string OP2);
  int bagi(std::string OP1, std::string OP2);
private:
	int intRomawi(char c);
};

#endif
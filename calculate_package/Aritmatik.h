#ifndef _ARITMATIK_H
#define _ARITMATIK_H

#include <string>

class Aritmatik {
	virtual int tambah(std::string OP1, std::string OP2) = 0;
  virtual int kurang(std::string OP1, std::string OP2) = 0;
  virtual int kali(std::string OP1, std::string OP2) = 0;
  virtual int bagi(std::string OP1, std::string OP2) = 0;
};

#endif
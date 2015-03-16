#ifndef _ARAB_H
#define _ARAB_H

#include "Bilangan.h"
#include <string>

class BilanganArab : public Bilangan {
public:
  std::string toString(int bil);
  int toInt(std::string bil);
private:
};

#endif
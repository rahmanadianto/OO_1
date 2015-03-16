#ifndef _BILANGAN_H
#define _BILANGAN_H

#include <string>

class Bilangan {
public :
	virtual std::string toString(int) = 0;
	virtual int toInt(std::string) = 0;
};

#endif
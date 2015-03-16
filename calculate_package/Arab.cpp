#include "Arab.h"
#include <string>

std::string BilanganArab::toString(int bil) {
	std::string bilString;
	bilString = std::to_string(bil);
	return bilString;
}

int BilanganArab::toInt(std::string bil) {
	int bilInt = std::stoi(bil)
	return bilInt;
}


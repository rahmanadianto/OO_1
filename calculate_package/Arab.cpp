#include "Arab.h"
#include <string>

std::string BilanganArab::toString(int bil) {
	std::string bilString;
	bilString = std::to_string(bil);
	return bilString;
}

int BilanganArab::toInt(std::string bil) {
	int bilInt = std::stoi(bil);
	return bilInt;
}
int BilanganArab::tambah(std::string OP1, std::string OP2) {
  return toInt(OP1) + toInt(OP2);
}
int BilanganArab::kurang(std::string OP1, std::string OP2) {
  return toInt(OP1) - toInt(OP2);
}
int BilanganArab::kali(std::string OP1, std::string OP2) {
  return toInt(OP1) * toInt(OP2);
}
int BilanganArab::bagi(std::string OP1, std::string OP2) {
  return toInt(OP1) / toInt(OP2);
}




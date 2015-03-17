#include "Arab.h"
#include "ArabExp.h"

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
  if (toInt(OP2) == 0)
    throw(ArabExp(DIVIDE_BY_ZERO));
  return toInt(OP1) / toInt(OP2);
}




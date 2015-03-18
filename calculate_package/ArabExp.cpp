x/* Author : Rahman Adianto */

#include <iostream>
#include "ArabExp.h"

std::string ArabExp::msg[] = {"Error: Divided by zero"};

// initialize msg_id
ArabExp::ArabExp(int id) : msg_id(id) {}
ArabExp::ArabExp(const ArabExp& exp) : msg_id(exp.msg_id) {}

// display error message
void ArabExp::displayMsg() {
	std::cout << msg[msg_id] << std::endl;
}
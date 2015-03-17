/* Author : Rahman Adianto */

#include "RomawiExp.h"
#include <iostream>

// error message;
std::string RomawiExp::msg[] = {"", "Error: Negative value", "Error: Value is to big", "Error: Value is zero"};

// initialize msg_id
RomawiExp::RomawiExp(int id) : msg_id(id) {}
RomawiExp::RomawiExp(const RomawiExp& exp) : msg_id(exp.msg_id) {}

// display error message
void RomawiExp::displayMsg() {
	std::cout << msg[msg_id] << std::endl;
}
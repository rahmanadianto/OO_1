#include "RomawiExp.h"
#include <string>
#include <iostream>

std::string RomawiExp::msg[] = {"Error: Divided by zero", "Error: Negative value", "Error: Value is to big"};

RomawiExp::RomawiExp(int id) : msg_id(id) { }

RomawiExp::RomawiExp(const RomawiExp& exp) : msg_id(exp.msg_id) { }

void RomawiExp::displayMsg() {
  std::cout << msg[msg_id] << std::endl;
}
#include <iostream>
#include "ArabExp.h"

std::string ArabExp::msg[] = {"Error: Divided by zero", "Error: Negative value", "Error: Value is to big", "Error: Value is zero"};

// initialize msg_id
ArabExp::ArabExp(int id) : msg_id(id) { }
ArabExp::ArabExp(const ArabExp& exp) : msg_id(exp.msg_id) { }

// display error message
void ArabExp::displayMsg() {
  std::cout << msg[msg_id] << std::endl;
}
#include "ArabExp.h"
#include <string>
std::string ArabExp::msg[] = {"Error: Divided by zero", "Error: Negative value", "Error: Value is to big", "Error: Value is zero"};

ArabExp::ArabExp(int id) : msg_id(id) { }

ArabExp::ArabExp(const ArabExp& exp) : msg_id(exp.msg_id) { }

void ArabExp::displayMsg() {
  cout << msg[msg_id] << endl;
}
/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#include "Aritmatik.h"

Aritmatik::Aritmatik() : Ekspresi() {}

Aritmatik::Aritmatik(std::string eks, int _mode) : Ekspresi(eks, _mode) {
	if (id == Setting::INFIX){
		InfixToPostfix();
	}
	if (id == Setting::PREFIX)
		PrefixToPostfix();
}

Aritmatik::~Aritmatik(){}

bool Aritmatik::isOperan(std::string opr){
	return (!isOperator(opr) && (opr != "(") && (opr != ")"));
}

bool Aritmatik::isOperator(std::string oprt){
	return ((oprt == "+") || (oprt == "-") || (oprt == "*") || (oprt == "/") || (oprt == "~"));
}

bool Aritmatik::higherPrecedence(std::string high, std::string low){
	return (getOperatorWeight(high) > getOperatorWeight(low));
}

int Aritmatik::getOperatorWeight(std::string oprt){
	if (oprt == "~")
		return 5;
	if (oprt == "*")
		return 4;
	if (oprt == "/")
		return 3;
	if (oprt == "+")
		return 2;
	if (oprt == "-")
		return 1;
}

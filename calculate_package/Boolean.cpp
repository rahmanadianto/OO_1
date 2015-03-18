/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#include "Boolean.h"

Boolean::Boolean() : Ekspresi() {}

Boolean::Boolean(std::string eks, int _mode) : Ekspresi(eks, _mode) {
	if (id == Setting::INFIX){
		InfixToPostfix();
	}
	if (id == Setting::PREFIX)
		PrefixToPostfix();
}

Boolean::~Boolean(){}

bool Boolean::isOperan(std::string opr){
	bool str = ((opr == "true") || (opr == "false") || (opr == "nottrue") || (opr == "notfalse"));
	bool biner = ((opr == "1") || (opr == "0") || (opr == "!1") || (opr == "!0"));
	return (str || biner);
}

bool Boolean::isOperator(std::string oprt){
	return ((oprt == "and") || (oprt == "or") || (oprt == "not") || (oprt == "!"));
}

bool Boolean::higherPrecedence(std::string high, std::string low){
	return (getOperatorWeight(high) > getOperatorWeight(low));
}

bool Boolean::binaryOpt(std::string oprt, bool a, bool b){
	if (oprt == "and")
		return a && b;
	if (oprt == "or")
		return a || b;
}

bool Boolean::unaryOpt(std::string oprt, bool a){
	return ((oprt == "not") || (oprt == "!")) ? !a : false;
}

bool Boolean::calculate(){
	stack<bool> Calc;
	std::stringstream stream(ekspresi);
	std::string word_temp;
	bool operan1, operan2;

	while (stream >> word_temp){
		if (isOperan(word_temp))
			Calc.push(toBool(word_temp));
		else
			if ((word_temp != "not") && (word_temp != "!")){
				operan2 = Calc.top();
				Calc.pop();
				operan1 = Calc.top();
				Calc.pop();
				Calc.push(binaryOpt(word_temp, operan1, operan2));
			}
			else{
				operan1 = Calc.top();
				Calc.pop();
				Calc.push(unaryOpt(word_temp, operan1));
			}
	}
	return Calc.top();
}

bool Boolean::toBool(std::string str){
	if (str == "true")
		return true;
	if (str == "false")
		return false;
	if (str == "nottrue")
		return false;
	if (str == "notfalse")
		return true;
	if (str == "1")
		return true;
	if (str == "0")
		return false;
	if (str == "!1")
		return false;
	if (str == "!0")
		return true;
}

std::string Boolean::toString(bool Bool){
	return Bool ? "true" : "false";
}

int Boolean::getOperatorWeight(std::string oprt){
	if (oprt == "not")
		return 3;
	if (oprt == "and")
		return 2;
	if (oprt == "or")
		return 1;
}


/* Author : Rahman Adianto */

#include "Arab.h"

Arab::Arab() : Aritmatik() {}

Arab::Arab(std::string eks, int _mode) : Aritmatik(eks, _mode) {}

Arab::~Arab() {}

int Arab::calculate(){
	stack<int> Calc;
	std::stringstream stream(ekspresi);
	std::string word_temp;
	int operan1, operan2;

	while (stream >> word_temp){
		if (isOperan(word_temp))
			Calc.push(toInt(word_temp));
		else
			if (word_temp != "~"){
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

int Arab::binaryOpt(std::string oprt, int a, int b){
	if (oprt == "+") 
		return a + b;
	if (oprt == "-") 
		return a - b;
	if (oprt == "*") 
		return a * b;
	if (oprt == "/") 
		if (b == 0)
			throw(ArabExp(DIVIDE_BY_ZERO));
		return a / b;
}

int Arab::unaryOpt(std::string oprt, int a){
	if (oprt == "~")
		return -a;
}

int Arab::toInt(std::string str){
	return std::stoi(str);
}

std::string Arab::toString(int bil){
	return std::to_string(bil);
}

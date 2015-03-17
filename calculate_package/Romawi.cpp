/* Author : Rahman Adianto */

#include "Romawi.h"

Romawi::Romawi() : Aritmatik() {}

Romawi::Romawi(std::string eks, int _mode) : Aritmatik(eks, _mode) {}

Romawi::~Romawi() {}

int Romawi::calculate(){
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

int Romawi::binaryOpt(std::string oprt, int a, int b){
	int result;
	if (oprt == "+"){ 
		result = a + b;
		if (result >= 4000)
			throw(RomawiExp(LARGE_NUMBER));
		return result;
	}
	if (oprt == "-"){ 
		result =  a - b;
		if (result == 0)
			throw(RomawiExp(VALUE_ZERO));
		else if (result < 0)
			throw(RomawiExp(NEGATIVE_VALUE));
		return result;
	}
	if (oprt == "*"){ 
		result = a * b;
		if (result >= 4000)
			throw(RomawiExp(LARGE_NUMBER));
		return result;
	}
	if (oprt == "/"){
		return a / b;
	}
}

int Romawi::unaryOpt(std::string oprt, int a){
	if (oprt == "~")
		return -a;
}

int Romawi::toInt(std::string str){
	int result = 0;

	for (int i = 0; i < str.size(); i++) {
		if (i > 0 && intRomawi(str[i]) > intRomawi(str[i - 1])) {
			result += intRomawi(str[i]) - 2 * intRomawi(str[i - 1]);
		} 
		else {
			result += intRomawi(str[i]);
		}
	}

	return result;
}

std::string Romawi::toString(int bil){
	struct bilromawi_t { 
		int value; 
		char const* numeral; 
	};

	bilromawi_t const bilromawi[] ={ 
		1000, "M",
		900, "CM",
		500, "D",
		400, "CD",
		100, "C",
		90, "XC",
		50, "L",
		40, "XL",
		10, "X",
		9, "IX",
		5, "V",
		4, "IV",
		1, "I",
		0, NULL 
	};

	std::string result;

	for(bilromawi_t const* current = bilromawi; current->value > 0; ++current) {
		while (bil >= current->value) {
			result += current->numeral;
			bil -= current->value;
		}
	}

	return result;
}

int Romawi::intRomawi(char c){
	switch(c) {
		case 'I': return 1;
		case 'V': return 5; 
		case 'X': return 10;
		case 'L': return 50;
		case 'C': return 100;
		case 'D': return 500;
		case 'M': return 1000;
		default	: return 0;
	} 
}
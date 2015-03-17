/* Author : Rahman Adianto */

#include "Aritmatik.h"
#include <iostream>

using namespace std;

int main(){
	Aritmatik myAritmatik1;
	string input;
	getline(cin, input);
	Aritmatik myAritmatik2(input, INFIX);
	cout << myAritmatik2.getInitialId() << " : " << myAritmatik2.getEkspresi() << endl;
	cout << "isOperan(12) : " << myAritmatik2.isOperan("12") << endl;
	cout << "isOperator(+) : " << myAritmatik2.isOperator("+") << endl;
	cout << "higherPrecedence(~,*) : " << myAritmatik2.higherPrecedence("~", "*") << endl;
	//cout << input << " = " << myAritmatik2.calculate() << endl;

	return 0;
}
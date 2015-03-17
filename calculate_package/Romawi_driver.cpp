/* Author : Rahman Adianto */

#include "Romawi.h"
#include <iostream>

using namespace std;

int main(){
	Romawi myRomawi1;
	string input;
	getline(cin, input);
	Romawi myRomawi2(input, Setting::PREFIX);
	cout << myRomawi2.getInitialId() << " : " << myRomawi2.getEkspresi() << endl;
	cout << "isOperan(XI) : " << myRomawi2.isOperan("XI") << endl;
	cout << "isOperator(-) : " << myRomawi2.isOperator("-") << endl;
	cout << "higherPrecedence(*,-) : " << myRomawi2.higherPrecedence("*", "-") << endl;
	try {
		cout << input << " = " << myRomawi2.toString(myRomawi2.calculate()) << endl;
	} 
	catch (RomawiExp& e){
		e.displayMsg();
	}

	return 0;
}
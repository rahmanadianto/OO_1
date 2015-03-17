/* Author : Rahman Adianto */

#include "Arab.h"
#include <iostream>

using namespace std;

int main(){
	Arab myArab1;
	string input;
	getline(cin, input);
	Arab myArab2(input, Setting::PREFIX);
	cout << myArab2.getInitialId() << " : " << myArab2.getEkspresi() << endl;
	cout << "isOperan(12) : " << myArab2.isOperan("12") << endl;
	cout << "isOperator(-) : " << myArab2.isOperator("-") << endl;
	cout << "higherPrecedence(*,-) : " << myArab2.higherPrecedence("*", "-") << endl;
	try {
		cout << input << " = " << myArab2.toString(myArab2.calculate()) << endl;
	} 
	catch (ArabExp& e){
		e.displayMsg();
	}

	return 0;
}
/* Author : Rahman Adianto */

#include "Boolean.h"
#include <iostream>

using namespace std;

int main(){
	Boolean myBool1;
	string input;
	getline(cin, input);
	Boolean myBool2(input, Setting::INFIX);
	cout << myBool2.getInitialId() << " : " << myBool2.getEkspresi() << endl;
	cout << "isOperan(true) : " << myBool2.isOperan("true") << endl;
	cout << "isOperator(and) : " << myBool2.isOperator("and") << endl;
	cout << "higherPrecedence(and,or) : " << myBool2.higherPrecedence("and", "or") << endl;
	cout << input << " = " << myBool2.toString(myBool2.calculate()) << endl;

	return 0;
}
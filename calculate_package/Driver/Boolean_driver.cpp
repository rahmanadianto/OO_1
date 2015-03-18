/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#include "../Boolean.h"
#include <iostream>

using namespace std;

int main(){
	cout << "Driver Kelas Boolean" << endl << endl;
	string input;
	cout << "Masukkan ekspresi dalam mode Prefix : ";
	getline(cin, input);
	Boolean myBoolean(input, Setting::PREFIX);
	try {
		cout << input << " = " << myBoolean.toString(myBoolean.calculate()) << endl;
	} 
	catch (BooleanExp& e){
		e.displayMsg();
	}

	return 0;
}
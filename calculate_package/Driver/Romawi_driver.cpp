/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#include "../Romawi.h"
#include <iostream>

using namespace std;

int main(){
	cout << "Driver Kelas Romawi" << endl << endl;
	string input;
	cout << "Masukkan ekspresi dalam mode Prefix : ";
	getline(cin, input);
	Romawi myRomawi(input, Setting::PREFIX);
	try {
		cout << input << " = " << myRomawi.toString(myRomawi.calculate()) << endl;
	} 
	catch (RomawiExp& e){
		e.displayMsg();
	}

	return 0;
}
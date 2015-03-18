/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#include "../Arab.h"
#include <iostream>

using namespace std;

int main(){
	cout << "Driver Kelas Arab" << endl << endl;
	string input;
	cout << "Masukkan ekspresi dalam mode Prefix : ";
	getline(cin, input);
	Arab myArab(input, Setting::PREFIX);
	try {
		cout << input << " = " << myArab.toString(myArab.calculate()) << endl;
	} 
	catch (ArabExp& e){
		e.displayMsg();
	}

	return 0;
}
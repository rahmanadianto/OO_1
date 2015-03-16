#include "Arab.h"
#include <iostream>
#include <string>

using namespace std;
int main() {
	BilanganArab B;

	string s;

	cin >> s;

	cout << B.toInt(s) << endl;
	return 0;
}
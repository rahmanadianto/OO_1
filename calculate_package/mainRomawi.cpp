#include "Romawi.h"
#include <iostream>

using namespace std;

int main() {
  BilanganRomawi B;

  string s;

  cin >> s;

  cout << B.toInt(s) << endl;
  cout << B.toString(45) << endl;
  return 0;
}
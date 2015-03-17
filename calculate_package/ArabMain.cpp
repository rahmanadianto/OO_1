#include <string>
#include <iostream>
#include "Arab.h"
#include "ArabExp.h"
using namespace std;

int main() {
  BilanganArab B;

  string OP1;
  string OP2;

  cout << "Masukkan operan pertama.. "; cin >> OP1;
  cout << "Masukkan operan kedua.. "; cin >> OP2;

  try {
    int hasilBagi = B.bagi(OP1, OP2);
    cout << "hasil bagi = " << hasilBagi << endl;
  }
  catch (ArabExp& exp) {
    exp.displayMsg();
  }

  return 0;
}
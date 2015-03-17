#include <string>
#include <iostream>
#include "Arab.h"
#include "ArabExp.h"
using namespace std;

int main() {
  BilanganArab B;

  string OP1;
  string OP;
  string OP2;

  cout << "Masukkan operan pertama.. "; cin >> OP1;
  cout << "Masukan operator +, -, *, / : "; cin >> OP;
  cout << "Masukkan operan kedua.. "; cin >> OP2;

  try {
    int hasil = B.hitung(OP1, OP2, OP);
    cout << "hasil perhitungan = " << hasil << endl;
  }
  catch (ArabExp& exp) {
    exp.displayMsg();
  }

  return 0;
}
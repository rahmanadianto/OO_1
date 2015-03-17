#include "Romawi.h"
#include "RomawiExp.h"
#include <iostream>

using namespace std;

int main() {
  BilanganRomawi B;

  string OP1;
  string OP;
  string OP2;

  cout << "Masukkan operan pertama.. "; cin >> OP1;
  cout << "Masukan operator +, -, *, / : "; cin >> OP;
  cout << "Masukkan operan kedua.. "; cin >> OP2;

  try {
    int hasil = B.hitung(OP1, OP2, OP);
    cout << "Hasil perhitungan = " << hasil << " = " << B.toString(hasil) << endl;
  }

  catch (RomawiExp& exp) {
    exp.displayMsg();
  }
  return 0;
}
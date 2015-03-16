#include "Romawi.h"
#include "RomawiExp.h"
#include <iostream>

using namespace std;

int main() {
  BilanganRomawi B;
  string OP1;
  string OP2;

  cout << "Masukkan operan pertama.. "; cin >> OP1;
  cout << "Masukkan operan kedua.. "; cin >> OP2;

  try {
    int hasilKurang = B.kurang(OP1, OP2);
    cout << "hasil kurang = " << hasilKurang << endl;
  }

  catch (RomawiExp& exp) {
    exp.displayMsg();
  }
  return 0;
}
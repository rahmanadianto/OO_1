#include "Kalkulator.h"
Kalkulator::Kalkulator(){ 
		
 };
Kalkulator::~Kalkulator(){  

};
void Kalkulator::Run(){
	Parser P;
	char sc[100];
	cin.getline(sc,sizeof(sc));
	string s(sc);
	if (s=="set"){
		Setting::setAll();
	}else{
	P.ParseTreeInfix(s);
	P.PrintTree(P.GetBinTree());
	}
}

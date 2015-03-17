#include <iostream>
#include <stdlib.h>
#include "Setting.h"
int Setting::modeEkspresi = 3;
int Setting::modeOperator = 1;
int Setting::modeBilangan = 1;
void Setting::setAll(){
	Setting::setOperator();
	Setting::setBilangan();
	Setting::setEkspresi();


}
void Setting::setEkspresi(){
		system("cls");
		std::cout<<"=========================="<<std::endl;
		std::cout<<"     setting ekspresi     "<<std::endl;
		std::cout<<"1. Ekspresi Prefix"<<std::endl;
		std::cout<<"2. Ekspresi Postfix"<<std::endl;
		std::cout<<"3. Ekspresi Infix"<<std::endl;
		std::cin >> Setting::modeEkspresi; 
		system("cls");
}
void Setting::setOperator(){
		system("cls");
		std::cout<<"=========================="<<std::endl;
		std::cout<<"     setting Operator     "<<std::endl;
		std::cout<<"1. Operator Aritmatik"<<std::endl;
		std::cout<<"2. Operator Logika"<<std::endl;
		std::cin >> Setting::modeOperator;
		system("cls"); 
}
void Setting::setBilangan(){
		system("cls");
		std::cout<<"=========================="<<std::endl;
		std::cout<<"     setting bilangan     "<<std::endl;
		if (modeOperator==1){
		std::cout<<"1. bilangan arab"<<std::endl;
		std::cout<<"2. bilangan romawi"<<std::endl;
		std::cin >> Setting::modeBilangan; }
		else {
		std::cout<<"1. bilangan logika"<<std::endl;
		std::cin >> Setting::modeBilangan;
		}
		system("cls");

}

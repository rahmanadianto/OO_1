/* Author : Gazandi Cahyadarma */
/* NIM 		: 13513078 */

#include "Setting.h"
#include <iostream>
#include <cstdlib>

/* Inisialisasi default */
int Setting::modeEkspresi = INFIX;
int Setting::modeOperator = ARITMATIK;
int Setting::modeBilangan = ARAB;

int Setting::getModeOperator(){
	return modeOperator;
}

int Setting::getModeEkspresi(){
	return modeEkspresi;
}

int Setting::getModeBilangan(){
	return modeBilangan;
}

void Setting::setModeEkspresi(){
	std::cout <<  "==========================" << std::endl;
	std::cout << "     Setting Ekspresi     " << std::endl;
	std::cout << "1. Ekspresi Prefix" << std::endl;
	std::cout << "2. Ekspresi Infix" << std::endl;
 	std::cout << "3. Ekspresi Postfix" << std::endl << std::endl;
 	std::cout << "Pilihan : ";
	std::cin >> modeEkspresi;
	std::cin.ignore();	
}

void Setting::setModeOperator(){
	std::cout <<  "==========================" << std::endl;
	std::cout << "     Setting Operator     " << std::endl;
	std::cout << "1. Operator Aritmatik" << std::endl;
	std::cout << "2. Operator Logika" << std::endl << std::endl;
	std::cout << "Pilihan : ";
	std::cin >> modeOperator;
	std::cin.ignore();
}

void Setting::setModeBilangan(){
	std::cout << "==========================" << std::endl;
	std::cout << "     Setting Bilangan     " << std::endl;
	if (modeOperator == ARITMATIK){
		std::cout	<< "1. Bilangan Arab" << std::endl;
		std::cout << "2. Bilangan Romawi" << std::endl << std::endl;
		std::cout << "Pilihan : ";
		std::cin >> modeBilangan;
		std::cin.ignore();
	}
	else {
		modeBilangan = BOOLEAN;
		std::cout << "Bilangan Logika" << std::endl;
	}
	std::cout << std::endl;
}

void Setting::setSuccess(){
	std::cout << "Calculator Mode" << std::endl;
	std::cout << "Ekspresi : " << EksToString(modeEkspresi) << std::endl; 
	std::cout << "Operator : " <<	OprtToString(modeOperator) << std::endl;
	std::cout << "Bilangan : " << BilToString(modeBilangan) << std::endl;
}

std::string Setting::OprtToString(int a){
	if (a == 1)
		return "ARITMATIK";
	if (a == 2)
		return "LOGIKA";
}

std::string Setting::EksToString(int a){
	if (a == 1)
		return "PREFIX";
	if (a == 2)
		return "INFIX";
	if (a == 3)
		return "POSTFIX";
}

std::string Setting::BilToString(int a){
	if (a == 1)
		return "ARAB";
	if (a == 2)
		return "ROMAWI";
	if (a == 3)
		return "BOOLEAN";
}
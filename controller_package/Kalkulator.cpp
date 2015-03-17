#include "Kalkulator.h"
#include <iostream>
#include <cstdlib>

Kalkulator::Kalkulator(){}

Kalkulator::~Kalkulator(){}

void Kalkulator::run(){
		std::string command;

		std::cout << "> ";
		getline(std::cin, command);
		while (command != "exit"){
			if (command == "set"){
				Setting::setModeEkspresi();
				Setting::setModeOperator();
				Setting::setModeBilangan();
				Setting::setSuccess();
			}
			else{
				try {
					if (Setting::getModeBilangan() == Setting::ARAB){
						Arab arab(std::string(command), Setting::getModeEkspresi());
						std::cout << "==> " << arab.toString(arab.calculate()) << std::endl;
					}
					if (Setting::getModeBilangan() == Setting::ROMAWI){
						Romawi romawi(std::string(command), Setting::getModeEkspresi());
						std::cout << "==> " << romawi.toString(romawi.calculate()) << std::endl;
					}
					if (Setting::getModeBilangan() == Setting::BOOLEAN){
						Boolean boolean(std::string(command), Setting::getModeEkspresi());
						std::cout << "==> " << boolean.toString(boolean.calculate()) << std::endl;
					}
				} catch (ArabExp& e){
					e.displayMsg();
				} catch (RomawiExp& e){
					e.displayMsg();
				}
			}
			std::cout << "> ";
			getline(std::cin, command);
		}	
}
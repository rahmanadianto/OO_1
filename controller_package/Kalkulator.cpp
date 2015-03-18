/* Author : Gazandi Cahyadarma */
/* NIM 		: 13513078 */

#include "Kalkulator.h"
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <readline/readline.h>
#include <readline/history.h>

Kalkulator::Kalkulator(){}

Kalkulator::~Kalkulator(){}

void Kalkulator::run(){
		system("clear");
		std::cout << "***** Default Setting ****" << std::endl;
		Setting::setSuccess();
		std::cout << "Type 'help' for manual" << std::endl;

		std::string command;
		std::string arg;
		std::string args[2];
		char* buf;

		while ((buf = readline("> ")) != NULL && ((strcmp(buf,"quit") != 0))) {
			if (buf[0]!= 0) {
      	add_history(buf);
      	command = buf;
      	std::stringstream stream(command);
      	int i = 0;
      	while (stream >> arg && i < 2) {
      		args[i] = arg;
      		i++;
      	}
      }
			if (command == "set"){
				system("clear");
				history.empty();
				clear_history();
				Setting::setModeEkspresi();
				Setting::setModeOperator();
				Setting::setModeBilangan();
				Setting::setSuccess();
			}
			else if (command == "showAll") {
				history.showAll();
			}
			else if (command == "save") {
				history.save();
			}
			else if (args[0] == "showMem") {
				try {
					history.showMem(std::stoi(args[1]));
				}
				catch(...) {
					std::cout <<"command tidak tepat" << std::endl;
				}
			}
			else if (args[0] == "undo") {
				try {
					int n = std::stoi(args[1]);
					history.undo(n);	
				}
				catch(...) {
					std::cout <<"command tidak tepat" << std::endl;
				}	
			}
			else if (args[0] == "redo") {
				try {
					int n = std::stoi(args[1]);
					history.redo(n);
				}
				catch(...) {
					std::cout <<"command tidak tepat" << std::endl;
				}
			}
			else if (command == "help") {
				std::cout << "Petunjuk Penggunaan Program Kalkulator" << std::endl;
				std::cout << std::setw(15) << std::left << "1. set " << ": digunakan untuk melakukan setting terhadap mode kalkulator" << std::endl;
				std::cout << std::setw(15) << std::left << "2. showAll " << ": menampilkan semua history perhitungan yang pernah dilakukan " << std::endl;
				std::cout << std::setw(15) << std::left << "3. showMem n " << ": menampilkan n history perhitungan terakhir" << std::endl;
				std::cout << std::setw(15) << std::left << "4. redo n " << ": mengembalikan n buah history perhitungan yang pernah diundo" << std::endl;
				std::cout << std::setw(15) << std::left << "5. undo n " << ": menghapus n history perhitungan dimulai dari history terakhir" << std::endl;
				std::cout << std::setw(15) << std::left << "6. quit " << ": keluar dari program" << std::endl;
			}
			else{
				std::string result;
				try {
					if (Setting::getModeBilangan() == Setting::ARAB){
						Arab arab(std::string(command), Setting::getModeEkspresi());
						result = arab.toString(arab.calculate());
						std::cout << "==> " << result << std::endl;
					}
					if (Setting::getModeBilangan() == Setting::ROMAWI){
						Romawi romawi(std::string(command), Setting::getModeEkspresi());
						result = romawi.toString(romawi.calculate());
						std::cout << "==> " << result << std::endl;
					}
					if (Setting::getModeBilangan() == Setting::BOOLEAN){
						Boolean boolean(std::string(command), Setting::getModeEkspresi());
						result = boolean.toString(boolean.calculate());
						std::cout << "==> " << result << std::endl;
					}
				history.pushToMem(command + " = " + result);
				} catch (ArabExp& e){
					e.displayMsg();
				} catch (RomawiExp& e){
					e.displayMsg();
				} catch (...){
					std::cout << "command tidak tepat" << std::endl;
				}
			}
			previous_history();
		}	
}
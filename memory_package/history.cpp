/* Author : Husni Munaya */
/* NIM 		: 13513022 */

#include "history.h"
#include <fstream>
#include <iostream>

History::History() {}

History::~History() {}

void History::save() {
	std::ofstream myFile;
	std::string filename;
	stack<std::string> temp(mainMemory);
	std::cout << "nama file output : ";
	std::cin >> filename;
	myFile.open(filename.c_str());
	
	while(!mainMemory.empty()) {
		myFile << mainMemory.top() << std::endl;
		mainMemory.pop();
	}
	mainMemory = temp;
	myFile.close();
}

void History::showMem(int n) {
	assert(n > 0);
	std::cout << "History perhitungan :" << std::endl;
	int i = 0;
	stack<std::string> temp(mainMemory);
	stack<std::string> temp2;

	while(!mainMemory.empty() && i < n) {
		temp2.push( mainMemory.top() );
		mainMemory.pop();
		i++;
	}

	while(!temp2.empty()) {
		std::cout << temp2.top() << std::endl;
		temp2.pop();
	}
	
	mainMemory = temp;
}

void History::showAll() {
	std::cout << "History perhitungan :" << std::endl;
	stack<std::string> temp(mainMemory);
	stack<std::string> temp2;

	while(!mainMemory.empty()) {
		temp2.push(mainMemory.top());
		mainMemory.pop();
	}

	while(!temp2.empty()) {
		std::cout << temp2.top() << std::endl;
		temp2.pop();
	}
	mainMemory = temp;
}

void History::pushToMem(std::string s) {
	mainMemory.push(s);
}

void History::empty() {
	while(!mainMemory.empty()) {
		mainMemory.pop();
	}
}

void History::undo(int n) {
	assert(n > 0);
	int i = 0;
	while(!mainMemory.empty() && i < n) {
		tempMemory.push(mainMemory.top());
		mainMemory.pop();
		++i;
	}
}

void History::redo(int n) {
	assert(n > 0);
	int i = 0;
	while(!tempMemory.empty() || i < n) {
		mainMemory.push(tempMemory.top());
		tempMemory.pop();
		++i;
	}
}
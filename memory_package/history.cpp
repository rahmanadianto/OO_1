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
	int i = 0;
	stack<std::string> temp(mainMemory);
	
	while(!mainMemory.empty() && i < n) {
		std::cout << mainMemory.top() << std::endl;
		mainMemory.pop();
		i++;
	}
	
	mainMemory = temp;
}

void History::showAll() {
	stack<std::string> temp(mainMemory);

	while(!mainMemory.empty()) {
		std::cout << mainMemory.top() << std::endl;
		mainMemory.pop();
	}

	mainMemory = temp;
}

void History::pushToMem(std::string s) {
	mainMemory.push(s);
}

std::string History::undo(int n) {
	if (!mainMemory.empty() && n < mainMemory.length()) {
		std::string s;
		s = mainMemory.top();
		mainMemory.pop();
	}
}

std::string History::redo(int n) {
	if (!mainMemory.empty() && n < mainMemory.length()) {
		std::string s;
		s = tempMemory.top();
		tempMemory.top();
	}
}
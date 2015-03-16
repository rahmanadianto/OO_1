#include "history.h"
#include <fstream>
#include <iostream>

History::History() : mainMemory(10), tempMemory(10) {
}

History::~History() {
}

void History::save() {
	std::ofstream myFile;
	myFile.open("output.txt");
	stack<std::string> temp(mainMemory);
	while(!mainMemory.empty()) {
		myFile << mainMemory.top() << std::endl;
		mainMemory.pop();
	}
	mainMemory = temp;
}

void History::showMem(int n) {
	int i = 0;
	while(!mainMemory.empty() && i < n) {
		stack<std::string> temp(mainMemory);
		std::cout << mainMemory.top() << std::endl;
		mainMemory.pop();
		mainMemory = temp;
		i++;
	}	
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
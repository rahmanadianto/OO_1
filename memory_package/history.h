#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include "stack.h"

class History {
public:
	// ctor
	History();
	// dtor
	~History();

	// save main memory ke file eksternal;
	void save();

	void showMem(int n = 1);
	void showAll();
	void pushToMem(std::string s);

	// output n perintah terakhir ke layar
	// n - 1 perintah terakhir di-pop dan di-push di push ke temp memory
	// prekondisi: main memory tidak kosong
	std::string undo(int n = 1);

	// output n perintah terakhir yang ada di temp memory ke layar
	// n - 1 perintak terakhir di-pop dan di-push ke main memory
	// prekondisi: 
	std::string redo(int n = 1);

private:
	stack<std::string> mainMemory;
	stack<std::string> tempMemory;

};

#endif
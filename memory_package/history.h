#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include "stack.h"
/**
* History class. menangani memori kalkulator
*/
class History {
public:
	// ctor
	/**
	* A constructor.
	*/
	History();
	// dtor
	/**
	* A destructor
	*/
	~History();
	/**
	* public void 
	* save main memory ke file eksternal;
	*/
	void save();
	/**
	* public void 
	* menampilkan memory sebanyak n;
	* @param n 
	*/
	void showMem(int n = 1);
	/**
	* public void 
	* menampilkan semua memory;
	*/
	void showAll();
	/**
	* public void 
	* menambahkan string ke memory 
	* @param s
	*/
	void pushToMem(std::string s);
	/**
	* output n perintah terakhir ke layar 
	* n - 1 perintah terakhir di-pop dan di-push di push ke temp memory
	* prekondisi: main memory tidak kosong
	* @param n jumlah undo
	* @return string dari memory
	*/
 
	std::string undo(int n = 1);
	/**
	* output n perintah terakhir yang ada di temp memory ke layar
	* n - 1 perintak terakhir di-pop dan di-push ke main memory
	* prekondisi: sudah pernah diundo
	* @param n jumlah redo
	* @return string dari memory
	*/
	std::string redo(int n = 1);


private:
	/**
	* public attribute
	* memori utama yang berupa stack of string
	*/
	stack<std::string> mainMemory;
	/**
	* public attribute
	* memori temporary yang berupa stack of string
	*/
	stack<std::string> tempMemory;

};

#endif
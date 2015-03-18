/* Author : Husni Munaya */
/* NIM 		: 13513022 */

#ifndef HISTORY_H
#define HISTORY_H

#include <string>
#include "stack.h"

/**
* History class. menangani memori kalkulator
*/
class History {
public:
	/**
	* A constructor.
	*/
	History();

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
	void showMem(int n);

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
	* public void
	* menghapus isi memory
	*/
	void empty();

	/**
	* menghapus n history perhitungan dimulai dari history terakhir
	* prekondisi: main memory tidak kosong
	* @param n jumlah undo
	*/
	void undo(int n);

	/**
	* mengembalikan n buah history perhitungan yang pernah diundo
	* prekondisi: sudah pernah diundo
	* @param n jumlah redo
	*/
	void redo(int n);


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
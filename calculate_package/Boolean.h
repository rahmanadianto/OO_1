/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#ifndef _BOOLEAN_H
#define _BOOLEAN_H

#include "Ekspresi.h"

class Boolean : public Ekspresi {
	public :
		/* ctor, dtor, cctor, copy assigment */
		/**
		* A constructor.
		* Membuat Objek Ekspresi
		*/
		Boolean();
		/**
		* A constructor.
		* Membuat Objek Boolean dengan ekspresi yang diset dengan eks dan mode dalam ctor initialization list
		* @param eks sebuah string
		* @param mode yang berupa integer
		*/
		Boolean(std::string, int);
		/**
		* A destructor.
		*/
		~Boolean();
		//Boolean(const Boolean&);
		//Boolean& operator=(const Boolean&);

		/* ABS method implementation */
		/**
		* fungsi yang mengecek apakah string berupa operan
		* @param opr yang berupa operan
		* @return bool yang bernilai true jika string == operan boolean
		*/
		bool isOperan(std::string);
		/**
		* fungsi yang mengecek apakah string berupa operator
		* @param opr yang berupa operator
		* @return bool yang bernilai true jika string == operator boolean
		*/
		bool isOperator(std::string);
		/**
		* fungsi yang mengecek apakah string high mempunyai prioritas lebih tinggi dari string low
		* @param high yang berupa string
		* @param low yang berupa string
		* @return bool yang bernilai true jika string high > string low
		*/
		bool higherPrecedence(std::string, std::string);

		/* other method */
		/**
		* Method yang mengembalikan hasil perhitungan
		* Menghitung string postfix dengan stack.
		* @see binaryOpt
		* @see unaryOpt
		* @see toBool
		* @return hasil perhitungan
		*/
		bool calculate();
		/**
		* Method yang mengembalikan hasil dari operasi binary
		* Menghitung dua buah boolean 
		* @param a sebuah boolean
		* @param b sebuah boolean
		* @return hasil perhitungan binary
		*/
		bool binaryOpt(std::string, bool, bool);
		/**
		* Method yang mengembalikan hasil dari operasi unary
		* Menghitung satu buah boolean 
		* @param a sebuah boolean
		* @return bilangan boolean sebuah hasil 
		*/
		bool unaryOpt(std::string, bool);
		/**
		* Method yang mengembalikan boolean
		* Mengubah string menjadi boolean 
		* @param str sebuah string
		* @return bilangan boolean hasil convert
		*/
		bool toBool(std::string);
		/**
		* Method yang mengembalikan string
		* Mengubah bool menjadi string
		* @param bil sebuah bool
		* @return the string
		*/
		std::string toString(bool);
	
	private :
		/* ABS protected method implementation */
		/**
		* fungsi protected yang menghasilkan berat operator 
		* @param oprt yang berupa string
		* @return integer yang berupa bobot
		*/
		int getOperatorWeight(std::string);
};

#endif
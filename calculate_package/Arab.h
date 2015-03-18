/* Author : Rahman Adianto */
/* NIM		: 13513006 */

#ifndef _ARAB_H
#define _ARAB_H

#include "Aritmatik.h"
#include "Bilangan.h"
#include "ArabExp.h"
/**
* Arab class. menangani ekspresi yang berupa bilangan arab, turunan dari kelas Aritmatik dan Mengimplementasi interface dari Bilangan.
*/
class Arab : public Aritmatik, public Bilangan {
	public :
		/* ctor, dtor, cctor, copy assignment */
		/**
		* A constructor.
		* Membuat Objek Aritmatik
		*/
		Arab();
		/**
		* A constructor.
		* Membuat Objek Aritmatik
		* @param eks sebuah string
		* @param mode a yang berupa integer
		*/
		Arab(std::string, int);
		/**
		* A destructor.
		*/
		~Arab();
		//Arab(const Arab&);
		//Arab& operator=(const Arab&);

		/* ABS method implementation */
		/**
		* Method yang mengembalikan hasil perhitungan
		* Menghitung string postfix dengan stack.
		* @see binaryOpt
		* @see unaryOpt
		* @see toInt
		* @return hasil perhitungan
		*/
		int calculate();
		/**
		* Method yang mengembalikan hasil dari operasi binary
		* Menghitung dua buah integer 
		* @param a sebuah integer
		* @param b sebuah integer
		* @return hasil perhitungan binary
		*/
		int binaryOpt(std::string, int, int);
		/**
		* Method yang mengembalikan hasil dari operasi unary
		* Menghitung satu buah integer 
		* @param a sebuah integer
		* @return bilangan integer sebuah hasil 
		*/
		int unaryOpt(std::string, int);
		/**
		* Method yang mengembalikan integet
		* Mengubah string menjadi Integer 
		* @param str sebuah string
		* @return bilangan integer hasil convert
		*/
		int toInt(std::string);
		/**
		* Method yang mengembalikan string
		* Mengubah Integer menjadi string
		* @param bil sebuah integer
		* @return the string
		*/
		std::string toString(int);
};

#endif
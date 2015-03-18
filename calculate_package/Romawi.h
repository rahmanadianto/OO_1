/* Author : Rahman Adianto */

#ifndef _ROMAWI_H
#define _ROMAWI_H

#include "Aritmatik.h"
#include "Bilangan.h"
#include "RomawiExp.h"

class Romawi : public Aritmatik, public Bilangan {
	public :
		/* ctor, dtor, cctor, copy assignment */
		/**
		* A constructor.
		* Membuat Objek Aritmatik
		*/
		Romawi();
		/**
		* A constructor.
		* Membuat Objek Aritmatik
		* @param eks sebuah string
		* @param mode a yang berupa integer
		*/
		Romawi(std::string, int);
		/**
		* A destructor.
		*/
		~Romawi();
		//Romawi(const Romawi&);
		//Romawi& operator=(const Romawi&);

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

	private :
		/**
		* Private Method yang mengembalikan integer
		* Mengubah char menjadi Integer 
		* @param chr sebuah char
		* @return bilangan integer hasil convert
		*/
		int intRomawi(char); 
};

#endif
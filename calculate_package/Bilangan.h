#ifndef _BILANGAN_H
#define _BILANGAN_H

#include <string>

const int DIVIDE_BY_ZERO = 0;
const int NEGATIVE_VALUE = 1;
const int LARGE_NUMBER = 2;
const int VALUE_ZERO = 3;

class Bilangan {
	public :
		/**
		* A pure virtual member.
		* @return hasil kalkulasi seluruh string
		*/
		virtual int calculate() = 0;
		/**
		* A pure virtual member 
		* @param a1 angka1.
		* @param a2 angka2.
		* @param str stringnya.
		* @return hasil kalkulasi operasi biner
		*/
		virtual int binaryOpt(std::string, int, int) = 0;
		/**
		* A pure virtual member 
		* @param a1 angka1.
		* @param str stringnya.
		* @return hasil kalkulasi operasi unary
		*/
		virtual int unaryOpt(std::string, int) = 0;
		/**
		* A pure virtual member.
		* @param str stringnya.
		* @return hasil konversi dari string ke integer
		*/
		virtual int toInt(std::string) = 0;
		/**
		* A pure virtual member.
		* @param a angka1.
		* @return hasil konversi dari int ke string
		*/
		virtual std::string toString(int) = 0;
};

#endif
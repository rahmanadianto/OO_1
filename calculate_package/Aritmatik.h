/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#ifndef _ARITMATIK_H
#define _ARITMATIK_H

#include "Ekspresi.h"
/**
* Aritmatik class. menangani ekspresi yang menggunakan operator aritmatik, turunan dari kelas Ekspresi.
*/
class Aritmatik : public Ekspresi {
	public :
		/* ctor, dtor, cctor, copy assignment */
		/**
		* A constructor.
		* Membuat Objek Ekspresi
		*/
		Aritmatik();
		/**
		* A constructor.
		* Membuat Objek Aritmatik dengan ekspresi
		* @param eks sebuah string
		* @param mode yang berupa integer
		*/
		Aritmatik(std::string, int);
		/**
		* A destructor.
		*/
		~Aritmatik();
		//Boolean(const Boolean&);
		//Boolean& operator=(const Boolean&);

		/* ABS method implementation */
		/**
		* fungsi yang mengecek apakah string berupa operan
		* @param opr yang berupa operan
		* @return bool yang bernilai true jika string == operan 
		*/
		bool isOperan(std::string);
		/**
		* fungsi yang mengecek apakah string berupa operator
		* @param opr yang berupa operator
		* @return bool yang bernilai true jika string == operator
		*/
		bool isOperator(std::string);
		/**
		* fungsi yang mengecek apakah string high mempunyai prioritas lebih tinggi dari string low
		* @param high yang berupa string
		* @param low yang berupa string
		* @return bool yang bernilai true jika string high > string low
		*/
		bool higherPrecedence(std::string, std::string);

	protected :
		/* ABS protected method implementation */
		/**
		* fungsi protected yang menghasilkan berat operator 
		* @param oprt yang berupa string
		* @return integer yang berupa bobot
		*/
		int getOperatorWeight(std::string);
};

#endif
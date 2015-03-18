/* Author : Rahman Adianto */
/* NIM 		: 13513006 */

#ifndef _EKSPRESI_H
#define _EKSPRESI_H

#include "../controller_package/Setting.h"
#include "../memory_package/stack.h"
#include <sstream>
#include <string>

class Ekspresi {
	public :
		/* ctor, dtor, cctor, copy assignment */
		/**
		* A constructor. ekpresi =""
		* Memnginisialisasi id = Setting::Postfix dengan ctor initilization list
		*/
		Ekspresi();
		/**
		* A constructor. mengisi ekspresi menjadi eks
		* Memnginisialisasi id = mode dengan ctor initilization list
		* @param mode sebagai int
		* @param eks sebagai string
		*/
		Ekspresi(std::string, int);
		/**
		* A destructor.
		*/
		~Ekspresi();
		//Ekspresi(const Ekspresi&);
		//Ekspresi& operator=(const Ekspresi&);

		/* getter setter */
		/**
		* A getter. mendapatkan ekspresi
		* @return string sebagai ekspresi
		*/
		std::string getEkspresi();
		/**
		* A getter. mendapatkan id
		* @return id , integer
		*/
		int getInitialId();
		/**
		* A setter. menset string dengan eks
		* @param eks
		*/
		void setEkspresi(std::string);

		/* other method */
		/**
		* A pure virtual member.
		* @param string 
		* @return bool yang berupa true jika string adalah operan
		*/
		virtual bool isOperan(std::string) = 0;
		/**
		* A pure virtual member.
		* @param string
		* @return bool yang berupa true jika string adalah operator
		*/
		virtual bool isOperator(std::string) = 0;
		/**
		* A pure virtual member.
		* @param high yang berupa string 
		* @param low yang berupa string
		* @return bool yang berupa true jika bobot high > bobot low
		*/
		virtual bool higherPrecedence(std::string, std::string) = 0;

	protected :
		/* attribute */
		/**
		*  protected variable yang berupa string
		*/
		std::string ekspresi;
		/**
		*  protected variable yang berupa konstanta integer
		*/
		const int id;

		/* protected method */
		/**
		* a protected  pure virtual member 
		* @param oprt yang berupa string
		* @return integer yang berupa bobot
		*/
		virtual int getOperatorWeight(std::string) = 0;
		/**
		*  protected method 
		* mengubah dari prefix menjadi postfix 
		*/
		void PrefixToPostfix();
		/**
		*  protected method 
		* mengubah dari infix menjadi postfix 
		*/
		void InfixToPostfix();
};

#endif
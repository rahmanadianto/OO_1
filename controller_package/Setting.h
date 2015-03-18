/* Author : Gazandi Cahyadarma */
/* NIM 		: 13513078 */

#ifndef _SETTING_H
#define _SETTING_H

#include <string>
/**
* Setting class. menangani command set dan mode kalkulator
*/
class Setting{
	public	:
		/* mode Ekspresi */
		/**
		* static const 
		* nilai mode PREFIX
		*/
		static const int PREFIX = 1;
		/**
		* static const 
		* nilai mode INFIX
		*/
		static const int INFIX = 2;
		/**
		* static const 
		* nilai mode POSTFIX
		*/
		static const int POSTFIX = 3;

		/* mode Bilangan */
		/**
		* static const 
		* nilai mode ARAB
		*/
		static const int ARAB = 1;
		/**
		* static const 
		* nilai mode ROMAWI
		*/
		static const int ROMAWI = 2;
		/**
		* static const 
		* nilai mode BOOLEAN
		*/
		static const int BOOLEAN = 3;

		/* mode Operator */
		/**
		* static const 
		* nilai mode ARITMATIK
		*/
		static const int ARITMATIK = 1;
		/**
		* static const 
		* nilai mode LOGIKA
		*/
		static const int LOGIKA = 2;

		/* getter setter */
		/**
		* static function, getter
		* mendapatkan modeOperator
		*/
		static int getModeOperator();
		/**
		* static function, getter
		* mendapatkan modeEkspresi
		*/
		static int getModeEkspresi();
		/**
		* static function, getter
		* mendapatkan modeBilangan
		*/
		static int getModeBilangan();
		/**
		* static function, setter
		* menset modeEkspresi
		*/
		static void setModeEkspresi();
		/**
		* static function, setter
		* menset modeOperator
		*/
		static void setModeOperator();
		/**
		* static function, setter
		* menset modeBilangan
		*/
		static void setModeBilangan();

		/* othe method *//**
		* static void
		* menampilkan status sukses
		*/
		static void setSuccess();
		/**
		* static function
		* @param a 
		* @return string untuk penampilan status modeOperator
		*/
		static std::string OprtToString(int);
		/**
		* static function
		* @param a 
		* @return string untuk penampilan status modeEkspresi
		*/
		static std::string EksToString(int);
		/**
		* static function
		* @param a 
		* @return string untuk penampilan status modeBilangan
		*/
		static std::string BilToString(int);

	private :
		/**
		* static attribute
		* mode untuk Operator
		*/	
		static int modeOperator;
		/**
		* static attribute
		* mode untuk Ekspresi
		*/
		static int modeEkspresi;
		/**
		* static attribute
		* mode untuk Bilangan
		*/
		static int modeBilangan; 
};

#endif

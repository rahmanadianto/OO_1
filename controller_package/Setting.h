#ifndef _SETTING_H
#define _SETTING_H

#include <string>

class Setting{
	public	:
		/* mode Ekspresi */
		static const int PREFIX = 1;
		static const int INFIX = 2;
		static const int POSTFIX = 3;

		/* mode Bilangan */
		static const int ARAB = 1;
		static const int ROMAWI = 2;
		static const int BOOLEAN = 3;

		/* mode Operator */
		static const int ARITMATIK = 1;
		static const int LOGIKA = 2;

		/* getter setter */
		static int getModeOperator();
		static int getModeEkspresi();
		static int getModeBilangan();
		static void setModeEkspresi();
		static void setModeOperator();
		static void setModeBilangan();

		/* othe method */
		static void setSuccess();
		static std::string OprtToString(int);
		static std::string EksToString(int);
		static std::string BilToString(int);

	private :	
		static int modeOperator;
		static int modeEkspresi;
		static int modeBilangan; 
};

#endif

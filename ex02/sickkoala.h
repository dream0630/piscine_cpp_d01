#ifndef _SICKKOALA_
#define _SICKKOALA_

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>

class SickKoala
{
	std::string	name;
	public:
		SickKoala(std::string name);
		~SickKoala();
		void poke();
		bool takeDrug(std::string str);
		void overDrive(std::string str);
};

#endif

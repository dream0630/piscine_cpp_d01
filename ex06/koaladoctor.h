#ifndef _KOALADOCTOR_
#define _KOALADOCTOR_

#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <algorithm>
#include "sickkoala.h"

class KoalaDoctor{
	std::string name;

	public:
		bool work;
		KoalaDoctor(std::string name);
		~KoalaDoctor();
		void diagnose(SickKoala *SickKoala);
		void timeCheck();
		std::string getName();
};

#endif

#ifndef _SICKKOALALIST_
#define _SICKKOALALIST_

#include <iostream>
#include "sickkoala.h"

class SickKoalaList {
public:
	SickKoala *koala;
	SickKoalaList *next;

	SickKoalaList(SickKoala*);
	bool isEnd();
	void append(SickKoalaList*);
	SickKoala *getFromName(std::string);
	SickKoalaList *remove(SickKoalaList*);
	SickKoalaList *removeFromName(std::string);
	void dump();
	SickKoala *getContent();
	SickKoalaList *getNext();
};

#endif

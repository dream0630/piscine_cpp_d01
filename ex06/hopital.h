#ifndef _HOPITAL_
#define _HOPITAL_

#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"
#include "sickkoalalist.h"
#include "koalanurselist.h"
#include "koaladoctorlist.h"

class Hospital {
public:
	KoalaNurseList *nurseList;
	KoalaDoctorList *doctorList;
	SickKoalaList *sickKoalaList;

	void addDoctor(KoalaDoctorList*);
	void addNurse(KoalaNurseList*);
	void addSick(SickKoalaList*);
	bool areDocAtWork();
	void run();
};

#endif

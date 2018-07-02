#ifndef _KOALADOCTORLIST_
#define _KOALADOCTORLIST_

#include <iostream>
#include "koaladoctor.h"

class KoalaDoctorList {
public:
    KoalaDoctor *doctor;
    KoalaDoctorList *next;

    KoalaDoctorList(KoalaDoctor*);
    bool isEnd();
    void append(KoalaDoctorList*);
    KoalaDoctor *getFromName(std::string);
    KoalaDoctorList *remove(KoalaDoctorList*);
    KoalaDoctorList *removeFromName(std::string);
    void dump();
};

#endif

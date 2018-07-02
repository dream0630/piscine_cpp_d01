#ifndef _KOALANURSELIST_
#define _KOALANURSELIST_

#include <iostream>
#include "koalanurse.h"

class KoalaNurseList {
public:
    KoalaNurse *nurse;
    KoalaNurseList *next;

    KoalaNurseList(KoalaNurse*);
    bool isEnd();
    void append(KoalaNurseList*);
    KoalaNurse* getFromId(int);
    KoalaNurseList *remove(KoalaNurseList*);
    KoalaNurseList *removeFromID(int);
    void dump();
};

#endif

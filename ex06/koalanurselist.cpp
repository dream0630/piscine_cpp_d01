#include "iostream"
#include "koalanurselist.h"
#include "koalanurse.h"

KoalaNurseList ::KoalaNurseList(KoalaNurse *nurse)
{
	this->nurse = nurse;
	this->next = NULL;
}

bool KoalaNurseList::isEnd()
{
	if (this->next)
		return (false);
	return (true);
}

void KoalaNurseList::append(KoalaNurseList *nurse)
{
	(void)nurse;
	if (this->isEnd()) {
		this->next = next;
	} else {
		this->next->append(next);
	}
}

KoalaNurse *KoalaNurseList::getFromId(int id)
{
	if (this->nurse && this->nurse->getID() == id) 
	{
		return (this->nurse);
	} 
	else if (this->next) 
	{
		return (this->next->getFromId(id));
	}
	return (NULL);
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *remove)
{
	KoalaNurseList *previous = NULL;
	KoalaNurseList *current = this;

	for (int i = 0; current ; ++i) {
		if (current == remove) {
			if (previous) {
				previous->next = current->next;
				current->next = NULL;
				return (this);
			} else {
				previous = this->next;
				current->next = NULL;
				return (previous);
			}
			previous = current;
			current = current->next;
		}
	}
	return (NULL);
}

KoalaNurseList *KoalaNurseList::removeFromID(int id)
{
	KoalaNurseList *previous = NULL;
	KoalaNurseList *current = this;

	for (int i = 0; current ; ++i) {
		if (current && current->nurse && current->nurse->getID() == id) {
			if (previous) {
				previous->next = current->next;
				current->next = NULL;
				return (this);
			} else {
				previous = this->next;
				current->next = NULL;
				return (previous);
			}
			previous = current;
			current = current->next;
		}
	}
	return (NULL);
}

void KoalaNurseList::dump()
{
	std::cout << "Liste des infirmieres : ";
	KoalaNurseList *current = this;
	while (current) {
		if (this->nurse) {
			std::cout << current->nurse->getID();
		}
		else {
			std::cout << "NULL";
		}
		if (current->next) {
			std::cout << ", ";
		}
		else {
			std::cout << "." << std::endl;
		}
		current = current->next;
	}
}

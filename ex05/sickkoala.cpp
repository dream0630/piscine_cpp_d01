#include "sickkoala.h"

SickKoala::SickKoala(std::string name)
{
	this->name = name;
}

SickKoala::~SickKoala()
{
	std::cout << "Mr."<< this->name << ": Kreooogg !! Je suis gueriiii !" << std::endl;
	this->name.empty();
}

void SickKoala::poke()
{
	std::cout << "Mr."<< this->name << ": Gooeeeeerrk !! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
	if (str.compare("Buronzand") == 0)
	{
		std::cout << "Mr."<< this->name << ": Et la fatigue a fait son temps !" << std::endl;
		return true;
	}
	std::transform(str.begin(), str.end(), str.begin(), tolower);
	if (str.compare("mars") == 0)
	{
		std::cout << "Mr."<< this->name << ": Mars, et ca Kreog !" << std::endl;
		return true;
	}
	std::cout << "Mr."<< this->name << ": Goerk !" << std::endl;
	return false;
}

void SickKoala::overDrive(std::string str)
{
	std::size_t pos;

	pos = 0;
	while ((pos = str.find("Kreog !", pos)) != std::string::npos)
		str.replace(pos, 7, "1337 !");

	std::cout << "Mr."<< this->name << ": " << str << std::endl;
}

std::string SickKoala::getName()
{
	return (this->name);
}

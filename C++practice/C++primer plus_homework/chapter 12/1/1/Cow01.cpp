#include "cow01.h"
#include <iostream>
#include <string>

using namespace std;
Cow::Cow()
{
	name[0] = '\0';
	hobby = nullptr;
	weight = 0;
}

Cow::Cow(const char *nm, const char *ho, double wt)
{
	strcpy(name, nm);
	hobby = new char[strlen(ho)];
	strcpy(hobby, ho);
	weight = wt;
}

Cow::~Cow()
{
	delete[]hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	strcpy(this->name, c.name);
	this->hobby = new char[strlen(c.hobby)];
	strcpy(this->hobby, c.hobby);
	this->weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	cout << "name: " << name << endl;
	cout << "hobby: " << *hobby << endl;
	cout << "weight: " << weight << endl;
}
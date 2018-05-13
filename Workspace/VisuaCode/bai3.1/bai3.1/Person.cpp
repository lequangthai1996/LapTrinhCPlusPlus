#include "Person.h"
Person::Person(const char name[], const char address[], const char department[])
{
	strncpy_s(this->name, name, strlen(name));
	strncpy_s(this->address, address, strlen(address));
	strncpy_s(this->department, department, strlen(department));
}

Person::~Person()
{
}

char * Person::getName()
{
	return name;
}

char * Person::getAddress()
{
	return address;
}

char * Person::getDepartment()
{
	return department;
}

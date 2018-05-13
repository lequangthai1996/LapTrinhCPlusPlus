#include "Student.h"

Student::Student(const char name[], const char address[], const char department[], const char className[]): Person(name, address, department)
{
	strncpy_s(this->nameClass, nameClass, strlen(nameClass));
}

Student::~Student()
{
}

#ifndef  PERSON_H
#define PERSON_H
#include <iostream>
#include <string>
class Person
{
protected:
	char name[50];
	char address[50];
	char department[50];
public:
	Person(const char name[], const char address[] = "", const char department[] = "");
	virtual ~Person();
	char* getName();
	char* getAddress();
	char* getDepartment();
	void print();
};
#endif // ! PERSON_H

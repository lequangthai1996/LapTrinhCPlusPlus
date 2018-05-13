#ifndef  TEACHER_H
#define TEACHER_H
#include "Person.h"
class Student: public Person
{
private:
	char nameClass[50];
public:
	Student(const char name[] = "", const char address[] = "", const char department[] = "", const char className[] = "");
	virtual ~Student();

};
#endif // ! TEACHER_H

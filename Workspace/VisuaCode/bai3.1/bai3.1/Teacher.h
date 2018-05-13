#ifndef  STUDENT_H
#define STUDENT_H
#include "Person.h"
class Teacher : public Person
{
private:
	char rank[50];
public:
	Teacher(const char name[] = "", const char address[] = "", const char department[] = "", const char rank[] = "");
	virtual ~Teacher();

};
#endif // ! STUDENT_H

#ifndef  CLASS_H
#define CLASS_H
#include "Student.h"
#include "Teacher.h"
#include <stdio.h>
class Class
{
private:
	char nameClass[30];
	Student **studentList;
	int numofStudents;
	Teacher *advisor;
public:
	Class(const char nameClass[] = 0, int num = 0);
	virtual ~Class();
	void inputList();
	void printList();
;};
#endif // ! CLASS_H

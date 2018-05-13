#include "Teacher.h"

Teacher::Teacher(const char name[], const char address[], const char department[], const char rank[]) : Person(name, address, department)
{
	strncpy_s(this->rank, rank, 50);
}

Teacher::~Teacher()
{
}

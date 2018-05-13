#ifndef VECTOR_H
#define VECTOR_H
#include <iostream>
#include <math.h>
using namespace std;
class VECTOR
{
private:
	int dimensions;
	double *elements;
public:
	VECTOR(int = 0);
	virtual ~VECTOR();
	VECTOR(const VECTOR &v);
	VECTOR& operator=(const VECTOR &v);
	VECTOR operator+(const VECTOR &v);
	friend VECTOR operator-(const VECTOR &a, const VECTOR &b);
	friend double operator*(const VECTOR &a, const VECTOR &b);
	friend ostream& operator<<(ostream &out, const VECTOR &v);
	friend istream& operator>> (istream &in,  VECTOR &v);
	double operator[](int index);
	double operator^(const VECTOR &v);
};
#endif // !VECTOR_H


#ifndef VECTOR_H
#define VECTOR_H

#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
#include <stdio.h>
using namespace std;

class VECTOR
{
public:
	VECTOR(int = 0);
	virtual ~VECTOR();
	VECTOR(const VECTOR &);

	VECTOR operator + (const VECTOR &);
	friend VECTOR operator - (const VECTOR &, const VECTOR &);
	VECTOR& operator = (const VECTOR &);
	friend double operator * (const VECTOR &, const VECTOR &);
	double& operator [] (int);
	double operator ^ (const VECTOR &);

	friend ostream& operator << (ostream &, const VECTOR &);
	friend istream& operator >> (istream &, VECTOR &);

protected:

private:
	int dimensions;
	double *components;
};

template <typename T>
bool checkInput(T &x) {
	string cStr;
	string str;
	stringstream ss;

	fflush(stdin);
	cin >> str;

	ss.str("");
	ss.clear();

	ss << str;
	ss >> x;

	ss.str("");
	ss.clear();

	ss << x;
	cStr = ss.str();

	return (str.compare(cStr) == 0);
}

#endif // VECTOR_H

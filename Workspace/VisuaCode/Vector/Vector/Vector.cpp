#include "Vector.h"
VECTOR::VECTOR(int dimensions)
{
	elements = new double[dimensions];
	this->dimensions = dimensions;
	for (int i = 0; i < dimensions; i++) this->elements[i]= 0;
}
VECTOR::VECTOR(const VECTOR &v)
{
	this->dimensions = v.dimensions;
	this->elements = new double[dimensions];
	for (int i = 0; i < v.dimensions; i++)
	{
		this->elements[i] = v.elements[i];
	}
}
VECTOR::~VECTOR()
{
	delete[] elements;
	//cout << "delete all element of object";
}
VECTOR& VECTOR::operator=(const VECTOR &v)
{
	if (this->dimensions == v.dimensions)
	{
		for (int i = 0; i < dimensions; i++) this->elements[i] = v.elements[i];
	}
	return *this;
}
VECTOR VECTOR::operator+(const VECTOR &v)
{
	if (this->dimensions = v.dimensions)
	{
		VECTOR t(dimensions);
		for (int i = 0; i < dimensions; i++)
		{
			t.elements[i] = this->elements[i] + v.elements[i];
		}
		return t;
		
	}	
}
VECTOR operator-(const VECTOR &a, const VECTOR &b)
{
	if (a.dimensions == b.dimensions)
	{
		VECTOR t(a.dimensions);
		for (int i = 0; i < a.dimensions; i++)
		{
			t.elements[i] = a.elements[i] - b.elements[i];
		}
		return t;
	}
}
double operator*(const VECTOR &a, const VECTOR &b)
{
	double sum = 0;
	if (a.dimensions == b.dimensions)
	{
		for (int i = 0; i < a.dimensions; i++)
		{
			sum += a.elements[i] * b.elements[i];
		}
		return sum;
	}
}
double VECTOR::operator[](int index)
{
	return this->elements[index];
}
double  VECTOR::operator^(const VECTOR &v)
{
	double tich = 0;
	if (this->dimensions == v.dimensions)
	{
		for (int i = 0; i < dimensions; i++)
		{
			tich += (v.elements[i] - elements[i])*(v.elements[i] - elements[i]);
		}
		return sqrt(tich);
	}
}
ostream& operator<<(ostream &out, const VECTOR &v)
{
	out << "Xuat vector: " << endl;
	for (int i = 0; i < v.dimensions; i++)
	{		
		out << v.elements[i];
		if (i !=( v.dimensions - 1) ) out << ",";
	}
	return out;
}
istream& operator>> (istream &in, VECTOR &v)
{
	cout << "Nhap Vector:" << endl;
	for (int i = 0; i < v.dimensions; i++)
	{
		cout << "Nhap gia tri phan tu thu " << i << ":";
		cin >> v.elements[i];
	}
	return in;
}
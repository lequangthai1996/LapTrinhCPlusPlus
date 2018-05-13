#include "Class.h"
#include <iostream>
using namespace std;
Class::Class(const char nameClass[], int num)
{
	this->numofStudents = num;
	strncpy_s(this->nameClass, nameClass, strlen(nameClass));
	studentList = new Student*[numofStudents];
}
Class::~Class()
{

}
void Class::inputList()
{
	char name[50];
	char address[50];
	char department[50];	
	char rank[50];
		
		cout << "Nhap thong tin gvcn: " << endl;
		cout << "Nhap ten gv: ";
		fflush(stdin);
		cin.getline(name, 50, '\n');
		cout << "Nhap dia chi gvcn: ";
		fflush(stdin);
		cin.getline(address, 50, '\n');
		cout << "Nhap nganh day cua giao vien:  ";
		fflush(stdin);
		cin.getline(department, 50, '\n');
		cout << "Nhap rank cua gvcn: ";
		fflush(stdin);
		cin.getline(rank, 50, '\n');
		this->advisor = new Teacher(name, address, department, rank);
	
		
	for (int i = 0; i < this->numofStudents; i++)
	{
		
		cout << endl << "Nhap tt sinh vien thu " << (i + 1) << ":";
		fflush(stdin);
		cin.getline(name, 50, '\n');
		cout << "Nhap dia chi sv: ";
		fflush(stdin);
		cin.getline(address, 50, '\n');
		cout << "Nhap nganh hoc cua sv: ";
		fflush(stdin);
		cin.getline(department, 50, '\n');
		studentList[i] = new Student(name, address, department, this->nameClass);
		
	}
}
void Class::printList()
{
	cout << endl << "Ten lop: " << this->nameClass;
	cout << endl << "\nTong sv cua lop: " << this->numofStudents;
	cout << endl << "\nthong tin gvcn: ";
	cout << "\n\tTen cua gv: " << advisor->getName();
	cout << "\n\tDia chi gvcn: " << advisor->getAddress();
	cout << "\n\tNganh day cua gvcn:" << advisor->getDepartment();
	for (int i = 0; i < numofStudents; i++)
	{
		cout << "\nThong tin sv thu " <<(i + 1) << ": ";
		cout << "\n\tTen sv: " << studentList[i]->getName();
		cout << "\n\tDia chi sv: " << studentList[i]->getAddress();
		cout << "\n\tNganh hoc cua hs: " << studentList[i]->getDepartment();
	}
}
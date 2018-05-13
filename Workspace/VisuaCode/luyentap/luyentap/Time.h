#ifndef TIME_H
#define TIME_H
#include <iostream>
using namespace std;
class Time {
public:
	Time();
	void setTime(int h, int m, int s);
	void printTime();
private:
	int hour;
	int minute;
	int second;
};
#endif

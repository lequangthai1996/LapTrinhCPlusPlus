#include "Time.h"
Time::Time() 
{
	hour = minute = second = 0;
}
void Time::setTime(int h, int m, int s) 
{
	this->hour = (h >= 0 && h < 24) ? h : 0;
	this->minute = (m >= 0 && m < 60) ? m : 0;
	this->second = (s >= 0 && s < 60) ? s : 0;
}
void Time::printTime()
{
	cout << (this->hour < 10 ? "0" : "") << this->hour << ":";
	cout << (this->minute < 10 ? "0" : "") << this->minute << ":";
	cout << (this->second < 10 ? "0" : "") << this->second << endl;
}
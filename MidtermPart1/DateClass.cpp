#include "DateClass.h"
#include <iostream>
#include <string>
using namespace std;

DateClass::DateClass(int month, int day, int year) {
	this->Month = month;
	this->Day = day;
	this->Year = year;
}
string DateClass::MonthName() {
	string m = "";
	if (this->Month == 1) {
		return "January";
	}
	else if (this->Month == 2) {
		return "February";
	}
	else if (this->Month == 3) {
		return "March";
	}
	else if (this->Month == 4) {
		return"April";
	}
	else if (this->Month == 5) {
		return"May";
	}
	else if (this->Month == 6) {
		return"June";
	}
	else if (this->Month == 7) {
		return"July";
	}
	else if (this->Month == 8) {
		return"August";
	}
	else if (this->Month == 9) {
		return"September";
	}
	else if (this->Month == 10) {
		return"October";
	}
	else if (this->Month == 11) {
		return"November";
	}
	else if (this->Month == 12) {
		return"December";
	}
	return m;
}
void DateClass::PrintMonth()
{
	cout << " You Entered: " << this->MonthName() << " " << this->Day << " , " << this->Year << endl;
}
	

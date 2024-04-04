#include <iostream>
#include "DateClass.h"
using namespace std;

int main()
{
	cout << " Date Format App " << endl;
	cout << "=================================" << endl;
	int month;
	int day;
	int year;

	cout << " Enter the month as Integer ===> ";
	cin >> month;

	cout << " Enter the day as Integer ===> ";
	cin >> day;

	cout << " Enter the year as Integer ===> ";
	cin >> year;

	DateClass joce (month, day, year);
	joce.PrintMonth();
}
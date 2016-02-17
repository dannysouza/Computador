#include <iostream>
#include "Date.h"

using namespace std;

Date::Date(int day, int month, int year)
{
	this -> day = checkDay(day); 
	this -> month = month;
	this -> year = year;
}

int Date::checkDay( int day ) const
{
	static const int daysPerMounth[13] = {0, 31, 28, 31, 30, 30, 31, 31, 30, 31, 30, 31};
	if(day>0 && day <=daysPerMounth[mounth])
		return day;
		
	if(mounth==2 && day == 29 && (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0) ) ) // test bissextile year
		return day;
		
	cout << "\n\n Invalid day";
	return 1;
}

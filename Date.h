#pragma once
#include <iostream>
using namespace std;


class Date{
private:
	// think about the private data members...
	int Day;
	int Month;
	int Year;
public:
	// provide definitions of following functions...
	Date(); // default constructor
	Date(int day, int month, int year); // parameterized constructor that initializes all data members
		Date(Date& d); // copy constructor
		//implement mutators for all private data members
		//implement accessors for all private data members

		void setDay(int D)
		{
			Day = D;
		}
		int getDay()
		{
			return Day;
		}

		void setMonth(int M)
		{
			if (M >= 1 && M <= 12)
				Month = M;
			else
				Month = 1;
		}
		int getMonth()
		{
			return Month;
		}

		void setYear(int Y)
		{
			Year = Y;
		}
		int getYear()
		{
			return Year;
		}

		//you have to implement the following functions
	void displayDate();
	void nextDay();
	~Date();
};

Date::Date()
{
	Day = 0;
	Month = 0;
	Year = 0;
}

Date::Date(int day, int month, int year)
{

	Day = day;
	if (month > 12 || month < 1)
	{
		Month = 1;
	}
	else
	{
		Month = month;
	}

	Year = year;
}

Date::Date(Date& d)
{
	Day = d.Day;
	Month = d.Month;
	Year = d.Year;
}

void Date::displayDate()
{
	cout << getMonth() << "/" << getDay() << "/" << getYear() << endl;
}

void Date::nextDay()
{
		Day++;
		

		//jan-----july   1(31),2(30),31,30,31,30,31
		//aug .... dec   31,30,31,30,31

		if (Day == 31) // for 3o days month 
		{
			Month++;
			if (Month == 13)
			{
				Year++;
				Month = 1;
				Day = 1;
			}
		}

		if (Month > 0 && Month < 13)
		{
			if (Month == 2)
			{
				if (Year % 4 == 0 || Year % 100 == 0 || Year % 400 == 0)
				{
					if (Day > 29)
					{
						Month++;
						Day = 1;
					}
				}
				else if (Year % 4 != 0 || Year % 100 != 0 || Year % 400 != 0)
				{
					if (Day > 28)
					{
						Month++;
						Day = 1;
					}
				}
			}

			if (Month == 4 || Month == 6 || Month == 9 || Month == 11)//even
			{
				if (Day > 30)
				{
					//Day = 1;
					Month++;
					Day = 1;
				}
			}

			if (Month == 1 ||  Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10)//odd
			{
				if (Day > 31)
				{
					Month++;
					Day = 1;
				}
			}

			if (Month == 12)
			{
				if (Day > 31)
				{
					Year++;
					Month = 1;
					Day = 1;
				}
			}


			//even


			/*
			if (Day == 31) // for 3o days month 
			{
				Month++;
				if (Month == 13)
				{
					Year++;
					Month = 1;
					Day = 1;
				}
			}
			*/

		}
}

Date::~Date()
{
	cout << "Destructor Called" << endl;
}
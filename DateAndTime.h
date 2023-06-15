#pragma once
#include <iostream>
//#include "Date.h"
using namespace std;

class DateAndTime {
private:
	// think about the private data members...
	int Second;
	int Minute;
	int Hour;
	int Day;
	int Month;
	int Year;
	char Meridiem;
public:
	// provide definitions of following functions...
	DateAndTime(); // default constructor
	DateAndTime(int day, int month, int year, int second, int minute, int hour, char meridiem); // parameterized constructor that initializes all data members
	DateAndTime(DateAndTime& d); // copy constructor
		//implement mutators for all private data members
		//implement accessors for all private data members
	void setSec(int s)
	{
		Second = s;
	}
	int getSec()
	{
		return Second;
	}

	void setMin(int m)
	{
		Minute = m;
	}
	int getMin()
	{
		return Minute;
	}

	void setHour(int h)
	{
		Hour = h;
	}
	int getHour()
	{
		return Hour;
	}

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

	void setMeridiem(char mer)
	{
		Meridiem = mer;
	}
	char getMeridiem()
	{
		return Meridiem;
	}


		//you have to implement the following functions
	void displayDateAndTime();
	void nextDay();
	void tick();
	~DateAndTime();
};

DateAndTime::DateAndTime()
{
	Second = 0;
	Minute = 0;
	Hour = 0;
	Day = 0;
	Month = 0;
	Year = 0;
	Meridiem = '/0';
}

DateAndTime::DateAndTime(int day, int month, int year, int second, int minute, int hour, char meridiem)
{
	Day = day;
	Month = month;
	Year = year;
	Second = second;
	Minute = minute;
	Hour = hour;
	Meridiem = meridiem;
}

DateAndTime::DateAndTime(DateAndTime& d)
{
	Second = d.Second;
	Minute = d.Minute;
	Hour = d.Hour;
	Day = d.Day;
	Month = d.Month;
	Year = d.Year;
	Meridiem = d.Meridiem;
}

void DateAndTime::displayDateAndTime()
{
	cout << getDay() << "/" << getMonth() << "/" << getYear() << " " << getSec() << ":" << getMin() << ":" << getHour() << " " << getMeridiem() << endl;
}

void DateAndTime::nextDay()
{
	Day++;
	//Meridiem = 'a';
	//Hour = 0;
	//Minute = 0;
	//Second = 0;
	//Day++;


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

		if (Month == 1 || Month == 3 || Month == 5 || Month == 7 || Month == 8 || Month == 10)//odd
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

	}
}

void DateAndTime::tick()
{
	if ((Hour == 0) && (Second > -1 && Second < 59) && (Minute == 0))
	{
		Hour = 0;
		Minute = 0;
		Second++;
	}
	if ((Hour == 0) && (Minute > 0 && Minute < 59) && (Second == 59))
	{
		Hour = 0;
		Minute++;
		Second = 0;
	}
	if ((Hour >= 1 && Hour < 11) && (Second == 59) && (Minute == 59))
	{
		Hour = Hour + 1;
		Second = 0;
		Minute = 0;
	}
	if ((Hour == 11) && (Meridiem == 'p') && (Second > -1 && Second < 60) && (Minute < 60 && Minute >0))
	{
		Meridiem = 'a';
		Hour = 12;
		Second = 0;
		Minute = 0;
		nextDay();
	}
	if ((Hour == 11) && (Meridiem == 'a') && (Second > -1 && Second < 60) && (Minute > 0 && Minute < 60))
	{
		Meridiem = 'p';
		Hour = 12;
		Second = 0;
		Minute = 0;
	}
	/*
	Second++;
	if (Second > 59)
	{
		Minute++;
		Second = 0;
		if (Minute > 59)
		{
			Hour++;
			Minute = 0;
			Second = 0;
		}
	}

	if (Hour == 12 && Minute == 59 && Second == 59 && Meridiem == 'p')
	{
		Meridiem = 'a';
		Hour = 0;
		Minute = 0;
		Second = 0;
		nextDay();
	}

	if (Hour == 12 && Minute == 59 && Second == 59 && Meridiem == 'a')
	{
		Meridiem = 'p';
		Hour = 0;
		Minute = 0;
		Second = 0;
		nextDay();
	}
	*/
}

DateAndTime::~DateAndTime()
{
	cout << "Destructor Called" << endl;
}
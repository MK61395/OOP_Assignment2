#pragma once
#include <iostream>
#include "Date.h"
using namespace std;

class Person {
private:
	// think about the private data members...

	string name;
    char gender;
    Date dob;
	int noOfChildren;
public:
	// provide definitions of following functions...
	Person** children = new Person * [3];
	Person();// a default constructor
	Person(string n, char g, int day, int month, int year);// a parametrized constructor
	//implement mutators for all private data members
	//implement accessors for all private data members
	
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}

	void setGender(char g)
	{
		gender = g;
	}
	char getGender()
	{
		return gender;
	}

	void setDOB(Date dofb)
	{
		dob = dofb;
	}
	Date getDOB()
	{
		return dob;
	}

	void setnoOfChildren(int numofC)
	{
		noOfChildren = numofC;
	}
	int getnoOfChildren()
	{
		return noOfChildren;
	}
	
	//you have to implement the following functions
	void displayData(); // prints data members
	int calcAge(); // subtracts the date of birth from current date (can be taken from user) and display age in years
	~Person(); // delete dynamic element
};

Person::Person()
{
	name = "";
	gender = NULL;
	//dob = 0;
	noOfChildren = 0;
}

Person::Person(string n, char g, int day, int month, int year)
{
	name = n;
	gender = g;
	dob.setDay(day);
	dob.setMonth(month);
	dob.setYear(year);
}

void Person::displayData()
{
	cout << name << ", " << gender << ", " << dob.getDay() << ", " << dob.getMonth() << ", " << dob.getYear() << endl;
}

int Person::calcAge()
{
	int current;
	cout << "Enter current year:" << endl;
	cin >> current;
	return (dob.getYear() - current);
}

Person::~Person()
{
	cout << "Destructor Called" << endl;
}



//Family Tree class

class FamilyTree {
private:
	Person* foreFather;
	// the first person of a family
public:
	// provide definitions of following functions...
	FamilyTree(Person* foreFather);// no default constructor as tree always starts from an ancestor
	//implement mutators for all private data members
	//implement accessors for all private data members
	
	void setforefather(Person ff)
	{
		foreFather = &ff;
	}
	Person* getforefather()
	{
		return foreFather;
	}

	//you have to implement the following functions

	void registerChild(Person& p, Person& child); // a child is always registered against a parent. This function will add an element child to the children array in person pand update the total no of children of person accordingly
	Person findYoungestChildOf(Person& p); // a youngest child is the one with lowest age among siblings.This should call calculate age function to get age of each child.For example the youngest child of Robert is Alice as shown in a sample tree below.
	void displayFamilyOf(Person p); // this should only display information about all children of a person p
	Person* FindEldestGrandsonOf(Person* grandfather); // the function should traverse a tree 2 levels down the grandfather to find grandsons.The eldest among all is the one with greatest age. For example, the eldest grandson of Mark is Elexender as shown in a sample tree below.
	void displayTree(Person* p); // the function should traverse the whole tree recursively starting from where person p exists down till the last level.On each level it should first display the father name followed by children names.No loops are allowed in this function
	~FamilyTree(); // delete dynamic element
};

FamilyTree::FamilyTree(Person* forefather)
{
	forefather = this->foreFather;
}

void FamilyTree::registerChild(Person& p, Person& child)
{
	for (int i = 0; i < p.getnoOfChildren(); i++)
	{
		p.children[i] = new Person;
	}
}

//Person FamilyTree::findYoungestChildOf(Person& p)
//{
	//return this->p;
//}

void FamilyTree::displayFamilyOf(Person p)
{

}

//Person* FamilyTree::FindEldestGrandsonOf(Person* grandfather)
//{
//
//}

void FamilyTree::displayTree(Person* p)
{

}

FamilyTree::~FamilyTree()
{

}
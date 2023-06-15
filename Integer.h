#pragma once
#include <iostream>
#include <cmath>
using namespace std;

class Integer {
	// think about the private data members...
	string str;
	int integer;
public:
	//include all the necessary checks before performing the operations in the functions
	Integer();// a default constructor
	Integer(int);// a parametrized constructor
	Integer(string); // a parametrized constructor
	void set(int);//set value
	int get()const;//get value at (i,j)
	int bitCount(); //Returns the number of one-bits in the 2's complement binary
	int compareTo(Integer); //Compares two Integer objects numerically.
	double doubleValue(); //Returns the value of this Integer as a double.
	float floatValue(); //Returns the value of this Integer as a float.
	Integer plus(const Integer); //adds two Integers and return the result
	Integer minus(const Integer); // subtracts two Integers and return the result
	Integer multiple(const Integer); //multiplies two Integers and return the result
	Integer divide(const Integer); //divides two Integers and return the result
	static int numberOfLeadingZeros(int i); /*Returns the number of zero bits preceding the highest-order
	("leftmost") one-bit in the two's complement binary representation of the specified int value.*/
	static int numberOfTrailingZeros(int i); /*Returns the number of zero bits following the lowest-order
	("rightmost") one-bit in the two's complement binary representation of the specified int value.*/
	static string toBinaryString(int i); //Returns string representation of i
	static string toHexString(int i); //Returns string representation of i in base16
	static string toOctString(int i); //Returns string representation of i in base 8
};

Integer::Integer()
{
	str = "";
	integer = 0;
}

Integer::Integer(int i)
{
	integer = i;
}

Integer::Integer(string s)
{
	str = s;
}

void Integer::set(int in)
{
	integer = in;
}

int Integer::get()const
{
	return integer;
}

int Integer::bitCount()
{
	int dec = 0, i = 0, rem;
	while (integer != 0) {
		rem = integer % 10;
		integer /= 10;
		dec += rem * pow(2, i);
		++i;
	}

}

int Integer::compareTo(Integer)
{
	int a = 0;
}
double Integer::doubleValue()
{

}
float Integer::floatValue()
{

}
Integer Integer::plus(const Integer)
{

}
Integer Integer::minus(const Integer)
{

}
Integer Integer::multiple(const Integer)
{

}
Integer Integer::divide(const Integer)
{

}
int Integer::numberOfLeadingZeros(int i)
{

}
int Integer::numberOfTrailingZeros(int i)
{

}
string Integer::toBinaryString(int i)
{

}
string Integer::toHexString(int i)
{

}
string Integer::toOctString(int i)
{

}
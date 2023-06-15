#pragma once
#include <iostream>
using namespace std;

class Invoice {
private:
	// think about the private data members...
	char* partNumber;
	char* partDescription;
	int quantityI;
	float pricePerI;
public:
	// provide definitions of following functions...
	Invoice();// default constructor
	Invoice(char* partNum, char* partDesc, int quantity, float pricePerItem); // parameterized constructor that initializes all data members
	Invoice(int quantity, float pricePerItem); // parameterized constructor that initializes two data members
	Invoice(Invoice& i); // copy constructor
		//implement mutators for all private data members
		//implement accessors for all private data members
		//you have to implement the following functions as well
		void setpartNum(char pN)
		{
			partNumber = &pN;
		}
		char* getPartNum()
		{
			return partNumber;
		}

		void setpartDesc(char pD)
		{
			partDescription = &pD;
		}
		char* getPartDesc()
		{
			return partDescription;
		}

		void setquantity(int q)
		{
			//if (q >= 0)
				quantityI = q;
			//else
				//quantityI = 0;
		}
		int getQuantity()
		{
			return quantityI;
		}

		void setpricePerItem(float p)
		{
			//if (p >= 0.0)
				pricePerI = p;
			//else
			//	pricePerI = 0.0;
		}
		float getPricePerItem()
		{
			return pricePerI;
		}

	float getInvoiceAmount();
	~Invoice();
};

Invoice::Invoice()
{
	partNumber = NULL;
	partDescription = NULL;
	quantityI = 0;
	pricePerI = 0;


}

Invoice::Invoice(char* partNum, char* partDesc, int quantity, float pricePerItem)
{
	partNumber = partNum;
	partDescription = partDesc;
	if (quantity >= 0)
	{
		quantityI = quantity;
	}
	else
		quantityI = 0;
	if (pricePerItem >= 0.0)
	{
		pricePerI = pricePerItem;
	}
	else
		pricePerI = 0.0;
}

Invoice::Invoice(int quantity, float pricePerItem)
{
	partNumber = NULL;
	partDescription = NULL;
	//quantityI = quantity;
	//pricePerI = pricePerItem;
	if (quantity >= 0)
	{
		quantityI = quantity;
	}
	else
		quantityI = 0;
	if (pricePerItem >= 0.0)
	{
		pricePerI = pricePerItem;
	}
	else
		pricePerI = 0.0;
}

Invoice::Invoice(Invoice& i)
{
	partNumber = i.partNumber;
	partDescription = i.partDescription;
	quantityI = i.quantityI;
	pricePerI = i.pricePerI;
}

float Invoice::getInvoiceAmount()
{
	//if (getQuantity() < 0)
	//{
		//setquantity(0);
	//}
	//if (getPricePerItem() < 0)
	//{
		//setpricePerItem(0.0);
	//}
	return (getQuantity() * getPricePerItem());
}
Invoice::~Invoice()
{
	cout << "Destructor called" << endl;
}







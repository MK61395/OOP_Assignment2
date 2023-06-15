#pragma once
#include <iostream>
using namespace std;

/*
struct SavingAccount {
	char* name;
	float annualInterestRate;
	double savingBalance;
	char* accountNum;

	SavingAccount* savers[100];
	int accountsOpen;


	void OpenCustomerAccount(SavingAccount* savers[], int accountsOpen, char* NameVal, double balance);
	float calculateMonthlyInterest(SavingAccount* saver);
	void modifyInterestRate(SavingAccount* saver, float newValue);
	int SearchCustomer(SavingAccount* savers[], int accountsOpen, char* accountNum);
	bool UpdateAccountBalance(SavingAccount* savers[], int accountsOpen, char* accountNumVal, double balanceVal);
};

void OpenCustomerAccount(SavingAccount* savers[], int& accountsOpen, char* NameVal, double balance)
{
	savers[accountsOpen] = new SavingAccount;
	savers[accountsOpen]->name = NameVal;
	savers[accountsOpen]->savingBalance = balance;
	savers[accountsOpen]->accountNum = new char[5];
	savers[accountsOpen]->accountNum[0] = 'S';
	savers[accountsOpen]->accountNum[1] = 'A';
	savers[accountsOpen]->accountNum[2] = '0' + accountsOpen / 10;
	savers[accountsOpen]->accountNum[3] = '0' + accountsOpen % 10;
	savers[accountsOpen]->accountNum[4] = '\0';
	accountsOpen++;

}

float calculateMonthlyInterest(SavingAccount* saver)
{
	return saver->savingBalance * saver->annualInterestRate / 12;
}

void modifyInterestRate(SavingAccount* saver, float newValue)
{
	saver->annualInterestRate = newValue;
}

int SearchCustomer(SavingAccount* savers[], int accountsOpen, char* accountNum)
{

	int account = 0;
	int temp = 1;
	//cout << "string length is " << strlen(accountNum) << endl;
	for (int i = 1; i < strlen(accountNum); i++) {
		temp *= 10;
	}
	for (int i = 0; i < strlen(accountNum); i++) {
		//cout << "temp is : " << temp << endl;
		account += (accountNum[i] - 48) * temp;
		temp /= 10;
	}
	//cout << "ACCOUNT NUMBER : " << account << endl;
	if (account <= accountsOpen && account > -1) {
		return account;
	}
	else
	{
		return -1;
	}
}

bool UpdateAccountBalance(SavingAccount* savers[], int accountsOpen, char* accountNumVal, double balanceVal)
{
	int num = SearchCustomer(savers, accountsOpen, accountNumVal);
	if (num == -1)
	{
		return false;
	}
	else
	{
		savers[num]->savingBalance = balanceVal;
		return true;
	}
}*/
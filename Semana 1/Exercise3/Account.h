#pragma once
#include<iostream>
#include<string>
using namespace std;
using namespace System;
class Account
{
private:
	string headline;
	float amount;
public:
	Account(string _headline);
	~Account();
	void increase_amount(float _amount);
	void decrease_amount(float _amount);
	//get
	string get_headline();
	float get_amount();

	//set
	void set_headline(string _headline);
	void set_amount(float _amount);
};

Account::Account(string _headline)
{
	headline = _headline;
	amount = 0;
}
Account::~Account() {}
void Account::increase_amount(float _amount){amount += _amount;}
void Account::decrease_amount(float _amount){amount -= _amount;}

//get
string Account::get_headline() { return headline; }
float Account::get_amount() { return amount; }

//set
void Account::set_headline(string _headline) { headline = _headline; }
void Account::set_amount(float _amount) { amount = _amount; }
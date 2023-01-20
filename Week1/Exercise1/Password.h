#pragma once
#include<iostream>
#include<string>
using namespace std;

class Password
{
public:
	Password();
	Password(int _length);
	~Password();

	bool is_safe();
	void generate_password();
	//get
	int get_length();
	string get_password();
	//set
	void set__length(int _length);
private:
	int length;
	string password;
};

Password::Password()
{
	length = 0;
	password = "";
}
Password::Password(int _length)
{
	length = _length; 
}
Password::~Password(){}
bool Password::is_safe()
{
	bool _return = false;
	int count_number = 0, count_uppercase =0, count_minuscule = 0;
	for (int i = 0; i < length; i++)
	{
		if (password[i] >= '0' && password[i] <= '9')
			count_number++;
		else if (password[i] >= 'a' && password[i] <= 'z')
			count_minuscule++;
		else if (password[i] >= 'A' && password[i] <= 'Z')
			count_uppercase++;
	}
	if(count_uppercase>2&& count_minuscule>1&& count_number>5)
		_return = true;
	return _return;
}
void Password::generate_password()
{
	for (int i = 0; i < length; i++)
	{
		int random = rand() % 40;
		if (random % 2 == 0)
			password[i] = rand() % ('9' - '0' + 1) + '0';
		else if (random % 3 == 0)
			password[i] = rand() % ('z' - 'a' + 1) + 'a';
		else
			password[i] = rand() % ('Z' - 'A' + 1) + 'A';
		password += password[i];
	}
}
int Password::get_length() { return length; }
string Password::get_password() { return password; }
void Password::set__length(int _length) { length = _length; }
#pragma once
#include"Password.h"
class Password_Arrangement
{
public:
	Password_Arrangement();
	~Password_Arrangement();
	void generate_password();
	void get_info();
	int get_size();
private:
	int size;
	Password** Arrangement;
};

Password_Arrangement::Password_Arrangement()
{
	size = rand() % (10 - 5 + 1) + 5;
	Arrangement =nullptr;
}

Password_Arrangement::~Password_Arrangement()
{
	for (int i = 0; i < size; i++)
		delete[]Arrangement;
}

void Password_Arrangement::generate_password()
{
	Arrangement = new Password *[size];
	for (int i = 0; i < size; i++)
	{
		Password* password = new Password(rand()%(15-11+1)+11);
		password->generate_password();
		Arrangement[i] = password;
	}
}
void Password_Arrangement::get_info()
{
	for (int i = 0; i < size; i++)
	{
		cout << "\nPassword" << i + 1 << ": " << Arrangement[i]->get_password()
			<< " " << ",es safe: " <<
			Arrangement[i]->is_safe();
	}
}
int Password_Arrangement::get_size() { return size; }
#pragma once
#include"Contact.h"
class ManageContacts
{
public:
	ManageContacts();
	~ManageContacts();
	void add(Contact* object);
	void Delete(int position);
	Contact *modify(int position);

	//
	void get_information();
	void report_sex_M();
	int get_size();
private:
	Contact** contacts;
	int size;
};

ManageContacts::ManageContacts()
{
	contacts = nullptr;
	size = 0;
}
ManageContacts::~ManageContacts()
{ 
	delete[]contacts;
}
void ManageContacts::add(Contact* object)
{
	Contact** auxiliary = new Contact*[size + 1];
	for (int i = 0; i < size; i++)
		auxiliary[i]=contacts[i];
	auxiliary[size] = object;

	if (contacts != nullptr)
		delete[]contacts;
	contacts = auxiliary;
	auxiliary = nullptr;
	size++;
}
void ManageContacts::Delete(int position)
{
	Contact** auxiliary = new Contact * [size - 1];
	for (int i = 0; i < size-1; i++)
	{
		if(i<position)
			auxiliary[i] = contacts[i];
		else
			auxiliary[i] = contacts[i+1];
	}


	if (contacts != nullptr)
		delete[]contacts;
	contacts = auxiliary;
	auxiliary = nullptr;
	size--;
}
Contact *ManageContacts::modify(int position) { return contacts[position]; }

//
void ManageContacts::get_information()
{
	for (int i = 0; i < size; i++)
		contacts[i]->get_information();
}
void ManageContacts::report_sex_M()
{
	for (int i = 0; i < size; i++)
		if (contacts[i]->get_sex() == 'M')
			contacts[i]->get_information();
}
int ManageContacts::get_size() { return size; }
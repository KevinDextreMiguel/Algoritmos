#pragma once
#include<iostream>
#include<string>
using namespace std;
using namespace System;
class Contact
{
public:
	Contact(string _name,string _telephone,string _faculty,string _email,string _social_network,string _date_of_birth,char _sex);
	Contact();
	~Contact();

	//set
	void set_name(string _name);
	void set_telephone(string _telephone);
	void set_faculty(string _faculty);
	void set_date_of_birth(string _date_of_birth);
	void set_email(string _email);
	void set_social_network(string _social_network);
	void set_sex(char _sex);

	//get
	string get_name();
	string get_telephone();
	string get_faculty();
	string get_date_of_birth();
	string get_email();
	string get_social_network();
	char get_sex();
	void get_information();
private:
	string name;
	string telephone;
	string faculty;
	string date_of_birth;
	string email;
	string social_network;
	char sex;
};

Contact::Contact(string _name, string _telephone, string _faculty, string _email, string _social_network, string _date_of_birth, char _sex)
{
	name=_name;
	telephone=_telephone;
	faculty=_faculty;
	date_of_birth=_date_of_birth;
	email=_email;
	social_network=_social_network;
	sex=_sex;
}
Contact::Contact(){}
Contact::~Contact() {}

//set
void Contact::set_name(string _name){ name = _name; }
void Contact::set_telephone(string _telephone){ telephone = _telephone; }
void Contact::set_faculty(string _faculty){ faculty = _faculty; }
void Contact::set_date_of_birth(string _date_of_birth){ date_of_birth = _date_of_birth; }
void Contact::set_email(string _email){ email = _email; }
void Contact::set_social_network(string _social_network){ social_network = _social_network; }
void Contact::set_sex(char _sex){ sex = _sex; }

//get
string Contact::get_name(){return name;}
string Contact::get_telephone(){return telephone;}
string Contact::get_faculty(){return faculty;}
string Contact::get_date_of_birth(){return date_of_birth;}
string Contact::get_email(){return email;}
string Contact::get_social_network(){return social_network;}
char Contact::get_sex() { return sex; }
void Contact::get_information()
{
	cout<<"\n\nname: "<< name;
	cout<<"\ntelephone: "<< telephone;
	cout<<"\nfaculty: "<< faculty;
	cout<<"\ndate_of_birth: "<< date_of_birth;
	cout<<"\nemail: "<< email;
	cout<<"\nsocial_network: "<< social_network;
	cout << "\nsex: "<<sex;
}
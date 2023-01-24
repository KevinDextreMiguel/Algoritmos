#pragma once
#include<iostream>
#include<string>
using namespace std;

class Person
{
public:
	Person();
	Person(string _name,int _age, int _DNI,char _sex, float _weight, float _height);
	~Person();

	int body_mass_index();
	bool is_of_legal_age();

	//set  
	void set_name(string _bame);
	void set_age(int _age);
	void set_DNI(int _DNI);
	void set_sex(char _sex);
	void set_weight(float _weight);
	void set_height(float _height);

	//get
	string get_name();
	int get_age();
	int get_DNI();
	char get_sex();
	float get_weight();
	float get_height();
	void get_information();
private:
	string name;
	int age, DNI;
	char sex;
	float weight, height;
};

Person::Person()
{
	name = "";
	sex = 'H';
	age = 0; DNI = 0;
	weight = height = 0;
}
Person::Person(string _name, int _age, int _DNI,char _sex, float _weight, float _height)
{
	name=_name;
	age = _age;
	DNI=_DNI;
	sex =_sex;
	weight = _weight;
	height = _height;
}
Person::~Person(){}

int Person::body_mass_index() 
{
	int _return =0;
	float IMC = weight / pow(height, 2);
	if(IMC<20)_return =-1;
	else if (IMC > 25)_return = 1;
	return _return;
}
bool Person::is_of_legal_age()
{
	bool _return = false;
	if(age>17)_return = true;
	return _return;
}

//set  
void Person::set_name(string _name) { name = _name; }
void Person::set_age(int _age) { age = _age; }
void Person::set_DNI(int _DNI) { DNI = _DNI; }
void Person::set_sex(char _sex) { sex = _sex; }
void Person::set_weight(float _weight) { weight = _weight; }
void Person::set_height(float _height) { height = _height; }

//get
string Person::get_name() { return name; }
int Person::get_age() { return age; }
int Person::get_DNI() { return DNI; }
char Person::get_sex() { return sex; }
float Person::get_weight() { return weight; }
float Person::get_height() { return height; }
void Person::get_information()
{
	cout<<"\n\nname: "<< name;
	cout << "\nage: " << age;
	cout << "\nDNI: " << DNI;
	cout << "\nsex: " << sex;
	cout << "\nweight: " << weight;
	cout << "\nheight: " << height;
}
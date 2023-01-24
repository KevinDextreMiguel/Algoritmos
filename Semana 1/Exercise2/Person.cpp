#include<iostream>
#include"Person.h"
using namespace std;
int main()
{
	srand(time(NULL));
	string name;
	int age, DNI;
	char sex;
	float weight, height;
	Person* object1 = new Person();

	cout << "Object1\n";
	cout << "name: "; cin>>name;
	cout << "age: "; cin>>age;
	cout << "DNI: "; cin>>DNI;
	cout << "sex: "; cin>>sex;
	cout << "weight: "; cin>>weight;
	cout << "height: "; cin>>height;
	object1->set_name(name);
	object1->set_age(age);
	object1->set_DNI(DNI);
	object1->set_sex(sex);
	object1->set_weight(weight);
	object1->set_height(height);

	cout << "\nObject2\n";
	cout << "name: "; cin >> name;
	cout << "age: "; cin >> age;
	cout << "DNI: "; cin >> DNI;
	cout << "sex: "; cin >> sex;
	cout << "weight: "; cin >> weight;
	cout << "height: "; cin >> height;
	Person* object2 = new Person(name, age, DNI, sex, weight, height);

	cout << "\nInformation object1: ";
	object1->get_information();
	cout<<"\nBody mass index: "<<object1->body_mass_index();
	cout<<"\nIs of legal age: "<<object1->is_of_legal_age();

	cout << "\n\nInformation object2: ";
	object2->get_information();
	cout << "\nBody mass index: " << object2->body_mass_index();
	cout << "\nIs of legal age: " << object2->is_of_legal_age();
	cout<<"\n";
	system("pause");
	return 0;
}
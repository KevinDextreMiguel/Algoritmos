#include"ManageContacts.h"
#include<conio.h>
int options()
{
	int option;
	cout << "1. Add contact\n";
	cout << "2. Delete contact\n";
	cout << "3. Show\n";
	cout << "4. Male report\n";
	cout << "5. Modify\n";
	cout << "\toption: ";
	cin >> option;
	return option;
}
void main()
{
	string name;
	string telephone;
	string faculty;
	string date_of_birth;
	string email;
	string social_network;
	char sex;
	ManageContacts* object = new ManageContacts();
	
	//Contact* obj = new Contact();
	int option;
	while (true)
	{
		system("cls");
		Contact* obj = new Contact();
		int position;
		option = options();
		switch (option)
		{
		case 1:
			cout<<"name: ";cin>>name;
			cout<<"telephone: ";cin>>telephone;
			cout<<"faculty: ";cin>>faculty;
			cout<<"date_of_birth: ";cin>>date_of_birth;
			cout<<"email: ";cin>>email;
			cout<<"social_network: ";cin>>social_network;
			cout << "sex: ";cin>> sex;
			obj = new Contact(name, telephone, faculty, email, social_network, date_of_birth, sex);
	
			object->add(obj);
			break;
		case 2:
			cout << "\nPosition: "; cin >> position;
			object->Delete(position);
			break;
		case 3:
			object->get_information();
			break;
		case 4:
			object->report_sex_M();
			break;
		case 5:
			cout << "\nPosition: "; cin >> position;
			obj=object->modify(position);
			cout << "name: "; cin >> name;
			cout << "telephone: "; cin >> telephone;
			cout << "faculty: "; cin >> faculty;
			cout << "date_of_birth: "; cin >> date_of_birth;
			cout << "email: "; cin >> email;
			cout << "social_network: "; cin >> social_network;
			cout << "sex: "; cin >> sex;

			obj->set_name(name);
			obj->set_telephone(telephone);
			obj->set_faculty(faculty);
			obj->set_date_of_birth(date_of_birth);
			obj->set_email(email);
			obj->set_social_network(social_network);
			obj->set_sex(sex);
		}
		getch();
	}
	getch();
}
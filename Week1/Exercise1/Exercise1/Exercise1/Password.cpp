#include<iostream>
#include"Password_Arrangement.h"
using namespace std;
int main()
{
	srand(time(NULL));
	Password_Arrangement* object = new Password_Arrangement();
	object->generate_password();
	cout << " ('1' of true or '0' of false)\n";
	object->get_info();
	cout<<"\n";
	system("pause");
	return 0;
}
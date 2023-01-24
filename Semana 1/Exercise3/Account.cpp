#include"Account.h"
int options()
{
	int option;
	cout << "1. Deposit";
	cout << "\n2. Withdraw";
	cout << "\n3. Go out";
	do
	{
		cout << "\nEnter option: "; cin >> option;
	} while (option<1||option>3);
	return option;
}
void main()
{
	Account* object;
	string headline;
	float amount;
	int option=0;
	cout << "Headline: "; cin >> headline;

	object = new Account(headline);

	while(option!=3)
	{
		Console::Clear();
		cout << "Hello " << object->get_headline() << "\n";
		option = options();
		if (option == 1)
		{
			do {
				cout << "\nAmount: "; cin >> amount;
			} while (amount <= 0);
			object->increase_amount(amount);
			cout << "Entered correctly";
		}
		if (option == 2)
		{
			if (object->get_amount() > 0)
			{
				cout << "\nAmount: "; cin >> amount;
				if (object->get_amount() >= amount)
				{
					object->decrease_amount(amount);
					cout << "\n\nwithdrawal amount: " << amount;
					cout << "\nAvailable balance: " << object->get_amount();
				}
				else
					cout << "\nThe amount to be withdrawn is greater than the money you have in your account";
			}
			else
				cout << "\nYou have no money in your account";
		}
		if (option != 3)
		{
			cout << "\n";
			system("pause");
			cout << "\n";
		}
	} 
}
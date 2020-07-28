#include <iostream>

using namespace std;

float account_number = 123456;
int activity;
int output;
float deposit_ammount;
float in;
float initial_balance = 2000;
float PIN = 12345;

float login();
float menu();
float balance();
float withdraw();
float deposit();
float exit();


int main()
{
	system("color B");
	cout << "		Welcome!" << endl;
	system ("pause");
	login();
	system("pause");
	return 0;
}


float login()
{
	system("cls");
	cout << "\n\n		Enter you account number: " << endl;
	cin >> account_number;
	cout << "\n 	Enter your PIN: " << endl;
	cin >> PIN;
	menu();
	return 0;
}


float menu()
{
	do
	{
	system("cls");
	cout << "\n\n\n		MENU\n"
        << "                                       \n"
        << "  	1 - Balance inquiry                \n"
        << "  	2 - Withdrawal              	   \n"
        << "  	3 - Deposit              		   \n"
        << "  	4 - Exit                           \n"
	    << "                                       \n"
        << "\n"
       << "\n Enter choise: ";
       cin >> activity;
	}
	
	while (activity < 1 || activity > 4);
	switch (activity)
	{
	case 1:balance();
	break;
	case 2:withdraw();
	break;
	case 3:deposit();
	break;
	case 4:exit();
	break;
	}
	return 0;
}


float balance()
{
	system("cls");
	cout << "Account number: " << account_number << endl;
	cout << "Your current balance is: $" << initial_balance << endl;
	system("pause");
	menu();
	return 0;
}


float withdraw()
{
	system("cls");
	do
	{
	cout << "\n		Withdrawal menu"
	   		 <<"\n\n"
			 <<"	1 - $ 20"  <<"		4 - $ 100"
			 <<"\n"
		   	 <<"	2 - $ 40"  <<"		5 - $ 200"
			 <<"\n"
			 <<"	3 - $ 60"  <<"		6 - Cancel transaction"
			 <<"\n\n"
			 <<"Enter option: ";
			 cin >> output;
			 cout << endl;
	}
	
	while(output < 1 || output > 6);
	switch(output)
	{
	case 1:if(initial_balance < 20)
	{
	cout << "\nInsufficient funds!" << endl;
	cout << "\nAvailable balance: $" << initial_balance << endl;
	cout << endl;
	system("pause");
	}
	else
	{
	cout << "\nWithdrawing 20$ from your account: " << endl;
	initial_balance = initial_balance - 20;
	cout << "New Balance: $" << initial_balance << endl;
	}
	break;
	
	case 2:if(initial_balance < 40)
	{
	cout << "\nInsufficient funds!" << endl;
	cout << "\nAvailable balance: $" << initial_balance << endl;
	cout << endl;
	system("pause");
	}
	else
	{
	cout << "\nWithdrawing 40$ from your account: " << endl;
	initial_balance = initial_balance - 40;
	cout << "New Balance: $" << initial_balance << endl;
	}
	break;
	
	case 3:if(initial_balance < 60)
	{
	cout << "\nInsufficient funds!" << endl;
	cout << "\nAvailable balance: $" << initial_balance << endl;
	cout << endl;
	system("pause");
	}
	else
	{
	cout << "\nWithdrawing 60$ from your account: " << endl;
	initial_balance = initial_balance - 60;
	cout << "New Balance: $" << initial_balance << endl;
	}
	break;
	
	case 4:if(initial_balance <100)
	{
	cout << "\nInsufficient funds!" << endl;
	cout << "\nAvailable balance: $" << initial_balance << endl;
	cout << endl;
	system("pause");
	}
	else
	{
	cout << "\nWithdrawing 100$ from your account: " << endl;
	initial_balance = initial_balance - 100;
	cout << "New Balance: $" << initial_balance << endl;
	}
	break;
	
	
	case 5:if(initial_balance < 200)
	{
	cout << "\nInsufficient funds!" << endl;
	cout << "\nAvailable balance: $" << initial_balance << endl;
	cout << endl;
	system("pause");
	}
	else
	{
	cout << "\nWithdrawing 200$ from your account: " << endl;
	initial_balance = initial_balance - 200;
	cout << "New Balance: $" << initial_balance << endl;
	}
	break;
	
	case 6:
	cout << "\nExiting withdrawal menu" << endl;
	cout << "\nReturning to main menu" << endl;
	menu();
	break;
}
}


float deposit()
{
	cout <<"\n Enter a sum you wish to add to your account: " ;
	cin >> deposit_ammount;
	initial_balance= initial_balance + deposit_ammount;
	cout <<"\n  You have added $" << deposit_ammount << endl;
	cout << "\n Your new balance is: $" << initial_balance << endl;
	cout << endl;
	system("pause");
	menu();
	return 0;
}

float exit()
{
	system("cls");
	cout << "Exiting ATM" << endl;
	system("pause");
	system("cls");
	main();
	return 0;
}

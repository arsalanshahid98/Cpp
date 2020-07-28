#include <iostream>
#include <fstream>
#include "Booking.h"
#include <string>
#include <windows.h>
#include <iomanip>
using namespace std ;

int main ()
	{
	ShowWindow(GetConsoleWindow(), SW_MAXIMIZE);
	system ("color B");
	Booking b ;
	int menue_choice;
	
	do
		{
		cout << "\n\n\n    _________________[ Welecom to Our Virtual Airport]__________________\n\n"
		     << "                                 MAINE MENUE                      \n\n"
		     << "			1 - Booking									\n"
		     << "			2 - Show Booking Details					\n"
		     << "			3 - Update Your Booking						\n"
		     << "			4 - Remove your booking and get a refund	\n\n ";
		
		cout << "			Select and Enter the number of your choice: ";
		cin >> menue_choice;
		system("cls");
		switch (menue_choice)
			{
			case 1 : b.menueAirlines();
			break ;
			case 2 : b.show();
			break ;
			case 3 : b.update();
			break ;
			case 4 : b.remove();
			break ;
			default :
				cout << "Invalid Choice! Try Again .. ";
				Sleep(1500);
				system("cls");
			}
		}
	while (menue_choice < 1 || menue_choice > 3);
	}


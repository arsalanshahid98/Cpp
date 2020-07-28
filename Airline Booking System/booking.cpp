#include "Booking.h"
#include <string>
#include <iostream>
#include <windows.h>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;

void Booking::setID(int newID)
	{
	ID = newID;
	}
int Booking::getID()
	{
	return ID;
	}
void Booking::setName(string first , string last)
	{
	name = first + " " + last;
	}
string Booking::getName()
	{
	return name;
	}

void Booking::setAge(int newAge)
	{
	age = newAge;
	}
int Booking::getAge ()
	{
	return age;
	}
void Booking::setPrice(double newPrice)
	{
	price = newPrice;
	}
double Booking::getPrice ()
	{
	return price;
	}
void Booking::setDestination (string d)
	{
	destination  = d;
	}
string Booking::getDestination()
	{
	return destination;
	}
void Booking::setTrip (string newTrip)
	{
	trip = newTrip;
	}
string Booking::getTrip()
	{
	return trip;
	}
void Booking::setDate (string newDate)
	{
	date = newDate;
	}
string Booking::getDate()
	{
	return date;
	}
void Booking::setTime(string newTime)
	{
	time = newTime ;
	}
string Booking::getTime()
	{
	return time;
	}
void Booking::setClassType (string newType)
	{
	classType = newType ;
	}
string Booking::getClassType()
	{
	return classType;
	}
void Booking::setSeat(int newSeat)
	{
	seat = newSeat ;
	}
int Booking::getSeat()
	{
	return seat ;
	}
void Booking::setTicketN(int newT)
	{
	ticketN = newT ;
	}
int Booking::getTicketN()
	{
    return ticketN;
	}
void Booking::setReferenceN (int newR)
	{
	referenceN = newR ;
	}
int Booking::getReferenceN()
	{
	return referenceN ;
	}	

void Booking::menueAirlines ()
	{
	system ("color B");
	int menue_choice ;
	do
		{
		cout << "\n\n\n    _________________[ Welecom to Our Virtual Airport]__________________\n\n"
		     << "                      		Flight Booking                      \n\n"
		     << "             		1 - Domestic Flights            	    \n"
		     << "             		2 - International Flights         \n"
		     << "             		0 - Exit      					\n\n";
		
		cout << "			Select and Enter the number of your choice: ";
		cin >> menue_choice ;
		system("cls");
		
		switch (menue_choice)
			{
			case 1 : chooseAirlineLocal();
			break ;
			case 2 : chooseAirlineInternational ();
			break ;
			case 0 :
				exit(0);
			default :
				cout << "Invalid Choice! Try Again .. ";
				Sleep(1500);
				system("cls");
			}
		}
		while (menue_choice < 1 || menue_choice > 2);
	}

void Booking::info ()
	{
	int i = 0 ;	int x  ;
	Booking obj ;
	
	int ID ;
	string fname , lname ;
	int age ;
	
	srand(1+i);
	ticketN = 1+rand()%10;
	referenceN = ticketN + 12345 ;
	
	obj.setTicketN(ticketN);
	obj.setReferenceN(referenceN);
	obj.setDestination(destination);
	obj.setDate(date);
	obj.setTime(time);
	obj.setTrip(trip);
	obj.setClassType(classType);
	obj.setSeat(seat);
	
	Booking account [20];
	
	ofstream of ("Booking.txt",ios::app);
	
	if (!of)
		{
		cout << "Faild to open file .!";
		exit(0);
		}

	do
		{
		cout << "\n		Enter your ID number : ";
		cin >> ID ;
		obj.setID(ID);
		cout << "\n		Enter first name : " ;
		cin >> fname ;
		cout << "\n		Enter Last name : " ;
		cin >> lname ;
		obj.setName(fname, lname);
		cout << "\n		Enter your age : "	;
		cin >> age ;
		obj.setAge(age);
		system ("cls");
		
		   cout << "\n\n __________________________________[ Virtual Ticket ]__________________________________________\n\n"
		        << " Ticket No: " << getTicketN() << "\t\t\t 					   Reference No: "<< getReferenceN()<<"\n"
		        << " ______________________________________________________________________________________________\n"
		        << "  	PASSENGER INFORMATION                 			FLIGHT INFORMATION\n\n"
		        << " 	|Name: " << obj.getName() <<" 						|Origin: Beijing \n"
		        << " 	|Id Number: " << obj.getID() <<" 						|Destination: "<< getDestination()<<"\n"
		        << " 	|Age: "<< obj.getAge() <<" 						|Date: "<< getDate() << "\n"
		        << " 								|Time: "<< getTime()<<"\n"
		        <<"  	"<< getTrip()<<"\n  	"<< getClassType()<<"\n  	Number of seat/s: "<< getSeat()<<"\n"
		        << " ______________________________________________________________________________________________\n\n"
		        << " PRICE: "<< getPrice () ;
		        
		   cout << "\n\n PLEASE CHECK :\n"
		        << " 1 - Confirm \n"
		        << " 2 - Cancel \n ";
		        cin >> x ;
		        system("cls");
		        switch(x)
					{
			        case 1 :
			        account[i] = obj ;
			       of << account[i].getID() <<"   "<< account[i].getName() <<"   "<< account[i].getAge() <<"   "<< account[i].getTicketN()
			       <<"   "<<account[i].getReferenceN() <<"   "<<account[i].getDestination()
			       <<"   "<<account[i].getDate()<<"   "<<account[i].getTime()<<"   "<<account[i].getTrip()<<"   "
			       <<account[i].getClassType()<<"   "<<account[i].getSeat()<<"\n";
			       of.close();
			  cout << "Do you want book another fligt \n"
			       << " 1 - Yes. \n 2 - No. \n";
			       cin >> x ;
			      if (x == 1)
				  	{
			     	i++;
			     	system("cls");
			        menueAirlines();
				    }
					else if (x == 2)
						{
						system("cls");
						cout << " \n\n\n\n\n   __________ Thankyou for using our Virtual Airline Services, safe travels. _________ \n Programe will exit now ";
						Sleep(1500);
						exit(0);
						}
					else
						{
						system("cls");
						cout << "Invaild choice, Sorry programe will exit now ";
						Sleep(1500);
						}
			        break ;
			    case  2 :
			    	do{
				cout << "\n\n\n\n ____________________________________________\n (1) - Home \n (2) - Exit \n";
				   cin >> x ;
				  switch (x){
				  	case 1 : system("cls");  menueAirlines();   break;
				  	case 2 : exit(0); break ;
				  	default: system("cls") ; cout << "Invalid Choice ..! Try Again "; Sleep(1500); system("cls"); break ;
				  }
				  }while (x<1 || x>2);
			
				  }
		}
	while ( x == 1);
	}

void Booking::chooseAirlineInternational()
	{
	int select ;
	system ("color B");
	 do
	 	{
		cout << "\n\n\n 		In which AIRLINE you want to travel \n\n"	
		     << "			1 - Jarvis \n"	
		     << "			2 - Ultron \n"
		     << "			3 - Back \n"; // added back button
		     cout << "\n			Select and Enter the number of your choice: ";
			 cin >> select ;
			 system("cls");
			 
		        if (select == 1 )
					{
				 	cout << "\n\n _________Jarvis Virtual Airlines______\n";
			        chooseInternationalDestination ();
				 	}
			 	else if (select == 2 )
					{
					cout << "\n\n _________Ultron Virtual Airlines______\n";
			        chooseInternationalDestination ();
				 	}
				else if (select == 3 ) // added else if statement for going to previous page by pressing 3
					{
					menueAirlines(); //calls the menue airline was the previous page
				 	}
				 	
			         if (select < 1 || select > 3 ) //changed that select > 2 to 3 rest is all same
						{
				 	    cout << "\n\n Invalid choice! try Again..";
				 	    Sleep(1500);
				 	    system("cls");
				 		}
	 	}
		while (select < 1 || select > 3); //changed that select > 2 to 3
	}

void Booking::chooseAirlineLocal()
	{
    int select ;
    system ("color B");
	do
		{
		cout << "\n\n\n			In which AIRLINE you want to travel \n\n"	
	     << "				1 - Jarvis \n"	
	     << "				2 - Ultron \n"
	     << "			 	3 - Back \n"; // added back button
	     cout << "\n				Select and Enter the number of your choice: ";
		 cin >> select ;
		 system("cls");
		 
	        if (select == 1 )
				{
			 	cout << "\n\n _________Jarvis Virtual Airlines______\n";
		        chooseLocalDestination ();
			 	}
		 	else if (select == 2 )
				{
				cout << "\n\n _________Ultron Virtual Airlines______\n";
		        chooseLocalDestination ();
			 	}
			else if (select == 3 ) // added else if statement for going to previous page by pressing 3
					{
					menueAirlines(); //calls the menue airline was the previous page
				 	}
		        if (select < 1 || select > 3 ) //changed that select > 2 to 3 rest is all same
					{
			 	 	cout << "\n\n Invalid choice! try Again..";
			 	 	Sleep(1500);
			 	 	system("cls");
					}
		}
	while (select < 1 || select > 3); //changed that select > 2 to 3
	}
 
void Booking::chooseInternationalDestination ()
	{
	int select ;
	do
		{
		 cout << "\n\n Here are the available INTERNATIONAL flights: \n"	
			  << " _________________________________________\n"
			  << " 1 - Pakistan \n"
			  << " 2 - America \n"
			  << " 3 - Germany \n"
			  << " 4 - France \n"
			  << " 5 - Russia \n"
			  << " 6 - Canada \n"
			  << " 7 - Japan \n"
		      << " 0 - Go Back \n"
		      << " __________________________________________\n";
		      cout << "\n Select and Enter the number of your choice: ";
			  cin >> select ;
		      system("cls");
		      switch (select)
			  	{
		      	case 1 : 
		      	destination = "Pakistan";
		      	price = 7600 ;
		      	break ;
		      	case 2 : 
		      	destination = "America";
		      	price = 5400 ;
		      	break ;
		      	case 3 : 
		      	destination = "Germany";
		      	price = 6300 ;
		      	break ;
		      	case 4 : 
		      	destination = "France";
		      	price = 10000 ;
		      	break ;
		        case 5 : 
		      	destination = "Russia";
		      	price = 8500 ;
		      	break ;
		      	case 6 : 
		      	destination = "Canada";
		      	price = 9500 ;
		      	break ;
		      	case 7 : 
		      	destination = "Japan";
		      	price = 3800 ;
		      	break ;
		      	case 0 :
		     	system("cls");
		      	chooseAirlineInternational();
		      	break ;
		        default :
		        	cout << "\n\n Inavalid choice! try Again ..";
		        	Sleep(1500);
		        	system("cls");
			  	}
		}
		while (select < 0 || select > 7);
	 	chooseTripe();
	}
	
void Booking::chooseLocalDestination ()
	{
	int select ;
	do
		{
		cout << "\n Here are the available LOCAL flights: \n"
		<< " _________________________________________\n"
		<< " 1 - Shanghai \n"
		<< " 2 - Taipei \n"
		<< " 3 - Guangzhou \n"
		<< " 4 - Nanjing \n"
		<< " 5 - Chonping \n"
		<< " 6 - Tianjin \n"
		<< " 7 - Shenzhen \n"
		<< " 0 - Go Back \n"
		<< " __________________________________________\n";
		cout << "\n Select and Enter the number of your choice: ";
		cin >> select ;
		system("cls");
		
		switch (select)
			{
			case 1 :
			destination = "Shanghai";
			price = 2500 ;
			break ;
			case 2 :
			destination = "Taipei";
			price = 3000 ;
			break ;
			case 3 :
			destination = "Guanzhou";
			price = 2300 ;
			break ;
			case 4 :
			destination = "Nanjing";
			price = 4100 ;
			break ;
			case 5 :
			destination = "Chongping";
			price = 3500 ;
			break ;
			case 6 :
			destination = "Tianjin";
			price = 1500 ;
			break ;
			case 7 :
			destination = " Shenzhen";
			price = 3000 ;
			break ;
			case 0 :
			system("cls");
			chooseAirlineLocal();
			break ;
			default :
			cout << "\n\n Inavalid choice! Try Again ..";
			Sleep(1500);
			system("cls");
			}
		}
	while (select < 0 || select > 7);
	chooseTripe();
	}

void Booking::chooseTripe()
	{
	int select ;
	
	cout << "\n\n	Please select trip category \n"	
	     << "	___________________________\n"
	     << " 	1 - One-way Trip \n "
	     << " 	2 - Round Trip \n "
	     << " 	0 - Back \n"
	     << "	____________________________\n";
	     cout << "\n	Select and Enter the number of your choice: ";
		 cin >> select ;
	     system("cls");
     
    switch (select)
		{
	    case 1:
	    trip = "ONE WAY";
	    break ;
	    case 2:
	    trip = "ROUND TRIP";
	    price *= 2 ;
	    cout << "Price is "<<getPrice();
	    break ;
	    case 0:
	    system("cls");
	    chooseInternationalDestination();
	    break ;
	    default:
	    cout << "Invalid Choice! Try Again ..";
	    Sleep(1500);
	    system("cls");
	    break ;	
		}
	chooseDate();
	}

void Booking::chooseDate()
	{
	int select ;
	
	while (select < 1 ||select > 12)
		{
		cout << "(0) - Go Back ";
		cout << "\n\n___________________________________________CHOOSE THE DATE OF YOUR DEPARTER_____________________________________________\n\n "	
		     <<" 1  " <<setw(10)<< " 2  " <<setw(8)<<"  3  " <<setw(10)<<"  4  " <<setw(10)<<"5 "  <<setw(11)<<"  6  "<<setw(10)<<" 7  "<<setw(10)
		     <<"  8  "<<setw(11)<<"  9  "<<setw(12)<<"  10  "<<setw(10)<<"  11  "<<setw(12)<<"  12  \n"
		     <<"_______________________________________________________________________________________________________________________\n\n"
			 <<" Jan "<<setw(10)<<"Feb"<<setw(10)<<"March"<<setw(10)<<"April"<<setw(10)
			 <<"May"<<setw(10)<< "June"<<setw(10)<<"July"<<setw(10)<<"August" <<setw(14)
			 <<"September"<<setw(10)<<"October"<<setw(10)<<"November"<<setw(14)<<"December \n"
			 <<" 23 "<<setw(10)<<" 16 "<<setw(8)<<" 4 "<<setw(10)<<" 21 "<<setw(10)<<"    "<<setw(10)<<" 2 "
			 <<setw(10)<<" 7 "<<setw(9)<<" 14 " <<setw(10)<<"    "<<setw(14)<<" 27 "<<setw(10)<< " 25 "<<setw(11)<<" 18 ";
			 cout << "\n\n Select and Enter the number of your choice: ";
			 cin >> select ;
	
		switch (select)
			{
			 case 1 : 	
			    date = "23/Jan/2017";
			    cout << "\n\n       *** Flight available! *** \n";
			    break ;
		     case 2 :
		     	date = "16/Feb/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;
		     case 3 :
		     	date = "4/Mar/2017";
			 	system("cls");
		     	cout << "\n Flight available! \n";
		     	break ;
		     case 4 :
		     	date = "21/Apr/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;
		     case 5 :
		     	cout << "\n     ** Sorry, Flight not available! Pleas choose another date **  \n";
		     	Sleep(1500);
		     	system("cls");
		     	chooseDate();
		     	break ;
			  case 6 :
		     	date = "2/June/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;	
			  case 7 :
		     	date = "7/July/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;
			  case 8 :
		     	date = "14/Agst/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;	
		      case 9 :
			 	system("cls");
		     	cout << "\n    ** Sorry, Flight not available! Pleas choose another date ** \n";
		     	Sleep(1500);
		     	system("cls");
		     	chooseDate();
		     	break ;	
			  case 10 :
		     	date = "27/Oct/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;	
		     case 11 :
		     	date = "25/Nov/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;
		     case 12 :
		     	date = "18/Dec/2017";
			    cout << "\n\n       *** Flight available! *** \n";
		     	break ;
		     case 0 :
		       system("cls");
		       chooseTripe();
		       break ;
			 default :
			 	system("cls");
			 	cout << "\n Invalid Choice! Try Again";
			 	Sleep(1500);
			 	system("cls");
			}
		}
	system("cls");
	chooseTime();	
	}

void Booking::chooseTime()
	{
	int select  ;
	do
		{
		cout << "\n ______________________AVALIABLE TIME FOR DEPARTURE _______________\n\n"	
		     <<"_________________________________________________________________________\n\n"
		     << " 1 - 5:00 AM \n"
			 << " 2 - 7:45 PM \n"
			 << " 3 - 3:15 PM \n"
			 << " 4 - 8:45 AM \n"
			 << " 0 - Go Back \n";
			 cout << "\n\n Select and Enter the number of your choice: ";
			 cin >> select ;
			 
		switch(select)
			{
			case 1 :
			 	time = "5:00 AM ";
			 	system("cls");
			 	break ;
			case 2 :
			 	time = "7:45 PM ";
			 	system("cls");
			 	break ;
			case 3 :
			 	time = "3:15 PM ";
			 	system("cls");
			 	break ;
			case 4 :
			 	time = "8:45 AM ";
			 	system("cls");
			 	break ;
			case 0 :
			 	system("cls");
			 	chooseDate();
			 	break ;
			default :
				system("cls");
			    cout << "\n Invalid Choice! Try Again .. " 	;
			 	Sleep(1500);
			 	system("cls");
			}	
		}
		while (select < 0 || select > 4);	
	chooseClass ();
	}	

void Booking::chooseClass (){
int select ;
	 do{
cout << "\n\n In which class you want to ravel? \n"	
	 << "_________________________________________\n"
	 << "1 - BUSINESS CLASS \n"
	 << "2 - ECONOMY CLASS \n"
	 << "0 - Go Back \n"
	 <<"___________________________________________\n";
	 cout << "\n\n Select and Enter the number of your choice: ";
	 cin >> select ;
	 switch (select){
	 case 1 :
	 	classType = "BUSINESS CLASS";
	 	price *= 2 ;
	 	break ;
	 case 2 :
	 	classType = "ECONOMY CLASS"	;
	 	break ;
     case 0 :
	 	system("cls");
	 	chooseTime();
	 	break ;
	 default :
	    system("cls");
        cout << "\n Invalid Choice! Try Again .. " 	;
    	Sleep(1500);
    	system("cls");		
	 } 
	 }while ( select < 0 || select > 2);
	 system("cls");
	 enterSeats();
}

void Booking::enterSeats()
	{
	cout << "\n Enter number of seat to be booked: \n";
	cin >> seat ;
	price *= 2 ;
	system("cls");
	info();	
	}

void Booking::show ()
	{
	int size = numberOfLines () ;
	Booking account[size - 1];
	ifstream iff ("Booking.txt");
	string llname , mor , ttrip , type ;
	
	for (int i = 0 ; i < size - 1 ; i++)
		{
		iff >> account[i].ID >> account[i].name >> llname >> account[i].age >> account[i].ticketN >> account[i].referenceN 
		    >> account[i].destination >> account[i].date >> account[i].time >> mor >> account[i].trip >> ttrip 
			>> account[i].classType >> type >> account[i].seat ;
		}
		
	iff.close();
	
	for (int i = 0 ; i < size - 1 ; i++)
		{
		cout << account[i].getID() << "   " << account[i].getName() << "   " << llname << "   " << account[i].getAge() << "   "
		     << account[i].getTicketN() << "   " << account[i].getReferenceN() <<"   "<<account[i].getDestination()
			 <<"   "<<account[i].getDate() <<"   "<<account[i].getTime()<<" "<<mor<<"   "<<account[i].getTrip()<<" "<<ttrip
			 <<"   "
			 <<account[i].getClassType()<<" "<<type<<"   "<<account[i].getSeat()<<"\n\n";
		}
	
	}
	
void Booking::remove()
{
int size = numberOfLines () ;
bool find = false ;
Booking account [size - 1];
ifstream iff ("Booking.txt");
int key ;
while (find == false){
cout << "\n	Enter ID number be deleted : ";
cin >> key ;
string llname , mor , ttrip , type ;
string newlname , newmor , newtrip , newtype ;
 for (int i = 0 ; i < size - 1 ; i++){
 iff >> account[i].ID >> account[i].name >> llname >> account[i].age >> account[i].ticketN >> account[i].referenceN 
     >> account[i].destination >> account[i].date >> account[i].time >> mor >> account[i].trip >> ttrip 
	 >> account[i].classType >> type >> account[i].seat ;
	 if (account[i].getID() == key){
	 	find = true ;
	newlname = llname ; newmor = mor ; newtrip = ttrip ; newtype = type ;
 cout <<"\n\n	ID Number : "<<account[i].getID() << "\n" 
      <<"	Name : "<<account[i].getName() << " " << llname << "\n" 
	  <<"	Age : "<<account[i].getAge() << "\n"
      <<"	Ticket Number : "<<account[i].getTicketN() << "      Reference Number : " << account[i].getReferenceN() <<"\n"
	  <<"	Destination : "<<account[i].getDestination()<< "\n"
	  <<"	Date : "<<account[i].getDate() <<"         Time : "<<account[i].getTime()<<" "<<mor<<"\n"
	  <<"	Trip : "<<account[i].getTrip()<<" "<<ttrip << "\n"
	  <<"	Class Type : "<<account[i].getClassType()<<" "<<type<<"\n"
	  <<"	Seat Number : "<<account[i].getSeat()<<"\n\n";
}
}
iff.close();
if (find == true){
int choice ;
do {
cout << "	Confirm : \n	1 - Remove  \n	2 - Cancel \n";
cout << "\n\n	Select and Enter the number of your choice: ";
cin >> choice ;
switch (choice){
	case 1 : {
	ofstream of ("Booking.txt",ios::out);
	for (int i = 0 ; i < size - 1 ; i++){
	if (account[i].getID() != key){
	of << account[i].getID() <<"   "<< account[i].getName() <<" "<<newlname<<"   "<< account[i].getAge() 
	   <<"   "<< account[i].getTicketN() <<"   "<<account[i].getReferenceN() <<"   "<<account[i].getDestination()
       <<"   "<<account[i].getDate()<<"   "<<account[i].getTime()<<" "<<newmor<<"   "<<account[i].getTrip()<<" "<<newtrip
	   <<"   " <<account[i].getClassType()<<" "<< newtype <<"   "<<account[i].getSeat()<<"\n";
	}
	}
	of.close();
	system("cls");
	cout << " 	The Booking has been removed and the money have been refunded.";
	Sleep(1500);exit(0);
	break ;
}
	case 2 : 
	system("cls");
	cout << "Refund has been canceled and the program will exit now";
	Sleep(1500);exit(0);
	break ;
	default :
	system("cls");
    cout << "\n Invalid Choice! Try Again .. " 	;
    Sleep(1500);
    system("cls");
    break ;
}
 }while ( choice < 1 || choice > 2);
 break ;
}
else {
	system("cls");
   	cout << "ID not found .. Try again \n\n";
   	Sleep(1500);
   	system("cls");
}
}
}
void Booking::update(){
int size = numberOfLines () ;
bool find = false ;
Booking account [size - 1];
ifstream iff ("Booking.txt");
int key ;
while (find == false){
cout << "\n	Enter ID number be update : ";
cin >> key ;
string llname , mor , ttrip , type ;
string newlname , newmor , newtrip , newtype ;
 for (int i = 0 ; i < size - 1 ; i++){
 iff >> account[i].ID >> account[i].name >> llname >> account[i].age >> account[i].ticketN >> account[i].referenceN 
     >> account[i].destination >> account[i].date >> account[i].time >> mor >> account[i].trip >> ttrip 
	 >> account[i].classType >> type >> account[i].seat ;
	 if (account[i].getID() == key){
	 	find = true ;
	newlname = llname ; newmor = mor ; newtrip = ttrip ; newtype = type ;
 cout <<"\n\n	ID Number : "<<account[i].getID() << "\n" 
      <<"	Name : "<<account[i].getName() << " " << llname << "\n" 
	  <<"	Age : "<<account[i].getAge() << "\n"
      <<"	Ticket Number : "<<account[i].getTicketN() << "      Reference Number : " << account[i].getReferenceN() <<"\n"
	  <<"	Destination : "<<account[i].getDestination()<< "\n"
	  <<"	Date : "<<account[i].getDate() <<"         Time : "<<account[i].getTime()<<" "<<mor<<"\n"
	  <<"	Trip : "<<account[i].getTrip()<<" "<<ttrip << "\n"
	  <<"	Class Type : "<<account[i].getClassType()<<" "<<type<<"\n"
	  <<"	Seat Number : "<<account[i].getSeat()<<"\n\n";
	  cout << "	ID number: "; 
	  cin >> account[i].ID ;
	  cout << "	Name: ";
	  cin >> account[i].name;
	  cout << "	Age: ";
	  cin >> account[i].age ;
	  system("cls"); // added this section so you can see your updated booking details after update
	  cout <<"\n	Your booking have been updated successfully!";
	  cout <<"\n\n	ID Number : "<<account[i].getID()<< "\n" 
      <<"	Name : "<<account[i].getName() << " " << llname << "\n" 
	  <<"	Age : "<<account[i].getAge() << "\n"
      <<"	Ticket Number : "<<account[i].getTicketN() << "      Reference Number : " << account[i].getReferenceN() <<"\n"
	  <<"	Destination : "<<account[i].getDestination()<< "\n"
	  <<"	Date : "<<account[i].getDate() <<"         Time : "<<account[i].getTime()<<" "<<mor<<"\n"
	  <<"	Trip : "<<account[i].getTrip()<<" "<<ttrip << "\n"
	  <<"	Class Type : "<<account[i].getClassType()<<" "<<type<<"\n"
	  <<"	Seat Number : "<<account[i].getSeat()<<"\n\n";
	  
 }
 }
     iff.close();
    if (find == true){
	ofstream of ("Booking.txt",ios::out);
	for (int i = 0 ; i < size - 1 ; i++){
	of << account[i].getID() <<"   "<< account[i].getName() <<" "<<newlname<<"   "<< account[i].getAge() 
	   <<"   "<< account[i].getTicketN() <<"   "<<account[i].getReferenceN() <<"   "<<account[i].getDestination()
       <<"   "<<account[i].getDate()<<"   "<<account[i].getTime()<<" "<<newmor<<"   "<<account[i].getTrip()<<" "<<newtrip
	   <<"   " <<account[i].getClassType()<<" "<< newtype <<"   "<<account[i].getSeat()<<"\n";
	}
	of.close();	
	cout << "Done .. Programe will exit Now ...\n\n";
	break ;
}
   else {
   	system("cls");
   	cout << "ID not found .. Try again \n\n";
   	Sleep(1500);
   	system("cls");
   }
}
}
int Booking::numberOfLines (){
    int number_of_lines = 0 ;
    string line;
    ifstream myfile("Booking.txt");
    if(myfile.is_open()){
        while(!myfile.eof()){
            getline(myfile,line);
            number_of_lines++;
        }
        myfile.close();
    }
	return number_of_lines -- ;		
}


#include<iostream>
using namespace std;
class customer 
{
public:
	 
	char name[30];
	char address[100];
	int phone[100];
	char from_date[20];
	char to_date[20];
	int roomNumber;
	float payment_advance;
	int booking_id;
};
class hotelmgnt :public customer
{
public:
	void checkin()
	{
		customer cust;

		cout << "\nEnter Customer Name (First Name): ";
		cin >> cust.name;

		cout << "\nEnter Phone: ";
		cin >> cust.phone[100];

		cout << "\nEnter Address (only city): ";
		cin >> cust.address;

		cout << "\nEnter From Date: ";
		cin >> cust.from_date;

		cout << "\nEnter to  Date: ";
		cin >> cust.to_date;
		cout << "\n Customer Checked-in Successfully..";


	}
};


class room : public hotelmgnt
{
public:
	char type;
	char stype;
	char ac;
	int roomNumber;
	int rent;
	int status;
	int  rooms;
};


class room2 :public room
{
public:
	void addroom()
	{
		room2 r;
		cout << "\nType AC/Non-AC (A/N) : ";
		cin >> r.ac;
		cout << "\nType Comfort (S/N) : ";
		cin >> r.type;
		cout << "\nType Size (B/S) : ";
		cin >> r.stype;
		cout << "\nDaily Rent : ";
		cin >> r.rent;
		r.status = 0;
		cout << "Room Added Successfully!"<<endl;

	}
};

class room3 :public room2
{
public:
	void displayroom()
	{
		room3 temproom;
		cout << "\nRoom Number: \t"  ;
		cin >> temproom.roomNumber;
		cout << "\nType AC/Non-AC (A/N): " ;
		cin >> temproom.ac;
		cout << "\nType Comfort (S/N): " ;
		cin >> temproom.type;
		cout << "\nType Size (B/S): " ;
		cin >> temproom.stype;
		cout << "\nRent: " ;
		cin >> temproom.rent;

	}
};

class roomnomber :public room3
{
public:
	void room()
	{
		
		cout << "\nEnter room number: ";
		cin >> rooms;
	}
};
class search :public roomnomber
{
public:
	void searchroom()
	{
		if (rooms == 1)
		{
			cout << "Room is reserved" << endl;

			if (rooms == 2)
			{
				cout << "Room is not available" << endl;
			}
		}
		else
		{
			cout << "Room not available" << endl;
		}


	}
};
class hotel1 :public search
{
public:
	void choose()
	{
		int choice{};
		while (choice != 5)
		{

			system("cls");
			cout << "\n\t\t\t\t*************************";
			cout << "\n\t\t\t\t SIMPLE HOTEL MANAGEMENT ";
			cout << "\n\t\t\t\t      * MAIN MENU *";
			cout << "\n\t\t\t\t*************************";
			cout << "\n\n\n\t\t\t1. Add Room";
			cout << "\n\t\t\t2. Display Room ";
			cout << "\n\t\t\t3.Check-in";
			cout << "\n\t\t\t4.Exit";
			cout << "\n\n\t\t\tEnter Your Choice: ";
			cin >> choice;

			switch (choice)
			{

			case 1:	room2::addroom();
				break;

			case 2: room3::displayroom();
				break;

			case 3:hotelmgnt::checkin();
				break;

			case 4: break;

			default:
			{
				cout << "\n\n\t\t\tWrong choice.....!!!";
				cout << "\n\t\t\tPress any key to   continue....!!";
			}

			}

		}

	}
};

int main()
{
	hotel1 Mgnt;
	Mgnt.choose();
	Mgnt.checkin();
	Mgnt.addroom();
	Mgnt.displayroom();
	Mgnt.room();
	Mgnt.searchroom();
	return 0;

}





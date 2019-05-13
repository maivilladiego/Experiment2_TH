#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
	char package;
	double hours,price;

	cout <<"What Package(A,B or C) did you purchased?" <<endl;
	cin >> package;

	switch (package)
		{
		case ('A'):
		case ('a'):
			cout <<"Package A: For P995/mo 10 hrs of access are provided. Additional hours are P20/hr. \n";
			cout <<"How many hours were used?" <<endl;
			cin >> hours;
			
			if (hours<=10)
				{
				price= 995;
				cout <<"Total amount due: P" << price <<".00";
				}
			else
			{
				price= (995+((hours-10)*20));
				cout <<"Total amount due: P" << fixed << showpoint << setprecision (2) <<price;
			}
			break;
			
		case ('B'):
		case ('b'):
			cout <<"Package B: For P1495/mo 20 hrs of access are provided. Additional hours are P10/hr. \n";
			cout <<"How many hours were used" <<endl;
				cin >> hours;
			
			if (hours<=20)
				{
				price= 1495;
				cout <<"Total amount due: P" << price <<".00";
				}

			else
			{
				price= (1495+((hours-20)*10));
				cout <<"The total amount due is: P" << fixed << showpoint << setprecision (2) <<price;
			}
			break;

		case ('C'):
		case ('c'):
			cout <<"Package C: For P1995/mo of unlimited access is provided. \n";
				price=1995;
				cout <<"Total amount due: P" << price <<".00";
			break;
		
		default:
				cout << "THIS IS INVALID! Please repeat it";

			break;	
		}

	_getch();
	return 0;

} 
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;
int main()

{    
	double thismonth,prevmonth,unpaid;
		cout<<"What is your meter(in gallons) readings this month?"; 
		cin >> thismonth; 

    	cout<<"\nWhat is your meter(in gallons)readings from the previous month?"; 
		cin >> prevmonth; 

    	cout<<"\How much is your unpaid balance? P";
		cin >> unpaid; 

		if (unpaid > 0)
		{
			cout <<"\nYour water bill is P " << fixed << showpoint << setprecision (2) << (35+(thismonth*1.10)+(prevmonth*1.10)+20+unpaid); 

		}
			else
				{
					cout <<"Your water bill is P " <<fixed << showpoint << setprecision (2) << (35+(thismonth*1.10)+(prevmonth*1.10));
				}

 	_getch();
	return 0;
}
#include <iostream>
#include <conio.h>
using namespace std;

int main ()
{
	int counter;

	cout << "Counting..." << endl;

	for (counter=1 ; counter<=10; counter++)
		{
			cout << counter << ", ";
		}

	int count;

	for (count=12;count<=30;count+=2)
		{
			if (count==30)
			{
				cout <<"30" <<endl;
			continue;
			}
				else
					{
						cout <<count<< ", ";
					}			

		}

	_getch();
	return 0;

}
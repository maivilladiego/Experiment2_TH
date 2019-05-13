#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int first = 0;
	int second = 1;
	int fibonacci;
	const int range = 20;

	cout << "Fibonacci Numbers: " << endl;

		for (int c = 0; c < range; c++)
		{
			if (range <= 1)
			fibonacci = range;
				else
				{
					fibonacci = first + second;
					first = second;
					second = fibonacci;
				}
		cout << fibonacci << ",";
		}


	_getch();
	return 0;
}
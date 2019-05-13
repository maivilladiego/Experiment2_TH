#include <iostream>
#include <conio.h>
using namespace std;

int main()

{
	int a,number,sum;
	bool exit = false;

		do	
			{
				sum=0;
				cout <<"Enter a number:";
				cin >> number;
					{
						if (number<1)
						{
							cout<<"Thank you!";
							exit=true;
						}
							else
							{
									for(a=1; a <= number; ++a)
									{
									sum += a;
									}
								cout <<"The sum of all whole numbers from 1 to "<<number<<" is "<<sum<<endl;
							}
					}
			} 

		while (!exit);

	_getch();
	return 0;

}
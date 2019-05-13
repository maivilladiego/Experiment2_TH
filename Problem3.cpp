#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>

using namespace std;

int main ()

{

  double valy,valz;
  int q,valx;

  valz = 2.5;

	cout << "Enter the value of x:";
	cin >> valx;

switch (valx)

{
	case 1:
    cout << "Enter the value of y:";
    cin >> valy;

     	if (1<valy && valy<5)
        {
			cout << fixed << showpoint << setprecision (2) <<"V = " << valx*valy*valz;
		}

			else if (valy >= 5)
			{
				cout << fixed << showpoint << setprecision (2) <<"V = " << valx+(valy/valz);
			}

		else
		{	
			cout << fixed << showpoint << setprecision (2) <<"V = " << valx+valy+valz;
		}	  
		
		break;

    case 2:
	cout << "Enter the value of y:";
	cin >> valy;  

		if (valy <= 5)
		{ 
			q = abs(valx-valy);
			cout << fixed << showpoint << setprecision (2) <<"V = " << q/valz;
		}

			else
			{
				cout << fixed << showpoint << setprecision (2) <<"V = " << valx-(sqrt(valy+valz));
			}
		
		break;

    default:

    	cout << "Enter the value of y:";
		cin >> valy;  	

      		cout << fixed << showpoint << setprecision (2) << "V = "<< valx+valy+valz;

}

	_getch();
	return 0;

}
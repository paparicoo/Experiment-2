//Problem 3
#include <iostream>
	#include <conio.h>
	#include <iomanip>
	#include <cmath>
	using namespace std;
	

	int main()
	{
		int x, y;
		float v;
		//
	

		cout << "Enter value for x" << endl;
		cin >> x;
		
		cout << "Enter value for y" << endl;
		cin >> y;
		//
		
		
		
		//
		switch(x)
		{
			case 1:
				if (x==1 && 1<y<5)
				v = x * y * 2.5;
				else if (x==1 && y>=5)
				v = x + y/2.5;
				break;
			
			case 2:
				if (x==2 && y<=5)
				v = abs((x - y) / 2.5);
				else if (x==2 && y>5)
				v = x - sqrt(y + 2.5);
				break;
				
			default:
				v = x + y + 2.5;
				break;
						
			}
			cout << setw(10);
			cout << fixed;
			cout << setprecision(2);
			cout << v;
			
			_getch ();
			    return 0;
			    
			
			}


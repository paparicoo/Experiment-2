#include<iostream>
#include<conio.h>
#include<string>



using namespace std;


int main()
{
	float hour, billA, billB;
	int a;
	
	cout << "Please indicate which package you are using" << endl;
	cout << "1 for A, 2 for B, 3 for C" << endl;
	cin >> a;
	cout << "Indicate your usage in hours" << endl;
	cin >> hour;
		
	billA = ( hour * 20 ) + 995; 
	billB = ( hour * 10) + 1495;
	{
	if (a=1)
	
	
	cout << billA<<"/"<<"month" << endl;
	
	else if (a=2)
	
	cout << billB<<"/"<<"month" << endl;
	
	else if (a=3)
	
	cout << "1995/month, no additional fees for extra hours" << endl;
	
	else
	
	cout << "Invalid" << endl;
	
	return 0;
	}
}


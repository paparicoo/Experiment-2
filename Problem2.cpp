//Problem 2
#include<iostream>
#include<conio.h>
#include<string>


using namespace std;


int main()
{
	
	float unpaidBal, bill, gallon, penaltyBill;
	
	cout << "Enter your water Consumption in Gallons" << endl;
	cin >> gallon;
	bill = (gallon * 1.10) + 35;
	cout << "Unpaid balance (if any), else put 0" << endl;
	cin >> unpaidBal;
	penaltyBill = bill + 20;
	if (unpaidBal>0)
	
	cout << "Php to be paid" << penaltyBill << endl;
	else if (UnpaidBal==0)
	
	cout <<"Php to be paid" << bill <<  endl;
 	else
	cout << "Invalid Input" << endl;
	
	_getch ();
	return 0;

}
	



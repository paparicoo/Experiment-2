//Problem 7
#include <conio.h>
#include <iostream>


using namespace std;
int main()
	    {
	        int x, y, sum; 
	        
	        cout << "Input first number" << endl;
	        cin >> x;
	        cout << "Input last number" << endl;
	        cin >> y;
	        
	        for ( int number = x; number <= y; number += x )
	        {
	           
	           sum += number; 
	        }
	        cout << "The summation from "<<x<<" to "<<y<<" is " << sum << endl; 
	        
	        _getch();
	        return 0;
	    }


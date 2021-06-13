/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 3.11.2020
Purpose: Program to print the reverse of a number. 
*/

#include <iostream>  
using namespace std;  
int main()  
{  
	int n, rev = 0, rem;    
	cout << "Enter any number: ";    
	cin >> n;
	/*
	while loop to reverse the number by
	finding reminder from deviding the number by 10
	and assigning value for 'rev' by multiplying it to 10
	and adding remainder and deviding the number by 10
	repetitively
	*/
	while(n!=0)    
	{    
		rem = n%10;      
		rev = rev*10 + rem;    
	    n/= 10;   
	}    
	cout << "Reversed Number: " << rev << endl;   
	system("pause");  
	return 0;  
} 

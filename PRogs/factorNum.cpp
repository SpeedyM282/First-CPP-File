/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 3.11.2020
Purpose: Write a program to add first seven terms of the following series using for loop:
1/!1+ 2/!2 + 3/!3 + ………………….
*/

#include<iostream>
using namespace std;

int main()
{
	int i, j, n;
	float fact = 1, sum = 0, div; 
	cout << "Enter any number: ";
	cin >> n;
	/*
	Nested loops to calculate value of factorial 
	and value of sum
	*/
	for (i = 1; i <= n; i++)
	{
		fact = 1;
		for (j = 1; j <= i; j++)
		{
			fact *= j; // To calculate factorial
		}
		div = i / fact; // To calculate division
		sum += div; // To calculate sum
	}
	cout << "Sum: " << sum << endl;
	return 0;
}

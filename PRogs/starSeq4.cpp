/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 3.11.2020
Purpose: Program to print Sequence.
*
**
***
****
*****
*****
****
***
**
*
*/

#include<iostream>
using namespace std;
  
int main()
{
	int n;
	cout << "Enter number any number: ";
	cin >> n;
	/*
	To print triangle
	*/
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
		{
		cout << "*";
		}
		cout << endl; // Ending line after each row
	}
	/*
	To print flipped over triangle
	*/
	for(int i = n; i >= 1; i--)
	{
		for(int j = 1; j <= i; j++)
		{
		cout << "*" ;
		}
		cout << endl; // Ending line after each row
	}
	system("pause");
	return 0;
}

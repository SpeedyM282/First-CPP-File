/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 3.11.2020
Purpose: Program to print star Sequences.
*
***
*****
*/

#include<iostream>
using namespace std;
  
int main()
{
	int n;
	cout << "Enter any odd number: ";
	cin >> n;
	/*
	for loop to print '*' by using integers 'i' and 'j'
	'i' is increasing by 2 untill it will be less or equal to inputted number
	'j' is increasing by 1 untill it will be less or equal to 'i' 
	*/
	for (int i=1; i<=n; i+=2)
	{
		for (int j=1; j<=i; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
    return 0;
}

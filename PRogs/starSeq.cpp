/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 3.11.2020
Purpose: Program to print stars Sequence.
*
**
***
****
*****
*/

#include<iostream>
using namespace std;
  
int main()
{
	int x;
	cout << "Enter any number: ";
	cin >> x;
	/*
	nested loops for printing '*' by incrementing value of 'i'-row
	and 'j'- column repetitively untill the value of 'i' is 
	less or equal to 'x' and value of 'j' is less or equal to 'i'
	*/
	for (int i=1; i<=x; i++)
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

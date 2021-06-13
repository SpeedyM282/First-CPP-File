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
	int n;
	cout << "Enter any number: ";
	cin >> n;
	/*
	nested loops to print star sequence by incrementing 'i'- row
	untill it will be less or equal to 'n'- the inputted number and
	'j'- space untill it will be less than 'n'- inputted number
	 and 'z'- * untill it will be less or equal to 'i'
	*/
	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j < n; j++)
		{
		cout << " ";
		}
		for(int z = 1; z <= i; z++)
		{
		cout << "*";
		}
		cout << endl;
	}
	system("pause");
    return 0;
}

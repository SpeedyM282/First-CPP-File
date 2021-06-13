/*
Name: Akhadbek Rizakulov
ID: 2010227
Date: 3.11.2020
Purpose: Program to calculate pow(x,n) i.e. to calculate xn 
*/

#include<iostream>
using namespace std;
  
int main()
{
    int x, n, i, res = 1; 
	cout << "Enter any integer and power for it: ";
    cin >> x >> n;
    /*
	for loop to calculate the value of x^n by 
	multiplying x repetitively
	*/
    for(i = 0; i < n; i++)
	{
        res = res * x;
    }
    cout << x << "^" << n << " = " << res;
	system("pause");
    return 0;
}

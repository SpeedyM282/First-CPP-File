#include<iostream>
using namespace std;

int main(){
	double n, i = 1.0, var = 1.0, del, sum = 0.0;
	double n1, i1 = 1.0, var1 = 1.0, del1, sum1 = 0.0;
	cout << "Please enter the number ";
	cin >> n;
	while(i <= n){
		var = var * i;
		del = i;
		sum += del / var;
		i++;
	}
	cout << sum << endl;
	cout << "Please enter the number ";
	cin >> n1;
	while( i1 <= n1 ){
		for(int j = 1; j <= i1; j++){
			var1 = var1 * i1;
			cout << "var1 : " << var1 << endl;
			break;
		}
		del1 = i1;
		sum1 += del1 / var1;
		cout << "sum1 : " << sum1 << endl;

		i1++;
	}
	cout << sum1 << endl;
	system("pause");
	return 0;
}

#include <iostream>
using namespace std;

#include <math.h>

int main(void){

	long double n;

	cin >> n;

	cout.setf(ios::fixed);
	cout.precision(0);
	if(ceil(n) != 0)
		cout << sqrt(n)+1;
	else
		cout << sqrt(n);
	
	return 0;
}
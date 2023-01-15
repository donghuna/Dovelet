#include <iostream>
using namespace std;

#include <math.h>

int main(void){

	long double n;

	cin >> n;

	cout.setf(ios::fixed);
	cout.precision(0);
	cout << ceil(sqrt(n));
	
	return 0;
}
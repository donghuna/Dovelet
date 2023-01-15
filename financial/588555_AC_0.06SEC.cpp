#include <iostream>
using namespace std;

int main(void){

	double pay, sum=0.0;

	for(int i=0; i<12; i++){
		cin >> pay;
		sum += pay;
	}

	cout.setf(ios::fixed);
	cout.precision(2);
	cout << "$" << sum/12;

	return 0;
}
#include <iostream>
using namespace std;

int main(void){
	float d,p;
	cin >> d >> p;
	cout.precision(5);
	cout.setf(ios_base::showpoint);
	cout << d*(p*0.01)*-1;

	return 0;
}
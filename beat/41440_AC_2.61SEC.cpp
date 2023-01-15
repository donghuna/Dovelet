#include <iostream>
using namespace std;

int main(void){

	int a, b, s, d;

	cin >> s >> d;
	
	b = (s - d)/2;
	a = s - b;

	if(b < 0 || a < 0 || (s-d)%2 != 0)
		cout << "impossible" << endl;
	else
		cout << a << " " << b << endl;
	

	return 0;
}
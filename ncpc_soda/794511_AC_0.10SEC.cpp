#include <iostream>
using namespace std;

int main(void){

	int e, f, g;
	cin >> e >> f >> g;
	e += f;
	
	int sum = 0;
	while(e >= g){
		sum += e/g;
		int tmp;
		tmp = e%g;
		e /= g;
		e += tmp;
	}

	cout << sum;
	return 0;
}
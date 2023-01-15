#include <iostream>
using namespace std;

int main(void){

	int a, b, gcd, lcm;
	cin >> a >> b;

	lcm = a*b;
	while(a!=0 && b!=0){
		if(a <= b)	b -= a;
		else			a -= b;
	}

	if(a==0)		cout << b << " " << lcm/b;
	else			cout << a << " " << lcm/a;

	return 0;
}
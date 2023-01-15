#include <iostream>
using namespace std;

int gcd(int c1, int c2);

int main(void){

	int a,b,c,d;
	int s, m;
	int lcm, gcd1;

	cin >> a >> b >> c >> d;		//input

	s = b-a;		// 1-a

	gcd1 = gcd(b,d);

	lcm = (b*d)/gcd1;
	s = (s*(lcm/b)) - (c*(lcm/d));
	m = lcm;

	if(s/gcd(s, m) == 0)
		cout << 0;
	else
		cout << s/gcd(s, m) << "/" << m/gcd(s,m);

	return 0;
}

int gcd(int c1, int c2){
	while(c1!=0 && c2!=0){
		if(c1 < c2)
			c2 -= c1;
		else
			c1 -= c2;
	}
	if(c1 == 0)
		return c2;
	else
		return c1;
}
#include <iostream>
using namespace std;

int main(void){

	int a, b, c;
	cin >> a >> b;
	c = a* b;
	while(a!=0 && b!=0){
		if(a > b)	a %= b;
		else		b %= a;
	}
	if(a == 0)
		cout <<	b << " " << c/b;
	else
		cout << a << " " << c/a;

	return 0;
}

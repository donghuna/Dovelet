#include <iostream>
using namespace std;

int main(void){

	int a, b, c, d;
	int temp;

	cin >> a >> b >> c >> d;

	if(a < b){
		temp = a;
		a = b;
		b = temp;
	}
	if(c < d){
		temp = c;
		c = d;
		d = temp;
	}

	if( (c*100)/a < (d*100)/b )
		if((c*100)/a > 100)
			cout << "100%" << endl;
		else
			cout << (c*100)/a << "%" << endl;
	else
		if((d*100)/b > 100)
			cout << "100%" << endl;
		else
			cout << (d*100)/b << "%" << endl;




	return 0;
}
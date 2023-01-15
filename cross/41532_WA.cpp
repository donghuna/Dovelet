#include <iostream>
using namespace std;

int main(void){

	int a, b, c, d, temp;
	cin >> a >> b >> c >> d;

	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if(c > d){
		temp = c;
		c = d;
		d = temp;
	}

	if( ( c<a && ( d>a && d<b ) ) || (( a>c && c<b) && b<d ) )
		cout << "cross" << endl;
	else
		cout << "not cross" << endl;

	return 0;
}
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

	if( ((a<c && a<d) && (b>c && b>d)) || (a>c && b<d) )
		cout << "not cross" << endl;
	else
		cout << "cross" << endl;

	return 0;
}
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

	if(c < a && a < d){
		cout << "cross" << endl;
		return 0;
	}
	if(c < b && b < d){
		cout << "cross" << endl;
		return 0;
	}
	cout << "not cross" << endl;

	return 0;
}
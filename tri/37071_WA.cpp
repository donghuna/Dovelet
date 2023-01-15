#include <iostream>
using namespace std;

int main(void){

	int a, b, c;
	int temp;
	cin >> a >> b >> c;

	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}
	if(b > c){
		temp = b;
		b = c;
		c = temp;
	}
	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}

	if( a+b > c)
		cout << "YES" << endl;
	else
		cout << "NO" << endl;

	return 0;
}
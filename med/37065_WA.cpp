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
	cout << b << endl;

	return 0;
}
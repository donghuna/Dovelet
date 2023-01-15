#include <iostream>
using namespace std;

int main(void){

	int a=0, b=0, c=0, input;

	for(int i=0; i<7; i++){
		cin >> input;
		a += input - (input/10)*10;
		b += (input/10)*10 - (input/100)*100;
		c += (input/100)*100;
	}
	cout << a << " " << b << " " << c;
	return 0;
}
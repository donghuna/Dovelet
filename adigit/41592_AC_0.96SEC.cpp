#include <iostream>
using namespace std;

int main(void){

	int a=0, b=0, c=0, input;

	for(int i=0; i<7; i++){
		cin >> input;
		if(input/100 != 0)
			c += input;
		else if(input/10 != 0)
			b += input;
		else
			a += input;
	}
	cout << a << " " << b << " " << c;
	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int a, b, temp, gcd=0;
	cin >> a >> b;

	if(a > b){
		temp = a;
		a = b;
		b = temp;
	}

	for(int i=1; i<=a; i++){
		if(a%i == 0){
			if( b%(a/i) == 0){
				gcd = a/i;
				break;
			}
		}
		if(gcd!=0)
			break;
	}
	cout << gcd << " " << gcd*b;

	return 0;
}
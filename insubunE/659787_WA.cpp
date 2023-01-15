#include <iostream>
using namespace std;

int main(void){

	int a, b;
	cin >> a >> b;
	for(int i=1; i<=b; i++){
		if(b%i!=0)
			continue;
		if(i*-1+b*-1==a*-1)
			cout << "(x-" << i <<")(x-" << b << ")";
	}
	return 0;
}
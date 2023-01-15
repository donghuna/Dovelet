#include <iostream>
using namespace std;

int main(void){

	int a, b;
	int flag=0;
	cin >> a >> b;
	for(int i=1; i<=b; i++){
		if(b%i!=0)
			continue;
		if(i*-1+b*-1==a*-1){
			cout << "(x-" << i <<")(x-" << b << ")";
			flag = 1;
		}
	}
	if(flag == 0)
		cout << "impossible";

	return 0;
}
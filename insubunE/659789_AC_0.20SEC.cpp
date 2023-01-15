#include <iostream>
using namespace std;

int main(void){

	int a, b, c;
	int flag=0;
	cin >> a >> b;
	for(int i=1; i<=b; i++){
		if(b%i!=0)
			continue;
		c = b/i;
		if(i*-1+c*-1==a*-1){
			cout << "(x-" << i <<")(x-" << c << ")";
			flag = 1;
			break;
		}
	}
	if(flag == 0)
		cout << "impossible";

	return 0;
}
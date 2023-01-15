#include <iostream>
using namespace std;

int main(void){

	int x;
	cin >> x;

	for(int i=1;; i*=10){
		if(i*10>x)	break;
		int tmp = (x%(i*10))/i;
		x/=i*10;
		if(tmp>=5)
			x+=1;
		x*=i*10;
	}
	cout << x;

	return 0;
}
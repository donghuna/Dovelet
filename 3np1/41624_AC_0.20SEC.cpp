#include <iostream>
using namespace std;

int main(void){
	int a;
	cin >> a;
	while(a!=1){
		cout << a << " ";
		if(a%2==0)
			a/=2;
		else
			a=a*3+1;		
	}
	cout << 1;

	return 0;
}
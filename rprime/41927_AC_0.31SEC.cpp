#include <iostream>
using namespace std;

int main(void){

	int a, b;
	cin >> a >> b;

	while(a!=0 && b!=0){
		if(a<=b)
			b -= a;
		else
			a -= b;		
	}
	if((a==0 && b==1) || (b==0 && a==1))
		cout << "yes";
	else
		cout << "no";
		
	return 0;
}
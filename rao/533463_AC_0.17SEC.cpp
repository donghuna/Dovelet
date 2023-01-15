#include <iostream>
using namespace std;

int main(void){

	int a,b,c,temp;

	cin >> a >> b >> c;
	if(a>b){
		temp=b;
		b = a;
		a = temp;
	}
	if(b>c){
		temp=c;
		c = b;
		b = temp;
	}

	if(a*a+b*b==c*c)
		cout << "right";
	else if(a*a+b*b>c*c)
		cout << "acute";
	else
		cout << "obtuse";

	return 0;
}
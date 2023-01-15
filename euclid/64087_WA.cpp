#include <iostream>
using namespace std;

int lcm(int a, int b){
	while(true){
		if(a<b){
			if(b%a==0)	return a;
			else	b=b%a;
		}
		else{
			if(a%b==0)	return b;
			else	a=a%b;
		}
	}
}

int main(void){

	int a, b;
	cin >> a >> b;

	cout << lcm(a,b) << " " << (a*b)/lcm(a,b);
	return 0;
}
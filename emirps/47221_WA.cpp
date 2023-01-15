#include <iostream>
#include <cmath>
using namespace std;

bool Func1(int a);
int Func2(int a);

int main(void){

	int n;
	cin >> n;

	if(Func1(n) == true)
		if(Func1(Func2(n)) == true)
			cout << n << " is an emirp";
		else
			cout << n << " is a prime";
	else
		cout << n << " is not prime";		

	return 0;
}
bool Func1(int a){
	for(int i=2; i<sqrt((double)a); i++)
		if(a%i == 0)	return false;
	return true;
}
int Func2(int a){
	int b=0;
	while(a > 0){
		b*=10;
		b+=a-(a/10*10);
		a/=10;
	}
	return b;
}

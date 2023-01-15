#include <iostream>
using namespace std;

int func(int n);

int main(void){
	
	int A, B;
	int lenA=0, lenB=0;
	cin >> A >> B;

	lenA=func(A);
	lenB=func(B);
	(lenA > lenB) ? cout << lenA : cout << lenB;

	return 0;
}

int func(int n){
	int len=0;
	while(true){
		if(n==1)
			break;
		if(n%2 == 0)
			n/=2;
		else
			n = n*3 +1;
		len++;
	}
	return ++len;
}
#include <iostream>
using namespace std;

int func(int n);

int main(void){
	
	int A, B, temp;
	int len, max=0;
	cin >> A >> B;

	if(A > B){
		temp = A;
		A = B;
		B = temp;
	}
	for(int i=A; i<=B; i++){
		len = func(i);
		if(max < len)
			max = len;
	}
	cout << max;

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

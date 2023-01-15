#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int D, K;
	int A, B, T, Temp;
	cin >> D >> K;

	
	for(i=1; i<K; i++){
		A = K;
		B = K-i;
		for(j=1; j<D-1; j++){
			T = A-B;
			if(T>B)	break;
			Temp = B;
			B = T;
			A = Temp;
		}
		if(j==D-1){	cout << B << " " << A;	break;}
	}

	return 0;
}
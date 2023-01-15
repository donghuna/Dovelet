#include <iostream>
using namespace std;

int main(void){
	
	int i,N,C,B,T;
	int count, max=0;
	cin >> N;
	for(i=1; i<=N; i++){
		C=N;
		B=i;
		count=1;
		while(true){
			count++;
			T=C-B;
			if(T<0)	break;
			C=B;
			B=T;
		}
		if(count>max)	max = count;
	}
	cout << max;

	return 0;
}
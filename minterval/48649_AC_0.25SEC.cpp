#include <iostream>
using namespace std;

int main(void){

	int i, j, c=0, max=INT_MIN, sum=0;
	int n, Arr[2000] = {0};

	while(true){
		cin >> n;
		if(n==0)	break;
		Arr[c++] = n;
	}

	for(i=0; i<c; i++){
		sum = 0;
		for(j=i; j<c; j++){
			sum += Arr[j];
			if(sum > max){
				max = sum;
			}
		}
	}
	cout << max;
	return 0;
}
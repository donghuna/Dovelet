#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int N, K;
	cin >>  K >> N;

	long long T = 1;
	long long count = 0;
	while(T<N){
		T-=1;
		T+=K;
		++count;
	}

	cout << count * 100;

	return 0;
}
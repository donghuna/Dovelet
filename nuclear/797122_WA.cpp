#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int N, K;
	cin >>  K >> N;

	int T = 1;
	int count = 0;
	while(T<N){
		T-=1;
		T+=K;
		++count;
	}

	cout << count;

	return 0;
}
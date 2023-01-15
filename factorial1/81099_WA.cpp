#include <iostream>
using namespace std;

int main(void){

	int N;
	int sum=1, s=1;
	cin >> N;

	for(int i=1; i<=N; i++){
		sum *= i;
		s *= i;
		while(sum%10==0)
			sum /= 10;
		sum = sum-(sum/10)*10;
	}
	cout << sum;

	return 0;
}
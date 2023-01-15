#include <iostream>
using namespace std;

int main(void){

	int N;
	int sum=1;
	cin >> N;

	for(int i=1; i<=N; i++){
		sum *= i;
		if(sum%10==0)
			sum /= 10;
		else
			sum = sum-(sum/10)*10;
	}
	cout << sum-(sum/10)*10;

	return 0;
}
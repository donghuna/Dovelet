#include <iostream>
using namespace std;

int main(void){

	int N;
	int sum=0;
	int sum1=0;

	cin >> N;
	for(int i=1; i<=N; i++){
		sum1=0;
		for(int j=1; j<=i; j++){
			sum1+=j;
		}
		sum+=sum1;
	}
	cout << sum;

	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int N;
	int tmp = 0, nu = 0;
	int sum = 0;

	cin >> N;
	for(int i=0; i<N; i++){
		cin >> tmp;
		if(tmp!=0)
			nu ++;
		else
			nu = 0;
		sum += nu;
	}
	cout << sum;

	return 0;
}
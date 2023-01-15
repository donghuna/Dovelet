#include <iostream>
using namespace std;

int main(void){

	int N;
	cin >>N;

	while(N--){
		int sum=0, temp;
		int K;
		cin >> K;
		while(K--){
			cin >> temp;
			sum += temp-1;
		}
		cout << sum+1 << endl;
	}

	return 0;
}
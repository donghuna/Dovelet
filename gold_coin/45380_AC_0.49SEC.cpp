#include <iostream>
using namespace std;

int main(void){

	int N, sum=0, count=0;
	cin >> N;

	for(int i=1;; i++){
		for(int j=0; j<i; j++){
			if(count >= N){
				cout << N << " " << sum;
				return 0;
			}				
			sum+= i;
			count++;
		}
	}
	return 0;
}
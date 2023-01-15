#include <iostream>
using namespace std;

int main(void){

	int N;
	cin >> N;

	for(int i=6; i<N; i+=2){
		int sum=0;
		for(int j=1; j<i; j++){
			if(i%j==0)
				sum+=j;
		}
		if(sum == i)
			cout << i << endl;
	}
	return 0;
}
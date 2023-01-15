#include <iostream>
using namespace std;

int main(void){
	int N, sum=0, avr, count=0;
	cin >> N;
	int* ND = new int[N];
	for(int i=0; i<N; i++){
		cin >> ND[i];
		sum += ND[i];
	}
	avr=sum/N;
	for(int i=0; i<N; i++){
		if(ND[i] - avr > 0)
			count += ND[i] - avr;
	}
	cout << "The minimum number of moves is " << count << ".";

	return 0;
}
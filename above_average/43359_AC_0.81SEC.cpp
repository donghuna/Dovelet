#include <iostream>
using namespace std;

int main(void){

	int N, sum=0, count =0;
	float avr;
	cin >> N;
	int* ND = new int[N];
	for(int i=0; i<N; i++){
		cin >>ND[i];
		sum += ND[i];
	}
	avr = sum/N;
	for(int i=0; i<N; i++){
		if((float)ND[i] > avr)
			count++;
	}
	printf("%2.3f%%", count*100/(float)N);
	return 0;
}
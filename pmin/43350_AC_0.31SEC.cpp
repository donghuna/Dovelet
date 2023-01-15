#include <iostream>
using namespace std;

int main(void){

	int N, min=INT_MAX;
	cin >> N;
	int* ND = new int[N];

	for(int i=0; i<N; i++){
		cin >> ND[i];
		if(ND[i] < min)
			min = ND[i];
	}
	for(int i=0; i<N; i++){
		if(ND[i] == min){
			cout << i+1 << " ";
		}
	}
	return 0;
}
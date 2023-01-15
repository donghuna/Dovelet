#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

	int i;
	int N, Sum=0;
	cin >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++){
		cin >> nD[i];
		Sum+=nD[i];
	}
	sort(nD,nD+N);
	cout << ((Sum/N)-nD[0])+(nD[N-1]-(Sum/N))+(nD[N-1]-nD[0]);

	return 0;
}
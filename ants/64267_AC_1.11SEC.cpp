#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){

	int i;
	int L, N;
	
	cin >> L >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++)
		cin >> nD[i];

	sort(nD, nD+N);

	int center=INT_MAX;
	int index;
	for(i=0; i<N; i++){
		if(abs(L/2-nD[i])<center){
			center = abs(L/2-nD[i]);
			index = nD[i];
		}
	}
	if(index>L/2)	index = L-index;

	(nD[0]>L-nD[N-1])?cout<<index<<" "<<nD[N-1]:(cout<<index<<" "<<L-nD[0]);
	
	return 0;
}
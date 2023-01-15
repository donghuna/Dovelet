#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){

	int N, sum=0, min=INT_MAX, index;
	int i;
	cin >> N;
	int* nD = new int[N];

	for(int i=0; i<N; i++){
		cin >> nD[i];
		sum += nD[i];
	}
	sort(nD, nD+N);
	for(i=0; i<N; i++){
		if( abs(nD[i] - sum/N) < min)
			min = abs(nD[i] - sum/N);
		else
			break;
	}
	index = nD[i-1];
	sum = 0;
	for(i=0; i<N; i++)
		sum += abs(nD[i] - index);
	cout << sum;
	
	return 0;
}
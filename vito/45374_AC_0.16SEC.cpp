#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(void){

	int N, sum=0, min=INT_MAX, index;
	int i;
	cin >> N;
	int* nD = new int[N];

	for(i=0; i<N; i++){
		cin >> nD[i];
		sum += nD[i];
	}
	sort(nD, nD+N);

	index = nD[N/2];
	sum = 0;
	for(i=0; i<N; i++)
		sum += abs(nD[i] - index);
	cout << sum;
	
	return 0;
}
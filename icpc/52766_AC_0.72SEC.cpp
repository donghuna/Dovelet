#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

	int N;
	cin >> N;
	int* nD = new int[N];

	for(int i=0; i<N; i++)
		cin >> nD[i];

	sort(nD, nD+N);
	int sum=0;
	for(int i=1; i<N-1; i++)
		sum += nD[i];
	cout << sum / (N-2);
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

	int N;
	cin >> N;
	int* nD = new int[N];
	for(int i=0; i<N; i++)
		cin >> nD[i];

	if(N==1)	{ cout << nD[0]; return 0;}

	sort(nD, nD+N);
	for(int i=0; i<N/2; i++)
		cout << nD[i] << " " << nD[N-i-1] << " ";
	if(N%2!=0) cout << nD[N/2];


	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b){
	return a < b;
}

int main(void){

	int i, j;
	int N;
	cin >> N;
	int* nD = new int[N];
	// input
	for(i=0; i<N; i++)
		cin >> nD[i];

	sort(nD, nD+N, cmp);
	while(true){
		sort(nD, nD+N);
		if(nD[1]==0)	break;
		for(i=1; i<N; i++)
			nD[i]%=nD[0];
		nD[0]=0;
	}
	cout << nD[N-1];


	return 0;
}

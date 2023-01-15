#include <iostream>
#include <algorithm>
#include <search.h>
using namespace std;

int cmp(int a, int b){
	return a>b;
}

int main(void){

	int i;
	int N;
	cin >> N;
	int* nD = new int[N];
	int* oD = new int[N];

	for(i=0; i<N; i++){
		cin >> nD[i];
		oD[i] = nD[i];
	}

	sort(oD, oD+N, cmp);

	int* result;
	
	for(i=0; i<N; i++){
		result = find(oD, oD+N, nD[i]);
		cout << result-oD+1 << endl;
	}

	return 0;
}
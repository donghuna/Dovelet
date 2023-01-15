#include <iostream>
#include <algorithm>
#include <search.h>
using namespace std;

int cmp(const void *va, const void *vb){
	int *p, *q;
	p = (int*)va;
	q = (int*)vb;
	return *p-*q;
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

	sort(oD, oD+N);

	int *p;
	for(i=0; i<N; i++){
		p = (int*) bsearch( &nD[i], oD, N, sizeof(int), cmp);
		cout << N-(p-oD) << endl; 
	}

	return 0;
}
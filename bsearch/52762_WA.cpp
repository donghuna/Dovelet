#include <iostream>
#include <search.h>
using namespace std;

int cmp(const void *va, const void *vb){
	int *p, *q;

	p = (int*)va;
	q = (int*)vb;

	return *p - *q;
}

int main(void){

	int N, temp, F;
	int *loc;
	
	cin >> N;
	
	int* nD = new int[N];

	for(int i=0; i<N; i++)
		cin >> nD[i];
	cin >> F;

	loc = (int*) bsearch(&F, nD, N, sizeof(int), cmp);
	cout << loc-nD+1;


	return 0;
}
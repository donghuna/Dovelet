#include <iostream>
#include <algorithm>
using namespace std;

int cmt(const void* a, const void* b){
	int com1 = *((int*)a);
	int com2 = *((int*)b);
	if(com1 < com2)
		return 1;
	else if(com1 == com2)
		return 0;
	else
		return -1;
}

int main(void){

	int i, j;
	int N, R, Q;
	int s, e;
	
	cin >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++)
		nD[i] = i+1;

	cin >> R;
	for(i=0; i<R; i++){
		cin >> s >> e;
		qsort((void *)(nD+s-1), e-s+1, sizeof(nD[0]), cmt);
	}

	cin >> Q;
	int tmp;
	for(i=0; i<Q; i++){
		cin >> tmp;
		cout << nD[tmp-1] << endl;
	}
	

	return 0;
}
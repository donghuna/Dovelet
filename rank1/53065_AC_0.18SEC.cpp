#include <iostream>
#include <algorithm>
using namespace std;

int cmp(int a, int b){
	return a>b;
}

int main(void){

	int i;
	int beforev=0, BR, rank=0;
	int N;
	cin >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++)
		cin >> nD[i];

	sort(nD, nD+N, cmp);

	for(i=0; i<N; i++){
		cout << nD[i] << " ";
		if(beforev == nD[i]){	cout << BR << endl;	rank++;}
		else{						cout << ++rank << endl;	beforev = nD[i]; BR = rank;}
	}
	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

void func(int *nD, int s, int e);

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
		func(nD, s, e);
	}

	cin >> Q;
	int tmp;
	for(i=0; i<Q; i++){
		cin >> tmp;
		for(j=0; j<N; j++){
			if(tmp == nD[j]){
				cout << j+1 << endl;
				break;
			}
		}
	}
	

	return 0;
}

void func(int *nD, int s, int e){
	int i;
	int tmp, com;
	com = ( (e-s)%2==1 )?((e-s)/2)+1:((e-s)/2);

	for(i=0; i<com; i++){
		tmp = nD[s+i-1];
		nD[s+i-1] = nD[e-i-1];
		nD[e-i-1] = tmp;
	}
}
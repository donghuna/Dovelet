#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void func(int mD[], int nD[], int N);
int main(void){

	int i;
	int N;

	cin >> N;
	int *nD = new int[N];
	int *mD = new int[N];

	for(i=0; i<N; i++)
		mD[i] = 0;

	for(i=0; i<N; i++){
		cin >> nD[i];
		mD[nD[i]-1]++;
	}

	for(i=0; i<N; i++)
		func(mD, nD, N);
	

	vector<int> V;
	for(i=0; i<N; i++)
		if(nD[i] != 0)
			V.push_back(nD[i]);
	
	sort(V.begin(), V.end());
	int com = 0;
	int cnt = 0;
	for(i=0; i<V.size(); i++){
		if(V[i] != com){
			com = V[i];
			cnt ++;
		}
	}
	cout << cnt << endl;
	com = 0;
	for(i=0; i<V.size(); i++){
		if(V[i] != com){
			com = V[i];
			cout << com << endl;
		}
	}
		

	return 0;
}

void func(int mD[], int nD[], int N){
	int i;

	for(i=0; i<N; i++){
		if(mD[i] == 0)
			nD[i] = 0;
		mD[i] = 0;
	}
	
	for(i=0; i<N; i++)
		mD[nD[i]-1]++;
}

/*

10
6
9
8
7
8
9
7
7
4
3

our answer

1
7

your answer

2
4
7

*/

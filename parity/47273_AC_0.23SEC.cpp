#include <iostream>
using namespace std;

int main(void){

	int i, j, cindex, rindex;
	int N, CParity=0, RParity=0;
	cin >> N;
	int** nD = new int*[N+1];
	for(i=0; i<=N; i++)
		nD[i] = new int[N+1];

	for(i=0; i<N; i++){
		int colsum=0;
		for(j=0; j<N; j++){
			cin >> nD[i][j];
			colsum+=nD[i][j];
			if(nD[N][j] < 0)	nD[N][j]=nD[i][j];
			else					nD[N][j]+=nD[i][j];
		}
		nD[i][j] = colsum;
		if(colsum %2 != 0){
			if(CParity != 0){	cout << "error";	return 0;}
			CParity++;
			cindex = i;
		}
	}
	
	for(i=0; i<N; i++){
		if(nD[N][i] %2 != 0){
			if(RParity != 0){	cout << "error"; return 0;}
			RParity++;
			rindex = i;
		}
	}
	if(CParity == 1)	cout << "change bit (" << cindex+1 << "," << rindex+1 << ")";
	else	cout << "ok";

	return 0;
}


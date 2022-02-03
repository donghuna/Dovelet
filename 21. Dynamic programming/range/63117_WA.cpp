#include <iostream>
using namespace std;

bool FindZero(int** nD, int i, int j){
	if(nD[i][j]!=0&&nD[i-1][j]!=0&&nD[i-1][j-1]!=0&&nD[i][j-1]!=0)	return false;
	else	return true;
}

int CMin(int** nD, int i, int j){
	int a = nD[i-1][j-1];
	int b = nD[i-1][j]<=nD[i][j-1]?nD[i-1][j]:nD[i][j-1];
	return a<=b?a:b;
}

int main(void){

	int i,j,k;
	int EM=0;
	int N;
	char tmp[250];

	cin >> N;
	int** nD= new int*[N];
	int* Output = new int[N+1];

	for(i=0; i<N; i++){
		Output[i] = 0;
		nD[i] = new int[N];
		cin >> tmp;
		for(j=0; j<N; j++)		nD[i][j] = tmp[j]-'0';
	}
	Output[i] = 0;

	for(i=1; i<N; i++){
		for(j=1; j<N; j++){
			if(FindZero(nD,i,j)==false){
				nD[i][j] = CMin(nD, i, j)+1;
				for(k=nD[i][j]; k>=2; k--)	Output[k]++;
			}
		}
	}

	for(i=2; i<=N; i++){
		if(Output[i] > 0){
			cout << i << " " << Output[i] << endl;
			EM=1;
		}
	}
	if(EM==0)	cout << 0;
	return 0;
}
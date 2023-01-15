#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N, tmp;
	int nD[101][101] = {0};

	cin >> N;
	
	for(i=1; i<=N; i++){
		cin >> tmp;
		for(j=0; j<N; j++){
			if(nD[i-tmp-1][j] == 0){
				nD[i-tmp-1][j] = i;
				break;
			}
		}
	}

	for(i=N-1; i>=0; i--)
		for(j=N-1; j>=0; j--)
			if(nD[j][i]!=0)
				cout << nD[j][i] << " ";
	
	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N;

	cin >> N;
	int *nD = new int[N*(N-1)+1];
	for(i=0; i<=N*(N-1); i++)
		nD[i] = 0;

	nD[0] = nD[1] = 1;
	for(j=2; j<=N; j++){
		for(i=N*(N-1)-1; i>=0; i--){
			if(nD[i] > 0){
				nD[i+j] += nD[i];
			}
		}
	}

	int cnt = 0;
	for(i=1; i<=N; i++)
		cnt += i;
	cout << nD[cnt/2]/2;

	return 0;
}

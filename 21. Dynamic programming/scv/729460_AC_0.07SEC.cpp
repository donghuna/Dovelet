#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N;

	cin >> N;
	int **nD = new int*[N+1];
	for(i=0; i<=N; i++)
		nD[i] = new int[N+1];

	for(i=0; i<=N; i++)
		for(j=0; j<=N; j++)
			nD[i][j] = 0;

	for(i=1; i<=N; i++)
		for(j=1; j<=N; j++)
			cin >> nD[i][j];

	for(i=1; i<=N; i++)
		for(j=1; j<=N; j++)
			nD[i][j] += (nD[i-1][j] > nD[i][j-1])?nD[i-1][j] : nD[i][j-1];

	cout << nD[N][N];

	return 0;
}
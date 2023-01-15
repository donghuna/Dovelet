#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N;
	int cnt, dir=1, term;
	int x, y;

	cin >> N;
	term = N-1;
	int** nD = new int*[N];
	for(i=0; i<N; i++)
		nD[i] = new int[N];
	
	for(i=0; i<N; i++)
		nD[0][i] = i+1;
	x = N-1;
	y = 0;
	cnt = N;

	while(cnt < N*N){
		for(i=0; i<term; i++){
			y+=dir;
			nD[y][x] = ++cnt;
		}
		dir *= -1;
		for(i=0; i<term; i++){
			x+=dir;
			nD[y][x] = ++cnt;
		}
		term--;
	}

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			printf("%5d", nD[i][j]);
		}
		cout << endl;
	}
	return 0;
}

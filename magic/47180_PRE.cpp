#include <iostream>
using namespace std;

int main(void){

	int i;
	int N;
	cin >> N;
	int** nD = new int*[N];
	for(i=0; i<N; i++)
		nD[i] = new int[N];

	int x=N/2, y=0;
	int count = 0;
	while(count < N*N){
		count++;
		nD[y][x] = count;
		
		if(count % N == 0){
			if(y == N-1)	y=0;
			else				y++;
		}else{
			if(y == 0)		y=N-1;
			else				y--;
			if(x == N-1)	x=0;
			else				x++;
		}
	}
	for(i=0; i<N; i++){
		for(int j=0; j<N; j++)
			cout << nD[i][j] << " ";
		cout << endl;
	}

	return 0;
}
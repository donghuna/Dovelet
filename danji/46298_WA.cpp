#include <iostream>
#include <algorithm>
using namespace std;

void func(int** nD, int y, int x, int N, int danji);

int main(void){

	int i,j, count=2;
	int N;
	cin >> N;
	int** nD = new int*[N];
	for(i=0; i<N; i++)				//배열생성
		nD[i] = new int[N];

	for(i=0; i<N; i++)				//입력받음
		for(j=0; j<N; j++)
			cin >> nD[i][j];

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(nD[i][j] != 1)	continue;
			nD[i][j] = ++count;
			func(nD, i, j, N, count);
		}
	}
	count -= 2;
	int* cD = new int[count];
	for(i=0; i<count; i++)
		cD[i] = 0;

	for(i=0; i<N; i++){
		for(j=0; j<N; j++){
			if(nD[i][j] != 0)
				cD[nD[i][j]-2]++;
		}
	}
	sort(cD, cD+count);
	cout << count << endl;
	for(i=0; i<count; i++)
		cout << cD[i] << endl;

	return 0;
}

void func(int** nD, int y, int x, int N, int danji){
	//상
	if(y!=0 && nD[y-1][x] == 1){
		nD[y-1][x] = danji;
		func(nD, y-1, x, N, danji);
	}
	//하
	if(y!=N-1 && nD[y+1][x] == 1){
		nD[y+1][x] = danji;
		func(nD, y+1, x, N, danji);
	}
	//좌
	if(x!=0 && nD[y][x-1] == 1){
		nD[y][x-1] = danji;
		func(nD, y, x-1, N, danji);
	}
	//우
	if(x!=N-1 && nD[y][x+1] == 1){
		nD[y][x+1] = danji;
		func(nD, y, x+1, N, danji);
	}
}


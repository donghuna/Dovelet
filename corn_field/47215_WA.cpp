#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N, B, K;
	
	cin >> N >> B >> K;
	int** nD = new int*[N];
	for(i=0; i<N; i++){
		nD[i] = new int[N];
		for(j=0; j<N; j++)
			cin >> nD[i][j];
	}

	while(K--){
		int x, y;
		int max=0, min=INT_MAX;
		cin >> y >> x;
		for(i=y-1; i<y+B; i++){
			for(j=x-1; j<x+B; j++){
				if(max < nD[i][j])	max = nD[i][j];
				if(min > nD[i][j])	min = nD[j][j];
			}
		}
		cout << max - min << endl;
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int i;
	int N, Curr=0, Count=1;
	cin >> N;
	int** nD= new int*[N];
	for(i=0; i<N; i++){
		nD[i] = new int[4];
		cin >> nD[i][0] >> nD[i][1] >> nD[i][2];
		nD[i][3] = 0;
	}
	nD[0][3]=1;

	while(Count<N){
		for(i=0; i<N; i++){
			if(nD[i][3]==0 && sqrt(pow((double)nD[Curr][0]-nD[i][0],2)+pow((double)nD[Curr][1]-nD[i][1],2))==nD[Curr][2]+nD[i][2]){
				nD[i][3] = 1;
				Curr=i;
				Count++;
				break;
			}
		}
	}
	cout << nD[Curr][0] << " " << nD[Curr][1];


	return 0;
}
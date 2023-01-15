#include <iostream>
using namespace std;

typedef struct mD{
	int num;
	int DTime;
	int BTime;
}mD;


int main(void){

	int M, Time=0;
	int i,j;
	cin >> M;

	mD* A = new mD[M];
	for(i=0; i<M; i++)
		cin >> A[i].num >> A[i].DTime >> A[i].BTime;

	if(M == 1)	cout << 0;
	for(i=0; i<M; i++){
		for(j=i+1; j<M; j++){
			if(A[j].DTime > A[i].DTime+A[i].BTime)	break;
			Time += (A[i].DTime+A[i].BTime) - A[j].DTime;
		}
	}
	printf("%0.1f", Time/(float)M);

	return 0;
}
#include <iostream>
using namespace std;

typedef struct mD{
	int num;
	int DTime;
	int BTime;
}mD;


int main(void){

	int M, Time=0, curr=0;
	int i,j;
	cin >> M;

	mD* A = new mD[M];
	for(i=0; i<M; i++)
		cin >> A[i].num >> A[i].DTime >> A[i].BTime;

	if(M == 1)	cout << 0;
	curr = A[0].DTime+A[0].BTime;
	for(i=1; i<M; i++){
		if(curr > A[i].DTime){
			Time += curr-A[i].DTime;
			curr += A[i].BTime;
		}
		else
			curr = A[i].DTime + A[i].BTime;	
	}
	printf("%0.1f", Time/(float)M);

	return 0;
}
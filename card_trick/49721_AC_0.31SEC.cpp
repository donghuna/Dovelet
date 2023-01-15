#include <iostream>
using namespace std;

int main(void){

	int i;
	int N;
	cin >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++)
		nD[i] = 0;

	int count = 1;
	int step = 0;
	int index=0;
	while(count <= N){
		if(nD[index]==0 && step!=count)	step++;
		else if(nD[index]==0 && step==count){
			nD[index] = count;
			step = 0;
			count++;
		}
		index++;
		if(index >= N)	index= 0;
	}
	for(i=0; i<N; i++)
		cout << nD[i] << " ";
	return 0;
}
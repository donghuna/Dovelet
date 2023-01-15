#include <iostream>
using namespace std;

int main(void){

	int i,j;
	int N, temp;
	cin >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++)
		nD[i] = 0;
	

	int max = 0;
	int index=-1;
	for(i=0; i<N; i++){
		for(j=0; j<5; j++){
			cin >> temp;
			nD[i]+= temp;
		}
		if( (nD[i] - ((nD[i]/10)*10) ) > max){
				max = nD[i] - nD[i]/10*10;
				index = i;
		}else if( (nD[i] - ((nD[i]/10)*10) ) > max){
			if(index == -1){
				max = nD[i] - nD[i]/10*10;
				index = i;
			}else{
				if(nD[i] > nD[index]){
					max = nD[i] - nD[i]/10*10;
					index = i;
				}
			}
		}
	}
	cout << index;
	return 0;
}
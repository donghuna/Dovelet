#include <iostream>
#include <assert.h>
using namespace std;

int main(void){

	int S, count=0;
	cin >> S;
	int* sD = new int[S];
	for(int i=0; i<S; i++)
		cin >> sD[i];

	for(int i=0; i<S-2; i++){
		for(int j=i+1; j<S-1; j++){
			for(int k=j+1; k<S; k++){
				//assert(sD[j]-sD[i] == sD[k]-sD[j]);
				if(sD[j]-sD[i] == sD[k]-sD[j])
					count++;
			}
		}
	}
	cout << count;
	return 0;
}
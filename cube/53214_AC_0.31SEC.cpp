#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int i,j,k,l;
	int N;
	cin >> N;
	int* nD = new int[N+1];

	for(i=2; i<N+1; i++)
		nD[i] = pow(i, 3.0);

	for(l=2; l<=N; l++){
		for(i=2; i<=N-2; i++){
			for(j=i+1; j<=N-1; j++){
				for(k=j+1; k<=N; k++){				
					if(nD[i] + nD[j] + nD[k] == nD[l]){
						cout << "Cube = " << l << ", Triple = (" << i << "," << j << "," << k << ")" << endl;
					}
				}
			}
		}
	}
	return 0;
}

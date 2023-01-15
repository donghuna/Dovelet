#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

	int i, j;
	int F, R;
	cin >> F >> R;
	int* fD = new int[F];
	int* rD = new int[R];
	float* oD = new float[F*R];

	for(i=0; i<F; i++)
		cin >> fD[i];
	for(i=0; i<R; i++)
		cin >> rD[i];

	for(i=0; i<F; i++){
		for(j=0; j<R; j++){
			oD[i*R+j] = fD[i]/(float)rD[j];
		}
	}

	sort(oD, oD+F*R);

	float max=0;
	for(i=0; i<F*R-1; i++){
		if(oD[i+1]/oD[i] > max)	max = oD[i+1]/oD[i];
	}
	printf("%0.2f", max);


	return 0;
}
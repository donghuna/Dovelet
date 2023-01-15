#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N, C;
	cin >> N >> C;

	int* cD = new int[C];
	int* nD = new int[N];

	for(i=0; i<C; i++)
		cin >> cD[i];

	for(i=0; i<N; i++){
		int loc = i+1;
		for(j=0; j<C; j++){
			if(loc == cD[j])
				loc++;
			else if(loc-1 == cD[j])
				loc--;
		}
		cout << i+1 << " " << (char)(loc+64) << endl;
	}

	return 0;
}
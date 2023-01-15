#include <iostream>
using namespace std;

int main(void){

	int i,j;
	int N;
	cin >> N;
	int* nD = new int[N];
	int* oD = new int[N];

	for(i=0; i<N; i++){
		cin >> nD[i];
		oD[i] = 0;
	}

	for(i=0; i<N; i++){
		int count = 0;
		int compare = 0;
		for(j=0; j<N; j++){
			if(count == nD[i])
				compare = 1;
			if(oD[j] == 0 && compare == 1){
				oD[j] = i+1;
				break;
			}
			else if(oD[j] == 0)
				count++;
		}
	}

	for(i=0; i<N; i++)
		cout << oD[i] << " ";
	

	return 0;
}
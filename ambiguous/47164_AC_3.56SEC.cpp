#include <iostream>
using namespace std;

int main(void){

	int i;
	int N;
	cin >> N;
	int* nD1 = new int[N];
	int* nD2 = new int[N];

	for(i=0; i<N; i++)
		cin >> nD1[i];

	int index;
	for(i=0; i<N; i++){
		index = nD1[i];
		nD2[index-1] = i+1;
	}

	for(i=0; i<N; i++){
		if(nD2[i] != nD1[i]){
				cout << "not ambiguous";
				return 0;
		}
	}
	cout << "ambiguous";
	return 0;
}
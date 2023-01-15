#include <iostream>
#include <algorithm>
using namespace std;

int main(void){

	int N;
	cin >> N;
	int* nD = new int[N];
	for(int i=0; i<N; i++)
		cin >> nD[i];
	sort(nD, nD+N);
	for(int i=0; i<N; i++)
		cout << nD[i] << " ";

	return 0;
}
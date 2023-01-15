#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){

	int N, count=0;
	cin >> N;
	int* nD = new int[N];
	int* oD = new int[N];

	for(int i=0; i<N; i++){
		cin >> nD[i];
		oD[i] = nD[i];		
	}
	sort(oD, oD+N);
	for(int i=0; i<N; i++)
		if(oD[i] != nD[i])	count++;
		

	cout << ceil(count/2.0);
	return 0;
}
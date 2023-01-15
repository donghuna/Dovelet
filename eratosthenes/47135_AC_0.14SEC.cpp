#include <iostream>
using namespace std;

int main(void){

	int N;
	cin >> N;
	int* nD = new int[N+1];
	for(int i=0; i<=N; i++) nD[i] = 0;

	for(int i=2; i<=N; i++)
		for(int j=i*i; j<=N; j+=i)
			nD[j]++;
	
	for(int i=2; i<=N; i++)
		if(nD[i] == 0)	cout << i << " ";

	return 0;
}
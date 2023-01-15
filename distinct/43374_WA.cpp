#include <iostream>
using namespace std;

int main(void){
	int N, temp, count=0;
	cin >> N;
	int* ND = new int[10000];
	for(int i=0; i<N; i++)
		ND[i-1] = 0;
	for(int i=0; i<N; i++){
		cin >> temp;
		ND[temp-1]++;
	}
	for(int i=0; i<N; i++)
			if(ND[i] > 0)
			count++;
	cout << count;
	return 0;
}
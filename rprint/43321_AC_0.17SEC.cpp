#include <iostream>
using namespace std;

int main(void){

	int N, n1;
	cin >> N;
	n1 = N;	
	int* data = new int[N];

	while(N--)
		cin >> data[N];
	for(int i=0; i<n1; i++)
		cout << data[i] << " ";

	return 0;
}
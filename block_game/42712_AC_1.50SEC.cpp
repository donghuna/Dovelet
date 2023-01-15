#include <iostream>
using namespace std;

int main(void){

	int N, K, M;
	int sum=0;
	cin >> N >> M >> K;
	
	int** input = new int*[2];
	input[0] = new int[K];
	input[1] = new int[K];

	for(int i=0; i<K; i++)
		cin >> input[0][i];
	for(int i=0; i<K; i++)
		cin >> input[1][i];

	for(int i=0; i<K; i++){
		if(input[0][i] - input[1][i] > 0)
			sum += input[0][i] - input[1][i];
	}
	cout << sum;
	return 0;
}
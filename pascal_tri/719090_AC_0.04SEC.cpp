#include <iostream>
using namespace std;

int main(void){

	int N;
	int i, j;
	
	cin >> N;
	int **arr = new int *[N];
	for(i=0; i<N; i++)
		arr[i] = new int[N];

	arr[0][0] = 1;
	for(i=1; i<N; i++){
		arr[i][0] = 1;
		for(j=1; j<i; j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
		arr[i][j] = 1;
	}

	for(i=0; i<N; i++){
		for(j=0; j<=i; j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}

	return 0;
}

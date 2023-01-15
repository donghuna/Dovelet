#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int arr[10][10];
	int max, sum;

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			cin >> arr[i][j];
		}
	}
	max = 0;
	for(i=0; i<10; i++){
		for(j=0; j<6; j++){
			if(max < arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]+arr[i][j+4])
				max = arr[i][j]+arr[i][j+1]+arr[i][j+2]+arr[i][j+3]+arr[i][j+4];
			if(max < arr[j][i]+arr[j+1][i]+arr[j+2][i]+arr[j+3][i]+arr[j+4][i])
				max = arr[j][i]+arr[j+1][i]+arr[j+2][i]+arr[j+3][i]+arr[j+4][i];
		}
	}
	cout << max;

	return 0;
}
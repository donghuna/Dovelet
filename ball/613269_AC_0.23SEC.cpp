#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int arr[3][3];

	for(i=0; i<3; i++){
		for(j=0; j<3-i; j++){
			cin >> arr[i][j];
		}
	}

	for(i=0; i<6; i++){
		cout << arr[2][0] << " ";
		int index = 0;
		for(j=1; j>=0; j--){
			if(arr[j][index] > arr[j][index+1]){
				arr[j+1][index] = arr[j][index];
				arr[j][index] = 0;
			}
			else{
				arr[j+1][index] = arr[j][index+1];
				arr[j][index+1] = 0;
				index++;
			}
		}
	}

	return 0;
}
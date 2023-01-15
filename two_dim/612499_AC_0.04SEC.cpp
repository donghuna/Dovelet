#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int arr[3][4] = {0};

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			cin >> arr[i][j];
		}
	}

	for(i=0; i<3; i++){
		for(j=0; j<4; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			cout << arr[j][i] << " ";
		}
		cout << endl;
	}
	return 0;
}
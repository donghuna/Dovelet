#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int arr[5][5];
	int chk=0, sum=0;

	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			cin >> arr[i][j];
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if( i==0 || arr[i-1][j] > arr[i][j] )		++chk;
			if( i==4 || arr[i+1][j] > arr[i][j] )		++chk;
			if( j==0 || arr[i][j-1] > arr[i][j] )		++chk;
			if( j==4 || arr[i][j+1] > arr[i][j] )		++chk;
			if(chk==4)
				cout << "* ";
			else
				cout << arr[i][j] << " ";
			chk=0;
		}
		cout << endl;
	}

	return 0;
}

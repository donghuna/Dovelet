#include <iostream>
using namespace std;

int main(void){

	int arr[21] = {0}, arr1[10];
	int input;
	int i;

	for(i=0; i<10; i++){
		cin >> input;
		arr[input+10]++;
		arr1[i] = input;
	}
	for(i=0; i<10; i++){
		if(arr[arr1[i]+10]==1){
			cout << arr1[i] << " ";
		}
	}

	return 0;
}
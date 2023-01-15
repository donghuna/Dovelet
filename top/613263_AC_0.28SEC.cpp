#include <iostream>
using namespace std;

int main(void){
	int arr[10], arr1[6], arr2[3], output;
	int i;

	for(i=0; i<10; i++)
		cin >> arr[i];
	arr1[0] = arr[0]+arr[1]+arr[2];
	arr1[1] = arr[1]+arr[3]+arr[4];
	arr1[2] = arr[2]+arr[4]+arr[5];
	arr1[3] = arr[3]+arr[6]+arr[7];
	arr1[4] = arr[4]+arr[7]+arr[8];
	arr1[5] = arr[5]+arr[8]+arr[9];
	arr2[0] = arr1[0]+arr1[1]+arr1[2];
	arr2[1] = arr1[1]+arr1[3]+arr1[4];
	arr2[2] = arr1[2]+arr1[4]+arr1[5];
	output = arr2[0]+arr2[1]+arr2[2];
	cout << output;
	return 0;
}
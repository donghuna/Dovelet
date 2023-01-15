#include <iostream>
using namespace std;

bool func(int arr[9], int count, int index, int sum);

int main(void){

	int arr[9];
	int i;

	for(i=0; i<9; i++)
		cin >> arr[i];
	
	func(arr, 0, -1, 0);

	return 0;
}

bool func(int arr[9], int count, int index, int sum){

	index++;

	if(count==7){
		if(sum == 100)
			return true;
		else
			return false;
	}
	
	if(index>8)
		return false;

	for(int i=0; i<=2; i++){
		if(func(arr, count+1, index+i, sum+arr[index+i]) == true){
			cout << arr[index+i] << endl;
			return true;
		}
	}
}

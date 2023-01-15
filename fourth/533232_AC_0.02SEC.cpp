#include <iostream>
using namespace std;

int main(void){

	int arr[3][2];
	
	cin >> arr[0][0] >> arr[0][1] >> arr[1][0] >> arr[1][1] >> arr[2][0] >> arr[2][1];

	if( arr[0][0]==arr[1][0] )
		cout << arr[2][0];
	else if( arr[2][0]==arr[1][0] )
		cout << arr[0][0];
	else
		cout << arr[1][0];

	cout << " ";

	if( arr[0][1]==arr[1][1] )
		cout << arr[2][1];
	else if( arr[2][1]==arr[1][1] )
		cout << arr[0][1];
	else
		cout << arr[1][1];

	return 0;
}
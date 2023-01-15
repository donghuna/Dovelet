#include <iostream>
using namespace std;

int main(void){

	int X, Y;
	int i, j;

	cin >> Y >> X;
	long long **arr = new long long*[Y];
	for(i=0; i<Y; i++)
		arr[i] = new long long[X];

	for(i=0; i<Y; i++){
		for(j=0; j<X; j++){
			if(i==0 || j==0)
				arr[i][j] = 1;
			else
				arr[i][j] = arr[i-1][j] + arr[i][j-1];
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
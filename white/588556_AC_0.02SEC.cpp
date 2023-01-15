#include <iostream>
using namespace std;

int main(void){

	int a[6] = {1,1,2,2,2,8};
	int input;

	for(int i=0; i<6; i++){
		cin >> input;
		a[i] -= input;
	}

	for(int i=0; i<6; i++)
		cout << a[i] << " ";


	return 0;
}
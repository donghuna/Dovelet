#include <iostream>
using namespace std;

int main(void){

	int i, j, k;
	for(i=1; i<=9; i++){
		for(j=i+1; j<=9; j++){
			for(k=j+1; k<=9; k++){
				cout << i << j << k << " ";
			}
		}
	}
	return 0;
}
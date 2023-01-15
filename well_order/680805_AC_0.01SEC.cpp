#include <iostream>
using namespace std;

int main(void){

	int i, j, k;
	int c = 0;
	for(i=1; i<=9; i++){
		for(j=i+1; j<=9; j++){
			for(k=j+1; k<=9; k++){
				cout << i << j << k << " ";
				++c;
				if(c >= 5){
					cout << endl;
					c = 0;
				}
			}
		}
	}
	return 0;
}
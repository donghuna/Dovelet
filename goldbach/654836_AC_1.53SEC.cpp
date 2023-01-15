#include <iostream>
using namespace std;

#define MAX 1000000

int main(void){

	int input;
	int i, j, flag;

	bool Arr[MAX] = {false};
	cin >> input;

	for(i=2; i<=MAX; i++){
		for(j=i+i; j<MAX; j+=i){
			Arr[j] = true;
		}
	}
	for(i=2; i<=MAX; i++){
		flag = 0;
		if(Arr[i] == true) continue;
		for(j=i+1; j<=MAX; j++){
			if(Arr[j] == true) continue;
			if(i+j == input){
				cout << input << " = " << i << " + " << j;
				flag = 1;
				break;
			}
			else if(i+j > input)
				break;
		}
		if(flag == 1)
			break;
	}

	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int data[30] = {0};
	int temp;
	int i;

	for(i=0;; i++){
		cin >> temp;
		if(temp == 0)
			break;
		data[i] = temp;
	}

	for(int j=9; j>0; j--){
		for(int k=0; k<i; k++){
			cout << " ";
			if(data[k] >= j)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
	for(int k=0; k<i; k++){
		cout << " " << data[k];
	}
	

	return 0;
}
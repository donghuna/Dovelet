#include <iostream>
using namespace std;

int main(void){

	int a, count=1;
	cin >> a;

	for(int i=1; i<a; i++){
		for(int j=a-i; j>=1; j--){
			cout << " ";
		}
		for(int k=1; k<=count; k++){
			cout << "*";
		}
		count+=2;
		cout << endl;
	}

	for(int i=1; i<=count; i++)
		cout << "*";
	cout << endl;

	count -= 2;
	for(int i=1; i<a; i++){
		for(int j=1; j <= i; j++){
			cout << " ";
		}
		for(int k=1; k<=count; k++){
			cout << "*";
		}
		cout << endl;
		count -= 2;
	}

	return 0;
}
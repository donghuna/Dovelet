#include <iostream>
using namespace std;

int main(void){

	int a;
	cin >> a;

	for(int i=a; i>=1; i--){
		for(int k=1; k<=a-i; k++)
			cout << " ";
		for(int j=i; j>=1; j--){
			cout << j;
		}
		cout << endl;
	}
	return 0;
}
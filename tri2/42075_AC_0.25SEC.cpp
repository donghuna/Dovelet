#include <iostream>
using namespace std;

int main(void){

	int a;
	cin >> a;
	for(int i=a; i>=1; i--){
		for(int j=1; j<=i; j++)
			cout << "*";
		cout << endl;
	}
	return 0;
}
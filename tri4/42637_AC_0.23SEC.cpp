#include <iostream>
using namespace std;

int main(void){

	int a, b=1;
	cin >> a;

	for(int i=a/2; i>=0; i--){
		for(int j=0; j<i; j++)
			cout << " ";
		for(int k=1; k<=b; k++)
			cout << "*";
		b +=2;
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int a,b;
	cin >> a >> b;
	if(a>b){
		int temp;
		temp = a;
		a = b;
		b = temp;
	}

	for(int i=a; i<=b; i++)
		cout << i << " ";

	return 0;
}
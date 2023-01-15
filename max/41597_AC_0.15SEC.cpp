#include <iostream>
using namespace std;

int main(void){

	int a, max=0;
	for(int i=0; i<7; i++){
		cin >> a;
		if(a > max)
			max = a;
	}
	cout << max;
}

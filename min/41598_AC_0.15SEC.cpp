#include <iostream>
using namespace std;

int main(void){

	int a, min=INT_MAX;
	for(int i=0; i<7; i++){
		cin >> a;
		if(a < min)
			min = a;
	}
	cout << min;
}

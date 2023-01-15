#include <iostream>
using namespace std;

int main(void){

	int a, min=INT_MAX, max=0;

	for(int i=0; i<7; i++){
		cin >> a;
		if(a < min)
			min = a;
		if(a > max)
			max = a;
	}
	cout << max << " " << min;

	return 0;
}
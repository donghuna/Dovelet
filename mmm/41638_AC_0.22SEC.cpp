#include <iostream>
using namespace std;

int main(void){

	int sum=0, max=0, min=INT_MAX;
	int a;

	for(int i=0; i<10; i++){
		cin >> a;
		sum += a;
		if(a < min)
			min = a;
		if(a > max)
			max = a;
	}
	cout << sum << " " << max << " " << min;
	return 0;
}
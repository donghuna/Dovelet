#include <iostream>
using namespace std;

int main(void){

	int a;
	int sum=0;
	cin >> a;

	for(int i=1; i<=a*2-1; i+=2){
		sum += i*((a*2)-i);
	}

	cout << sum;

	return 0;
}
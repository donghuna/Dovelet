#include <iostream>
using namespace std;

int main(void){
	int n;
	int i, j, sum;
	// init
	sum = 0;

	// input
	cin >> n;

	// calculate
	for(i=1; i<=(n-2)/2; i++)
		sum += i;
	if(n%2!=0)
		sum += (n-2)/2+1;
	for(i=1; i<=(n-2)/2; i++)
		sum += i;

	// ouput
	cout << sum;
		
	return 0;
}
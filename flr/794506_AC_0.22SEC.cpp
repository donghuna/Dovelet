#include <iostream>
using namespace std;

int main(void){

	int n;
	cin >> n;
	int sum = 0;
	int flr = 0;
	for(int i=1; sum<n; i+=i){
		sum += i;
		flr++;
	}
	cout << flr;

	return 0;
}
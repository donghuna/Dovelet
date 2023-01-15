#include <iostream>
using namespace std;

int main(void){

	long long m, n;
	cin >> m >> n;

	if(m>n)
		cout << n;
	else
		cout << m;
	return 0;
}
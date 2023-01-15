#include <iostream>
using namespace std;

int main(void){

	int a, m;
	cin >> a;

	m = 1000 - a;

	cout << m/100 << " ";
	m %= 100;
	cout << m/50 << " ";
	m %= 50;
	cout << m/10 << endl;

	return 0;
}
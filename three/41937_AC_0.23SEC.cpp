#include <iostream>
using namespace std;

int main(void){
	
	int a, b, c;
	cin >> a >> b;
	c = a*b;

	cout << a*(b - (b/10)*10) << endl;
	b = (b/10);
	cout << a*(b - (b/10)*10) << endl;
	b = (b/10);
	cout << a*(b - (b/10)*10) << endl << c;
	return 0;
}
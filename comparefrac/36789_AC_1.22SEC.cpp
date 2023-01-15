#include <iostream>
using namespace std;

int main(void){

	float a, b, c, d;
	float x, y;

	cin >> a >> b >> c >> d;
	x = a/b;
	y = c/d;

	if(x > y)
		cout << '1' << endl;
	else if(x < y)
		cout << "-1" << endl;
	else
		cout << '0' << endl;

	return 0;
}
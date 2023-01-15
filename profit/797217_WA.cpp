#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int a, b, c;
	cin >> a >> b >> c;
	int tmp;
	tmp = a + a * (b*0.01);
	tmp = tmp - tmp * (c*0.01);
	if( tmp < a )
		cout << "lose" << endl;
	else
		cout << tmp - a << endl;

	return 0;
}
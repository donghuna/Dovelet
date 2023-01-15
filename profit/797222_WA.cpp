#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int a, b, c;
	cin >> a >> b >> c;
	double tmp;
	tmp = a + a * (b*0.01);
	tmp = tmp - tmp * (c*0.01);
	if( tmp < a )
		cout << "lose" << endl;
	else
		printf("%d\n", (int)((tmp-a)+0.5) );
		
	return 0;
}
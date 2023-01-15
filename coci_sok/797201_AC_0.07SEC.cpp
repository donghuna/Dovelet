#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int a, b, c, i, j, k;
	double ca, cb, cc;
	cin >> a >> b >> c >> i >> j >> k;
	ca = a/(double)i;
	cb = b/(double)j;
	cc = c/(double)k;

	double tmp = (ca>cb)?( (cb>cc)?cc:cb ):( (ca>cc)?cc:ca );
	ca -= tmp;
	cb -= tmp;
	cc -= tmp;

	ca *= (double)i;
	cb *= (double)j;
	cc *= (double)k;

	cout << ca << " " << cb << " " << cc << endl;
	return 0;
}
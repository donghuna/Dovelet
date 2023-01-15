#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int a, b, tmp;
	cin >> a >> b;
	if(a>b)
		tmp = a;
	else
		tmp = b;
	for(int i=1; i*i<=tmp; i++){
		if(a%i==0 && b%i==0)
			cout << i << " " << a/i << " " << b/i <<  endl;
		if( b%(a/i) == 0 && a%(a/i)==0 && (a/i) > sqrt((float)b))
				cout << a/i << " " << a/(a/i) << " " << b/(a/i) << endl;
	}
	
	return 0;
}

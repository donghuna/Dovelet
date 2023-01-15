#include <iostream>
using namespace std;

int main(void){

	int a;
	double b;

	cin >> a >> b;
	if( a%5!=0 || a>b-0.5 )
		printf("%0.2lf", b);
	else
		printf("%0.2lf", b-a-0.5);

	return 0;
}
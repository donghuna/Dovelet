#include <iostream>
using namespace std;

int main(void){

	double input;
	cin >> input;

	printf("%d %0.2lf", (input>0)?(int)input:(int)input-1, (input>0)?input-(int)input:((int)input-1-input)*-1);

	return 0;
}
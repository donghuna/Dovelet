#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

int main(void){

	string Alpha, Output;
	char c, d;
	cin >> Alpha;

	c=getchar();
	while((c=getchar()) != '\n'){
		if(c-0 >= 97 && c-0 <= 122)
			Output.push_back(Alpha[c-97]);
		else if(c-0 >= 65 && c-0 <= 90){
			d = Alpha[c-65];
			d &= 95;
			Output.push_back(d);
		}
		else
			Output.push_back(' ');

	}
	
	cout << Output;

	return 0;
}
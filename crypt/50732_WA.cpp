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
		else{
			d = Alpha[c-65];
			d &= 95;
			
			Output.push_back(d);
		}
	}
	
	cout << Output;

	return 0;
}
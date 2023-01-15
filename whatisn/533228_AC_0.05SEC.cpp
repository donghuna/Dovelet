#include <iostream>
using namespace std;

int main(void){

	int input;
	cin >> input;
	if(input<=5)
		printf("%d", input-(((input*10)/2+5)/10)+1);
	else
		printf("%d", 6-(((input*10)/2+5)/10));

	return 0;
}
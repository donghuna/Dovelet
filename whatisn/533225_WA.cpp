#include <iostream>
using namespace std;

int main(void){

	int input;
	cin >> input;
	printf("%d", input-(((input*10)/2+5)/10)+1);

	return 0;
}
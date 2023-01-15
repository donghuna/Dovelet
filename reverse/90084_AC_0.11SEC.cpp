#include <iostream>
using namespace std;

int main(void){

	int i, j;
	char c[1000];
	
	cin.getline(c, 1000, '\n');

	for(i=0; i<1000; i++)
		if(c[i] == '\0')	break;

	for(j=i-1; j>=0; j--)
		if(c[j] != ' ')	cout << c[j];

	return 0;
}
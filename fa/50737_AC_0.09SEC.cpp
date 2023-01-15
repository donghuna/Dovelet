#include <iostream>
using namespace std;

int main(void){

	int Alpha[26] = {0};
	char c;
	char a = 'a';

	while( (c=getchar()) != '\n')
		Alpha[c-97]++;

	for(int i=0; i<26; i++)
		cout << a++ << ":" << Alpha[i] << endl;	

	return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;


int main(void){

	int input[4];

	for(int i=0; i<4; i++)
		cin >> input[i];

	sort(input, input+3);

	cout << input[0] * input[2];
	

	return 0;
}
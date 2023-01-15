#include <iostream>
using namespace std;

int main(void){

	int input[4] = {0};

	for(int i=0; i<4; i++)
		cin >> input[i];

	cout << input[0] << " " << input[1] << " " << input[2] << " " << input[3] << " ";

	if( (input[3]-input[2]) != (input[2]-input[1]) )
		if(input[2] < input[1])
			cout << input[3]/(input[2]/input[3]) << endl;
		else
			cout << input[3]*(input[3]/input[2]) << endl;

	else
		cout << input[3]*(input[2]-input[1]) << endl;
		

	return 0;
}
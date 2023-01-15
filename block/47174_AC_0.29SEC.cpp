#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N[9][9];
	int O[3][3] = {0};

	for(i=0; i<9; i++)
		for(j=0; j<9; j++)
			cin >> N[i][j];

	for(i=0; i<9; i++)
		for(j=0; j<9; j++)
			O[i/3][j/3] += N[i][j];
	for(i=0; i<3; i++)
		for(j=0; j<3; j++)
			cout << O[i][j] << endl;
	
	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int R, S;
	cin >> R >> S;

	int** nD = new int*[R];
	for(i=0; i<R; i++)
		nD[i] = new int[R];

	for(i=0; i<R; i++){
		nD[i][i] = S;
		S++;
		S = S%10 + S/10;
	}
	
	for(i=1; i<R; i++){
		int temp;
		for(j=0; j<R-i; j++){
			temp = nD[j][i+j-1] + nD[j+1][i+j];
			nD[j][i+j] = temp%10;
		}
	}


	for(i=0; i<R; i++){
		for(j=0; j<i; j++)
			cout << "  ";
		for(j=i; j<R; j++){
			cout << nD[i][j] << " ";
		}
		cout << endl;
	}



	return 0;
}
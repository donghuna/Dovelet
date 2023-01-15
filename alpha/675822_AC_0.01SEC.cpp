#include <iostream>
#include <string>
using namespace std;

int main(void){

	string S = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j, k;

	for(i=0; i<S.length(); i++)
		for(j=0; j<S.length(); j++)
			for(k=0; k<S.length(); k++)
				cout << S[i] << S[j] << S[k] << " ";
	
	return 0;
}

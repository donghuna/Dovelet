#include <iostream>
#include <math.h>
using namespace std;

int main(void){

	int nD[8] = {0};
	int i;
	for(i=0; i<8; i++)
		cin >> nD[i];
	
	int a, b, tmp;
	tmp = nD[0];
	for(i=1; i<8; i++){
		if(nD[i] > tmp)
			++a;
		else if(nD[i] < tmp)
			++b;
		tmp = nD[i];
	}
	if(a==7)
		cout << "ascending" << endl;
	else if(b==7)
		cout << "descending" << endl;
	else
		cout << "mixed" << endl;

	return 0;
}
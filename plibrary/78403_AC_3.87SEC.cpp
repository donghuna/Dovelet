#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int C, R;
	int tmp;
	
	cin >> C >> R;
	int *P = new int[C];
	for(i=0; i<C; i++)
		P[i] = 0;
	
	for(i=0; i<R; i++){
		for(j=0; j<C; j++){
			cin >> tmp;
			if(tmp==1)	P[j]++;
		}
	}

	for(j=0; j<C; j++){
		if(P[j]==R){
			cout << "yes";
			return 0;
		}
	}
	cout << "no";

	return 0;
}
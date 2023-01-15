#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int R, S;
	cin >> R >> S;

	int start, term, st=0;
	for(i=1; i<=R; i++){
		if(i==1)
			start = S;
		else{
			st+=i;
			start = S+st;
			start %= 9;
		}
		term = i;

		for(j=1; j<i; j++)
			cout << "  ";
		for(j=R; j>i; j--){
			if(start%9 == 0 || start == 0)
				cout << "9 ";
			else
				cout << start << " ";
			start += term;
			start %= 9;
			term++;
			
		}
		if(start == 0 || start%9 == 0)
			cout << "9 " << endl;
		else
			cout << start << endl;
	}
	return 0;
}
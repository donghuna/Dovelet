#include <iostream>
using namespace std;

int main(void){

	int N;
	int a, b, c, time;
	cin >> N;

	a = b = c = time = 0;
	while(N){
		N--;
		if(N==0)	break;
		if(b == 0){	b = 2;	N--;	if(N==0)	break;}else	b--;
		if(c == 0){	c = 3;	N--;	if(N==0)	break;}else	c--;
		time++;
	}
	cout << ++time;

	return 0;
}
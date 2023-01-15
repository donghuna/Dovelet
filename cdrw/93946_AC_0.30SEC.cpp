#include <iostream>
using namespace std;

int main(void){

	int N;
	int b, c, time;
	cin >> N;

	b = 2;
	c = 3;
	time = 0;
	while(N){
		time++;
		N--;
		if(N==0)	break;
		if(b == 0){	b = 2;	N--;	if(N==0)	break;}else	b--;
		if(c == 0){	c = 3;	N--;	if(N==0)	break;}else	c--;
	}
	cout << time;

	return 0;
}
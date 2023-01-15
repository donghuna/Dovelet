#include <iostream>
using namespace std;

int main(void){

	int a,b,c,d;
	double e[4];
	int max=0;
	int rotation;
	cin >> a >> b >> c >> d;

	e[0] = (double)a/c+b/d;
	e[1] = (double)c/d+a/b;
	e[2] = (double)d/b+c/a;
	e[3] = (double)b/a+d/c;

	for(int i=0; i<4; i++){
		if(e[i]>max){
			max = e[i];
			rotation = i;
		}
	}
	cout << rotation;
	return 0;
}
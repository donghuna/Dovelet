#include <iostream>
using namespace std;
int Func(int);
int main(void){
	int nD[10000] = {0};
	int  temp;
	for(int i=1; i<=10000; i++){
		if(Func(i) < 10000)	nD[Func(i)]++;
	}
	for(int i=1; i<10000; i++)
		if(nD[i] == 0)		cout << i << endl;

	return 0;
}
int Func(int a){
	int sum = a;
	while(a>0){
		sum += a - a/10*10;
		a/=10;
	}
	return sum;
}
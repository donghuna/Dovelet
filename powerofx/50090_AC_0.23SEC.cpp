#include <iostream>
using namespace std;
int Func(int , int);
int main(void){

	int a, b;
	cin >> a >> b;
	cout << Func(a, b);

	return 0;
}

int Func(int a, int count){
	if(count == 1)	return a;
	return a * Func(a, count-1);
}
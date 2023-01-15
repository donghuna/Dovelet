#include <iostream>
using namespace std;

int hap(int, int);

int main(void){
	int a,b,c,d;
	cin >> a >> b >> c >> d;
	cout << hap( hap(a,b), hap(c,d) );
	return 0;
}
int hap(int a, int b){
	return a+b;
}
#include <iostream>
using namespace std;

int rev(int a);

int main(void){
	int a, b;
	cin >> a >> b;
	cout << rev(rev(a) + rev(b));
	return 0;
}
int rev(int a){
	int b = 0;
	while(a>0){
		b *=10;
		b += a - (a/10*10);
		a/=10;
	}
	return b;
}
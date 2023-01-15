#include <iostream>
using namespace std;
void func(int , int);
int main(void){
	int N;
	cin >> N;
	func(1, N);
	return 0;
}
void func(int a, int f){
	cout << a;
	if(a==f)	return;
	func(a+1, f);
	cout << a;
}
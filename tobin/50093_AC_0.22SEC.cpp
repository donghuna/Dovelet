#include <iostream>
using namespace std;
void Func(int a);
int main(void){
	int N;
	cin >> N;
	Func(N);
	return 0;
}
void Func(int a){
	if(a/2 >= 2){
		Func(a/2);
		cout << a%2;
	}
	else
		cout << a/2 << a%2;
}
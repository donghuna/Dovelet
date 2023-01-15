#include <iostream>
using namespace std;

void func(int cur, int N);
int c = 0;

int main(void){

	int N;
	cin >> N;

	func(0, N);
	cout << c;

	return 0;
}

void func(int cur, int N){
	if(cur==N){
		c++;
		return;
	}
	func(cur+1, N);
	if(cur+1 != N)
		func(cur+2, N);
}


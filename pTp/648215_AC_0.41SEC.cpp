#include <iostream>
using namespace std;
void func(int num);
int main(void){
	int m;
	cin >> m;
	func(m);
	return 0;
}

void func(int num){
	if(num<=0)	return;
	func(num-1);
	cout << num;
	func(num-1);
}

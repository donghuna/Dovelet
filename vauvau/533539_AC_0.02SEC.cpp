#include <iostream>
using namespace std;

int func(int A, int B, int t);
void func1(int a, int b);

int main(void){

	int A,B,C,D;
	int P,M,G;
	int count=0;

	cin >> A >> B >> C >> D;
	cin >> P >> M >> G;

	func1(func(A,B,P),func(C,D,P));
	cout << endl;
	func1(func(A,B,M),func(C,D,M));
	cout << endl;
	func1(func(A,B,G),func(C,D,G));

	return 0;
}

int func(int A, int B, int t){
	if( t%(A+B) == 0 || t%(A+B) > A)
		return 0;
	else 
		return 1;
}

void func1(int a, int b){
	if(a+b==2)
		cout << "both";
	else if(a+b==1)
		cout << "one";
	else
		cout << "none";
}

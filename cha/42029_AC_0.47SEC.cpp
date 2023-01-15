#include <iostream>
using namespace std;

int main(void){

	int a, b, temp;
	cin >> a >> b;
	cout << a << " " << b << " ";

	while(a-b >= 0 && b-0 >= 0){
		cout << a - b << " ";
		temp = a-b;
		a = b;
		b = temp;
	}
	return 0;
}
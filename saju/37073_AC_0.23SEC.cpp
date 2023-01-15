#include <iostream>
using namespace std;

int main(void){

	int a, b, c;
	int sum;
	int temp;
	cin >> a >> b >> c;

	sum = a+b+c;
	temp = (sum/10)*10;

	if( sum == temp)
		cout << "운수대통!" << endl;
	else
		cout << "노력하세요!" << endl;

	return 0;
}
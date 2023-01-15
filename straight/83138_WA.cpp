#include <iostream>
using namespace std;

int main(void){

	int x1, x2, x3, y1, y2, y3;
	int m, b;

	cin >> x1 >> y1 >> x2 >> y2;
	cin >> x3 >> y3;

	if(x2-x1 == 0){
		if(x3 == 0)
			cout << "yes";
		else
			cout << "no";
		return 0;
	}else{
		m = (y2-y1) / (x2-x1);
		b = y1 - m*x1;
	}

	if(x3*m+b == y3)	cout << "yes" << endl;
	else						cout << "no" << endl;

	return 0;
}
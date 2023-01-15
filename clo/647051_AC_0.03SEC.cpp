#include <iostream>
using namespace std;

int main(void){

	int N;
	double x;

	cin >> N;
	x = (60./11.)*(N%12);
	if(x>=59)
		cout << "CAN'T SEE!";
	else
		printf("%.6lf", x);
	return 0;
}
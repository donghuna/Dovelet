#include <iostream>
using namespace std;

int main(void){

	int C;
	int Q, D, N, P;
	cin >> C;

	Q = C/25;
	C %=25;
	D = C/10;
	C %=10;
	N = C/5;
	C %=5;
	cout << Q << " QUARTER(S), " << D << " DIME(S), " << N << " NICKEL(S), " << C << " PENNY(S)";
	return 0;
}

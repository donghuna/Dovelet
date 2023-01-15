#include <iostream>
using namespace std;

int main(void){

	int C, M, P, L;
	float cc=1.5, mm=1.0, pp=2.0, ll=0.5;
	float output = 0.0;

	cin >> C >> P >> L;
	M = C;

	output = cc * C;
	output += mm * M;
	output += pp * P;
	output += ll * L;
	output += output;

	cout << ((int)(output/10)+1)*10 << "amperes" << endl;

	return 0;
}
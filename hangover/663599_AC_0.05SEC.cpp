#include <iostream>
using namespace std;

int main(void){

	double C;
	double sum = 0;
	int i;
	
	cin >> C;
	for(i=2;; i++){
		sum += 1./i;
		if(sum >= C)
			break;
	}
	cout << i-1 << " card(s)";


	return 0;
}

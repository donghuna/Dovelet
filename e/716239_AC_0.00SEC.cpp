#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int factorial[10] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
	double sum = 0.0;

	cout << "n e" << endl << "- -----------" << endl;
	for(i=0; i<10; i++){
		cout << i << " ";
		sum += 1/(double)factorial[i];
		//cout << sum << endl;
		printf("%.9f\n", sum);
	}
	

	return 0;
}
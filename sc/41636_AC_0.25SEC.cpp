#include <iostream>
using namespace std;

int main(void){

	int count=0, input;
	int A=0,B=0,C=0,D=0,F=0;

	while(true){
		cin >> input;
		if(input == -1)
			break;
		count++;

		switch(input/10){
			case 10:
			case 9:
				A++;
				break;
			case 8:
				B++;
				break;
			case 7:
				C++;
				break;
			case 6:
				D++;
				break;
			default:
				F++;
				break;
		}
	}
	cout << count << endl << A << endl << B << endl << C << endl << D << endl << F;
	return 0;
}
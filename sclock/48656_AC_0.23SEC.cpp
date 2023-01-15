#include <iostream>
using namespace std;

int main(void){

	int N;
	cin >> N;

	int A = N-1;
	int count = 0;
	for(int i=0; i<N/2; i++){
		for(int k=0; k<count; k++)
			cout << " ";
		count++;
		for(int j=0; j<A; j++)
			cout << "*";
		cout << "$" << endl;
		A-=2;
	}
	
	for(int k=0; k<N/2; k++)
		cout << " ";
	cout << "$" << endl;

	count = N/2-1;
	A=2;
	for(int i=0; i<N/2; i++){
		for(int k=0; k<count; k++)
			cout << " ";
		count--;
		cout << "$";
		for(int j=0; j<A; j++)
			cout << "*";
		cout << endl;
		A+=2;
	}

	return 0;
}
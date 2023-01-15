#include <iostream>
#include <string>
using namespace std;

int main(void){

	int N;
	cin >> N;
	string S1, S2, Temp;
	cin >> S1 >> S2;

	cout << S1 << endl << S2 << endl;
	for(int i=0; i<N-2; i++){
		Temp = S2;
		S2 = S1 + S2;
		S1 = Temp;
		cout << S2 << endl;
	}

	return 0;
}
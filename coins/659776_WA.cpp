#include <iostream>
using namespace std;

int main(void){

	int N;
	while(true){
		cin >> N;
		if(N==0)
			break;
		if(N%2 == 1)
			cout << N-1;
		else
			cout << "No Solution!";
	}
}
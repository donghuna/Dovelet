#include <iostream>
using namespace std;

int main(void){
	
	int N;
	int sum = 0;

	for(int i=0; i<5; i++){
		cin >> N;
		sum+= N*N;
	}
	cout << sum%10;
	

	return 0;
}
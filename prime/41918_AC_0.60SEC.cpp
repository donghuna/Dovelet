#include <iostream>
using namespace std;

int main(void){

	int a;
	cin >> a;

	if(a == 2){
		cout <<"prime";
		return 0;
	}

	for(int i=2; i<a; i++){
		if(a%i == 0){
			cout << "not prime";
			return 0;
		}
	}
	cout << "prime";

	return 0;
}
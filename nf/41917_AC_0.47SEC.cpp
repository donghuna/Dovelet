#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int a;
	cin >> a;

	for(int i=1;; i++){
		if( pow(i,2.0) == a){
			cout << "yes";
			break;
		}else if( pow(i,2.0) > a){
			cout << "no";
			break;
		}
	}

	return 0;
}
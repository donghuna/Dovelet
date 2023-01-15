#include <iostream>
#include <cmath>
using namespace std;

int main(void){
	
	int n;
	cin >> n;

	if(n == 1){
		cout << "1 0";
		return 0;
	}
	for(int i=1;; i++){
		if(i*2 > n)
			break;
		for(int j=1;; j++){
			if( n < i*pow(2,(float)j))
				break;
			else if(n == i*pow(2,(float)j)){
				cout << i << " " << j;
				return 0;
			}
		}
	}
	return 0;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int i, j;
	int x, y, tmp;

	cin >> x >> y;
	if(x!=y && x-y!=2){
		cout << "No Number";
		return 0;
	}
	if(x==y){
		if(x%2==0){
			cout << x*2;
		}
		else{
			cout << x*2-1;
		}
	}
	else{
		tmp = x/2-1;
		if(tmp==0)
			cout << x;
		else
			cout << x+pow(2.0,tmp)+x%2;
	}


	return 0;
}
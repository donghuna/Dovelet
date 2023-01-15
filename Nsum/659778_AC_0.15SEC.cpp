#include <iostream>
using namespace std;

int main(void){

	int M;
	int i, sum=0;

	cin >> M;
	for(i=1;;i++){
		sum+=i;
		if(sum==M){
			cout << i;
			break;
		}
	}

	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int n, sum1=0, sum2=0;
	cin >> n;

	for(int i=1; i<n; i++)
		sum1+=i;

	for(int i=n+1;; i++){
		sum2+=i;
		if(sum2 == sum1){
			cout << "O";
			break;
		}else if(sum2 > sum1){
			cout << "X";
			break;
		}
	}
	return 0;
}



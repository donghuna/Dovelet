#include <iostream>
using namespace std;

int main(void){

	int min=INT_MAX;
	int a, sum=0;

	for(int i=0; i<7; i++){
		cin >> a;
		if(a%2 != 0){
			sum+=a;
			if(a<min)
				min = a;
		}
	}
	if(sum==0)
		cout << -1;
	else
		cout << sum << endl << min;
	return 0;
}
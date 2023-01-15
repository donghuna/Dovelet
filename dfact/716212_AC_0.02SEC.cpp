#include <iostream>
using namespace std;

int main(void){

	int i;
	int factorial[10] = { 1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880 };
	
	for(i=145; i<=1000000; i++){
		int tmp = i;
		int sum = 0;
		while(tmp){
			sum += factorial[tmp - (tmp/10)*10];
			tmp = tmp/10;
		}
		if(sum == i)
			cout << i << endl;
	}

	return 0;
}
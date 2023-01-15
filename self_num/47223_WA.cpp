#include <iostream>
using namespace std;
int Func(int);
int main(void){
	int before=0, temp;
	for(int i=1;; i++){
		temp = Func(i);
		for(int j=before; j<temp-1; j++){
			cout << j << endl;
			if(j==10000)	return 0;
		}
		before = temp;
	}
	return 0;
}
int Func(int a){
	int sum = a;
	while(a>0){
		sum += a - a/10*10;
		a/=10;
	}
	return sum;
}
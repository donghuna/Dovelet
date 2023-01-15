#include <iostream>
#include <cmath>
using namespace std;

int func(int, int);

int main(void){
	for(int i=1000; i<10000; i++)
		if(func(i,10) == func(i,12) && func(i,10) == func(i,16))
			cout << i << endl;
			
	return 0;
}

int func(int n, int a){
	int sum=0;
	while(n >= a){
		sum += (n%a);
		n/=a;
	}
	sum+=(n%a);
	return sum;
}

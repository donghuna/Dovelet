#include <iostream>
#include <cmath>
using namespace std;

int PC(int a){
	int count=0;
	int i;
	for(i=1; i*i<a; i++){
		if(a%i==0)	count++;
	}
	if(i!=a && a==i*i)		return count*2+1;
	else							return count*2;
}

int main(void){

	int i, count=1;
	int N;
	cin >> N;

	for(i=2; i<=N; i++)
		if(PC(i)%2!=0)	count++;
	
	cout << count;

	return 0;
}
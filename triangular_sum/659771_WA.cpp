#include <iostream>
using namespace std;
int T(int a){
	int sum=0;
	for(int i=1; i<=a; i++){
		sum+=i;
	}
	return sum;
}
int main(void){
	
	int N;
	int sum = 0;
	cin >> N;

	for(int i=1; i<=3; i++){
		sum += i*T(i+1);
	}
	cout << sum;
	return 0;
}
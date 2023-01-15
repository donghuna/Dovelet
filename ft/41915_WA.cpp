#include <iostream>
using namespace std;

int main(void){

	int a, count=0, sum=0, mul=1;
	cin >> a;

	for(int i=1; i<=a; i++){
		if(a%i == 0){
			cout << i << " ";
			count++;
			sum+= i;
			mul *= i;
		}
	}
	cout << endl << count << endl << sum << endl << mul-(mul/10)*10;

	return 0;
}
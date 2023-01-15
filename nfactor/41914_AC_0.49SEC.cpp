#include <iostream>
using namespace std;

int main(void){

	int a, count=0;
	cin >> a;

	for(int i=1; i<=a; i++){
		if(a%i == 0)
			count++;
	}
	cout << count;

	return 0;
}
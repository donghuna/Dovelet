#include <iostream>
using namespace std;

int main(void){

	int n, count=0;
	cin >> n;

	while(n>0){
		if(n%2 != 0)
			cout << count << " ";
		count++;
		n /= 2;
	}
	return 0;
}
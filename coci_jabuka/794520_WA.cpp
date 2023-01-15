#include <iostream>
using namespace std;

int main(void){

	int a, b;
	cin >> a >> b;

	for(int i=1; (a>b)?(i*i<=a):(i*i<=b); i++){
		if(a%i==0 && b%i==0)
			cout << i << " " << a/i << " " << b/i << endl;
	}
	return 0;
}

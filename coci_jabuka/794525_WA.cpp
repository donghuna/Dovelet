#include <iostream>
using namespace std;

int main(void){

	int a, b;
	cin >> a >> b;
	if(a>b){
		int tmp = b;
		b = a;
		a = tmp;
	}
	for(int i=1; i*i<=b; i++){
		if(a%i==0 && b%i==0)
			cout << i << " " << a/i << " " << b/i <<  endl;
		if( b%(a/i) == 0 && a%(a/i)==0 && (a/i)*(a/i) > b)
				cout << a/i << " " << a/(a/i) << " " << b/(a/i) << endl;
	}
	
	return 0;
}

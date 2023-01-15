#include <iostream>
using namespace std;

int main(void){

	int m, n;

	cin >> m >> n;
	
	
	if( m==0 || n%m!=0 )
		cout << m << " !| " << n;
	else if( n==0 || n%m==0 )
		cout << m << " | " << n;
	
	return 0;
}
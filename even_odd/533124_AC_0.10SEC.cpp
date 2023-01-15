#include <iostream>
using namespace std;

int main(void){

	int a, b;
	
	cin >> a >> b;
	if( a&1 )
		if( b&1 )
			cout << "odd+odd=even" << endl << "odd*odd=odd";
		else
			cout << "odd+even=odd" << endl << "odd*even=even";
	else
		if( b&1 )
			cout << "even+odd=odd" << endl << "even*odd=even";
		else
			cout << "even+even=even" << endl << "even*even=even";


	return 0;
}
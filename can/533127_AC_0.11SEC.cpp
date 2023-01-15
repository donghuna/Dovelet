#include <iostream>
using namespace std;

int main(void){

	int B, W;
	cin >> B >> W;
	if( W&1 )
		cout << "white";
	else
		cout << "black";

	return 0;
}
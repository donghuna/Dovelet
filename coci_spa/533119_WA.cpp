#include <iostream>
using namespace std;

int main(void){

	int H, M;

	cin >> H >> M;
	if( M<45 ){
		if( H == 0 )
			H = 23;
		else
			H -= 1;
		M += 15;
	}
	cout << H << " " << M;

	return 0;
}
#include <iostream>
using namespace std;

int main(void){
	
	int R,M,Y;
	cin >> R >> M >> Y;

	double output=M;
	for(int i=0; i<Y; i++){
		output += output*(R/100.0);
	}
	cout << (int)output;

	return 0;
}
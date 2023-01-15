#include <iostream>
using namespace std;

int main(void){

	int H = 0;
	
	for(int i=0; i<3; i++){
		cin >> H;
		if(H <= 168){
			cout << "CRASH " << H << endl;
			break;
		}
	}
	
	return 0;
}
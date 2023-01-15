#include <iostream>
using namespace std;

int main(void){

	int H = 0;
	int i;
	
	for(i=0; i<3; i++){
		cin >> H;
		if(H <= 168){
			cout << "CRASH " << H << endl;
			break;
		}
	}

	if(i == 3)
		cout << "NO CRASH" << endl;
	
	return 0;
}
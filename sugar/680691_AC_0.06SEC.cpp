#include <iostream>
using namespace std;

int main(void){

	int N;
	int i, j;
	int Count = 0;

	cin >> N;
	for(i=(N/5); i>=0; i--){
		if( (N-(i*5)) % 3 == 0 ){
			Count = i + (N-(i*5))/3;
			break;
		}
	}
	
	if(Count == 0)
		cout << -1;
	else
		cout << Count;
	return 0;
}
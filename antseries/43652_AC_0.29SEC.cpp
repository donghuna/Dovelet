#include <iostream>
using namespace std;

int main(void){

	int SameCount = 1;
	int N, B;

	cin >> N;
	B = N;
	while(true){
		cin >> N;
		if(N == 0){
			cout << SameCount << " " << B << endl;;
			break;
		}else if(N == B)
			SameCount++;
		else{
			cout << SameCount << " " << B << " ";
			SameCount=1;
			B = N;
		}
	}
	return 0;
}
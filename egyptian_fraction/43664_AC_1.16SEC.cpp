#include <iostream>
using namespace std;

int main(void){
	
	int S, M;
	cin >> S >> M;
	int I=2;

	while(true){
		if(S == 0)
			break;
		if( S/(float)M >= 1/(float)I ){
			S = (S*I) - M;
			M = M*I;
			cout << "1/" << I << " ";
		}
		I++;
	}
	return 0;
}
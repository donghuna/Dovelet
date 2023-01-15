#include <iostream>
using namespace std;

int main(void){

	int N, M;
	int S=0;
	int max = 2;
	int curr = 1;
	int compare = 1;

	cin >> S;
	if(S==1)
		cout << S << " IS 1/1";

	while(true){
		if(curr + max >= S)
			break;
		curr+=max;
		max++;
		compare *= -1;
	}

	if(compare == 1){
		M = max;
		N = 1;
		for(int i=curr; i<S-1; i++){
			N++;
			M--;
		}
	}else{
		M = 1;
		N = max;
		for(int i=curr; i<S-1; i++){
			N--;
			M++;
		}
	}
	cout << S << " IS " << N << "/" << M;
	return 0;
}
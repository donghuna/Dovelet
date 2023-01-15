#include <iostream>
using namespace std;

int main(void){
	
	int N, B, T;
	int S=1, increse=1;
	cin >> N;

	while(true){
		if(N > S){
			S += ++increse;
		}else if(N==S){
			cout << increse << " 1";
			return 0;
		}else
			break;
	}
	B = increse;
	T = S-N;
	increse = 1;
	S=1;
	while(true){
		if(T > S){
			S += ++increse;
		}else if(T == S){
			T = ++increse;
			break;
		}else{
			T = S-T;
			break;
		}
	}
	cout << B << " " << T;
	return 0;
}
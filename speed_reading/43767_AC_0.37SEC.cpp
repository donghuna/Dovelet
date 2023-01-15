#include <iostream>
using namespace std;

int main(void){

	int N, K;
	cin >> N >> K;

	while(K--){
		int S, T, R, Time=0;
		cin >> S >> T >> R;
		
		int min = 0;
		int myN = 0;
		while(true){
			if(myN+T*S == N){			min += T;		myN+=T*S; }
			else if(myN+T*S < N){		min += T+R;	myN+=T*S; }
			else{
				for(int i=1; i<=T; i++){
					if(myN + S >= N){
						min++;
						myN+=S;
						break;
					}else{
						min++;
						myN+=S;
					}
				}
			}
			if(myN >= N)		break;
		}
		cout << min << endl;
	}

	return 0;
}
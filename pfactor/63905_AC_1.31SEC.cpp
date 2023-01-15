#include <iostream>
#include <cmath>
using namespace std;

int sosu(int s){
	int i,j;
	for(i=s+1;;i++){
		for(j=2;j<i;j++){
			if(i%j==0)	break;
		}
		if(j==i)	return i;	
	}
}

int main(void){

	int N, S;
	cin >> N;

	S=2;
	while(N!=1){
		if(N%S==0){
			cout << S << " ";
			N/=S;
		}else{
			S=sosu(S);
		}
	}
	return 0;
}
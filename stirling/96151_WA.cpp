#include <iostream>
using namespace std;
int S(int, int);
int main(void){

	int D, N, M;
	cin >> D;
	for(int i=0; i<D; i++){
		cin >> N >> M;
		cout << S(N, M) << endl;
	}

	return 0;
}

int S(int n, int m){
	if(n==0 && m==0)	return 1;
	else if(m==0 || n==0)	return 0;
	return m*S(n-1, m) + S(n-1, m-1);
}
#include <iostream>
using namespace std;
int gcd(int, int);
int main(void){

	int i, j, k;
	int N, C;
	int cnt;
	cin >> N;
	for(i=0; i<N; i++){
		cin >> C;
		cnt = 0;
		for(j=2; j<=C; j++){
			for(k=j+1; k<=C; k++){
				if(k%j!=0 && gcd(k,j)==1)	cnt++;
			}
		}
		cnt *= 2;
		cnt += (C-1)*2 + 3;
		cout << cnt << endl;
	}

	return 0;
}
int gcd(int a, int b){
	while(b!=0){
		if(a>b)	swap(a,b);
		b %= a;
	}
	return a;
}
#include <iostream>
using namespace std;

int main(void){

	int a, b, c;
	int na, nb, nc;
	int min = INT_MAX;
	int N;
	cin >> N;

	for(a=1; a<=N/2; a++){
		for(b=1; b<=N; b++){
			if(a*b > N)	break;
			for(c=1; c<=N; c++){
				if(a*b*c > N) break;
				if( ((a*b*2)+(a*c*2)+(b*c*2)) < min && a*b*c == N){
					na = a;
					nb = b;
					nc = c;
					min = (a*b*2)+(a*c*2)+(b*c*2);
				}
			}
		}
	}
	cout << na << " " << nb << " " << nc;

	return 0;
}
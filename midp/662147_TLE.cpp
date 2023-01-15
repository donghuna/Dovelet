#include <iostream>
using namespace std;

int main(void){

	int N;
	int cnt;
	int i, j;
	
	cin >> N;
	int *x = new int[N];
	int *y = new int[N];

	for(i=0; i<N; i++)
		cin >> x[i] >> y[i];
	
	cnt = 0;
	for(i=0; i<N-1; i++){
		for(j=i+1; j<N; j++){
			if( (x[i]+x[j])%2==0 && (y[i]+y[j])%2 == 0){
				cnt ++;
			}
		}
	}
	cout << cnt;



	return 0;
}
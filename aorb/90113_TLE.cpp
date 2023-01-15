#include <iostream>
using namespace std;

int main(void){

	int N;
	int cnt = 0;
	cin >> N;
	for(int i=2; i<=N; i++){
		if( i%6==0 || i%8==0 )	cnt++;
	}
	cout << cnt;

	return 0;
}
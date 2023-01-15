#include <iostream>
using namespace std;

int main(void){

	int N, K;
	int mod=0, cnt=0, tmp;
	cin >> N >> K;

	while(N){
		cnt += N;
		tmp = (N+mod)%K;
		N = (N+mod)/K;
		mod = tmp;
	}
	cout << cnt << endl;

	return 0;
}
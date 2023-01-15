#include <iostream>
using namespace std;

int main(void){

	int N, Q;
	int S, F;
	cin >> N >> Q;
	int* ND = new int[N];
	
	for(int i=0; i<N; i++)
		cin >> ND[i];

	while(Q--){
		cin >> S >> F;
		int sum = 0;
		for(int i=S-1; i<F; i++)
			sum+=ND[i];
		cout << sum << endl;
	}
	return 0;
}
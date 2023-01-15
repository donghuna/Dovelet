#include <iostream>
using namespace std;

int main(void){
	int N, max=0, index=0;
	cin >> N;
	//int* ND = new int[N];

	for(int i=0; i<N; i++){
		int T1, T2;
		cin >> T1 >> T2;
		if(T1+T2 > 8 && T1+T2 > max){
			max = T1+T2;
			index = i+1;
		}
	}
	cout << index;
	return 0;
}
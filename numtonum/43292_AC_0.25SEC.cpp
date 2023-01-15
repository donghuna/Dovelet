#include <iostream>
#include <string>
using namespace std;

int func(int N, int N1, int type);

int main(void){

	int N, max=0, curr=0;
	int count, index;
	cin >> N;

	for(int i=1; i<=N; i++){
		count = func(N, i, 0);
		if(count >= max){
			max = ++count;
			index = i;
		}
	}
	cout << max << endl;
	func(N, index, 1);

	return 0;
}

int func(int N, int N1, int type){

	int temp;
	int count = 0;

	if(type == 1)
		cout << N << " " << N1 << " ";

	while(true){
		count++;
		temp = N-N1;
		N = N1;
		N1 = temp;
		if(N1 < 0)
			break;
		if(type == 1)
			cout << N1 << " ";
	}
	return count;
}
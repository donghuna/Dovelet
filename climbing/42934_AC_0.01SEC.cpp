#include <iostream>
using namespace std;

int main(void){

	int N, U, D;

	while(true){
		cin >> N >> U >> D;
		if(N == 0)
			break;

		int sum=0;
		int time=0;
		while(true){
			time++;
			sum += U;
			if(sum >= N)
				break;
			time++;
			sum -= D;
		}
		cout << time << endl;
	}
	return 0;
}
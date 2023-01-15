#include <iostream>
using namespace std;

int main(void){

	while(true){
		int N, R;
		cin >> N >> R;
		if(N==0 && R==0)
			break;

		int* Card = new int[N];
		for(int i=0; i<N; i++)
			Card[i] = i+1;

		while(R--){
			int P, C;
			cin >> P >> C;
			int* temp = new int[P-1];
			for(int i=0; i<P-1; i++)	// P copy
				temp[i] = Card[i];
			
			for(int i=0; i<C; i++)		//p <-c
				Card[i] = Card[i+P-1];

			for(int i=0; i<P-1; i++)
				Card[C+i] = temp[i];
		}
		cout << Card[0] << endl;
	}
	return 0;
}
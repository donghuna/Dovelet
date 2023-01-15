#include <iostream>
using namespace std;

int main(void){

	int N;
	int i, j;

	cin >> N;

	for(i=0; i<N; i++){
		for(j=0; j<=i; j++){
			if(j==0 && i!=0)
				cout << "1 ";
			else if(j==i || j==0)
				cout << "1";
			else
				cout << i << " ";
		}
		cout << endl;
	}

	return 0;
}

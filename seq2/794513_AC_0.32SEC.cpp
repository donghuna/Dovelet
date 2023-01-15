#include <iostream>
using namespace std;

int main(void){

	int i;
	int N;
	int V;
	cin >> N;
	V = 0;
	for(i=1; i<=N; i++){
		V += i;
		cout << "1.." << i << " " << V << endl;
	}
	return 0;
}
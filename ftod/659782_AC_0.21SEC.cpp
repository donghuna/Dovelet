#include <iostream>
using namespace std;

int main(void){

	int s, p, k;
	cin >> s >> p >> k;

	cout << s/p << ".";
	for(int i=0; i<k; i++){
		s = (s%p)*10;
		cout << s/p;
	}
	return 0;
}
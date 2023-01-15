#include <iostream>
using namespace std;

int main(void){
	int N;
	int i;
	unsigned long long int a, b;
	a = 1;
	b = 2;
	cin >> N;

	for(i=1; i<=N; i+=2){
		a += b;
		b += 4;
	}
	//cout << (a-2) + (a-4) + (a-6);
	printf("%llu", (a-2) + (a-4) + (a-6));

	return 0;
}
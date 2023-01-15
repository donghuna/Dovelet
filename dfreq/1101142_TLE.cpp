#include <iostream>
using namespace std;

int func(int a, int c);

int main(void){

	int n, c;
	int output = 0;
	cin >> n >> c;

	for(int i=1; i<=n; i++){
		output += func(i, c);
	}

	cout << output;

	return 0;
}

int func(int a, int c){
	int output = 0;
	while(a){
		if(a%10 == c)
			++output;
		a/=10;
	}
	return output;
}
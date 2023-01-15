#include <iostream>
using namespace std;

bool func(int a);

int main(void){

	int N;
	int i, j;
	int cnt = 0;

	cin >> N;
	
	for(i=1000; i<=9999; i++){
		if(i%N == 0 && func(i)){
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}

bool func(int a){

	for(int i=0; i<=3; i++){
		if(a-(a/10)*10 != 1 && a-(a/10)*10 != 2 && a-(a/10)*10 != 3)
			return false;
		a/=10;
	}
	return true;
}
#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int N, M;
	int temp, sum=0;
	cin >> N >> M;
	while(N--){
		cin >> temp;
		if(temp>0 && M!=2)
			sum += pow(temp,(float)M);
		else if(M==2)
			sum += pow(temp,(float)M);
	}
	cout << sum;

	return 0;
}
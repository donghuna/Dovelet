#include <iostream>
using namespace std;
double S(double, double);
int main(void){

	int D, N, M;
	cin >> D;
	for(int i=0; i<D; i++){
		cin >> N >> M;
		cout << (int)(S((double)N, (double)M))%2 << endl;
	}

	return 0;
}

double S(double n, double m){
	if(n==0. && m==0.)	return 1;
	else if(m==0. || n==0.)	return 0;
	return m*S(n-1, m) + S(n-1, m-1);
}

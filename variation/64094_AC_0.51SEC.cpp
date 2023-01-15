#include <iostream>
#include <cmath>
using namespace std;

int main(void){

	int i;
	int N;
	double avg, sum=0.0;
	cin>>N;
	int* nD = new int[N];

	for(i=0; i<N; i++){
		cin >> nD[i];
		sum+= nD[i];
	}
	avg = sum/(double)N;
	sum = 0;

	for(i=0; i<N; i++)
		sum += pow(nD[i]-avg, 2.0);

	printf("%.2f", sum/(double)N);
	return 0;
}
#include <iostream>
using namespace std;
int func(int N);
int main(void){

	int i;
	int N, min, cnt=0;
	int nD[4];

	cin >> N;
	min = func(N);
	for(i=1111; i<=min; i++){
		if(func(i) == i)
			cnt++;
	}
	
	cout << cnt;
	return 0;
}
int func(int N){
	int i;
	int nD[4];
	int min=INT_MAX, tmp;
	
	nD[0] = N/1000;
	nD[1] = N/100 - (N/1000)*10;
	nD[2] = N/10 -(N/100)*10;
	nD[3] = N -(N/10)*10;

	for(i=0; i<4; i++){
		tmp = nD[i%4]*1000 + nD[(i+1)%4]*100 + nD[(i+2)%4]*10 + nD[(i+3)%4];
		if(tmp < min)
			min = tmp;
	}
	return min;
}
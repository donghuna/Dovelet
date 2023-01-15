#include <iostream>
using namespace std;

int main(void){

	int i;
	int N;
	cin >> N;
	int* nD = new int[N];

	if(N == 1){	cout << 1; return 0;}
	for(i=0; i<N; i++)
		cin >> nD[i];

	int before=0, count=0, max=0;
	//오름
	for(i=0; i<N; i++){
		if(before <= nD[i]){
			count++;
			before = nD[i];
		}
		else{
			if(max < count)
				max = count;
			count = 1;
			before = nD[i];
		}
	}
	//내림
	before = INT_MAX;
	count = 0;
	for(i=0; i<N; i++){
		if(before >= nD[i]){
			count++;
			before = nD[i];
		}
		else{
			if(max < count)
				max = count;
			count = 1;
			before = nD[i];
		}
	}
	cout << max;

	return 0;
}
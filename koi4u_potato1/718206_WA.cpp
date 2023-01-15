#include <iostream>
#include <math.h>
using namespace std;
int myabs(int a);
int main(void){
	
	int N;
	int max = 2147483647;
	cin >> N;
	int *arr1 = new int[N];
	int *arr2 = new int[N];

	for(int i=0; i<N; i++){
		cin >> arr1[i] >> arr2[i];
	}
	int index = 0;
	while(true){
		int sum = 0;
		for(int i=0; i<N; i++){
			sum += myabs(index - arr1[i]) * arr2[i];
		}
		if(sum<max){
			max = sum;
			index++;
		}
		else
			break;			
	}
	cout << index-1;

	return 0;
}

int myabs(int a){
	if(a<0)
		return a*-1;
	return a;
}
#include <iostream>
#include <algorithm>
using namespace std;

int compare1( const void *a, const void *b){
	return *(int *)a - *(int *)b;
}
int compare2( const void *a, const void *b){
	return *(int *)b - *(int *)a;
}

int main(void){

	int N, max, min, cal, cnt;
	int Arr[4];
	int i;

	cin >> N;

	cal = N;
	cnt = 0;

	while(cal != 6174){

		for(i=0; i<4; i++){
			Arr[i] = cal - ((cal/10)*10);
			cal /= 10;
		}

		qsort(Arr, 4, sizeof(int), compare2);
		max = Arr[0]*1000 + Arr[1]*100 + Arr[2]*10 + Arr[3];
		qsort(Arr, 4, sizeof(int), compare1);
		min = Arr[0]*1000 + Arr[1]*100 + Arr[2]*10 + Arr[3];
		cal = max - min;
		cnt++;
	}

	cout << cnt;

	return 0;
}
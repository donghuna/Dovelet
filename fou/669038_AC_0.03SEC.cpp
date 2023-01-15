#include <iostream>
#include <algorithm>
using namespace std;

int compare(const void* a, const void* b){
	return *(int *)a - *(int *)b;
}

int main(void){

	int Arr[3] = {0};
	int i;

	for(i=0; i<3; i++)
		cin>>Arr[i];
	qsort(Arr, 3, sizeof(int),compare);
	
	if(Arr[2]-Arr[1] == Arr[1]-Arr[0])
		cout << Arr[2] + Arr[1]-Arr[0];
	else if(Arr[2]-Arr[1] > Arr[1]-Arr[0])
		cout << Arr[1] + Arr[1]-Arr[0];
	else
		cout << Arr[0] + Arr[2]-Arr[1];


	return 0;
}
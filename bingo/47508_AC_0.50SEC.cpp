#include <iostream>
using namespace std;
int Func(int Arr[][5], int i, int j);
int main(void){

	int count=0, loopn=0;
	int Arr[5][5]={0};
	int i, j;

	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			cin >> Arr[i][j];

	int temp;
	while(true){
		loopn++;
		cin >> temp;
		for(i=0; i<25; i++){
			if(Arr[i/5][i%5] == temp){
				Arr[i/5][i%5] = 0;
				count += Func(Arr, i/5, i%5);
				break;
			}
		}
		if(count >= 3){	cout << loopn; return 0;}
		//if(loopn == 24) break;
	}

	return 0;
}

int Func(int Arr[][5], int i, int j){
	int sum1=0, sum2=0, sum3=0, sum4=0;
	for(int k=0; k<5; k++){
		if(Arr[i][k] == 0)	sum1++;
		if(Arr[k][j] == 0)	sum2++;
		if(i==j)
			if(Arr[k][k] == 0)	sum3++;
		if(i+j == 4)
			if(Arr[4-k][k] == 0)	sum4++;
	}
	return sum1/5 + sum2/5 + sum3/5 + sum4/5;
}
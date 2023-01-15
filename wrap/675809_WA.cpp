#include <iostream>
using namespace std;

int ver(int Arr[][10], int y, int x);
int hor(int Arr[][10], int y, int x);
int dae(int Arr[][10], int y, int x);

int main(void){

	int Arr[10][10];
	int i, j;
	int max = 0;

	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			cin >> Arr[i][j];
		}
	}
	
	for(i=0; i<10; i++){
		for(j=0; j<10; j++){
			if(ver(Arr,i,j) > max)
				max = ver(Arr,i,j);
			if(hor(Arr,i,j) > max)
				max = hor(Arr,i,j);
			if(dae(Arr,i,j) > max)
				max = dae(Arr,i,j);
		}
	}

	cout << max;
	
	return 0;
}

int ver(int Arr[][10], int y, int x){

	int sum = 0;
	int i;
	for(i=x; i<x+5; i++){
		sum += Arr[y][i%10];
	}
	return sum;
}

int hor(int Arr[][10], int y, int x){

	int sum = 0;
	int i;
	for(i=y; i<y+5; i++){
		sum += Arr[i%10][x];
	}
	return sum;
}

int dae(int Arr[][10], int y, int x){

	int sum = 0;
	int i;
	for(i=0; i<5; i++){
		sum += Arr[(y+i)%10][(x+i)%10];
	}
	return sum;
}
#include <iostream>
using namespace std;
int ArrSum(int Arr[][5], int sy, int sx, int ey, int ex);
int main(void){

	int Arr[5][5];
	int i, j, k, l;

	for(i=0; i<5; i++)
		for(j=0; j<5; j++)
			cin >> Arr[i][j];

	int max = 0;
	int loc[4];
	int cpr;
	for(i=0; i<5; i++)
		for(j=0; j<5; j++)	//배열의 모든위치에서 시작하기위함
			for(k=i; k<5; k++)	//Rows
				for(l=j; l<5; l++){	//Cols
					cpr = ArrSum(Arr, i, j, k, l);
					if(max < cpr){
						max = cpr;
						loc[0] = i+1;
						loc[1] = j+1;
						loc[2] = k+1;
						loc[3] = l+1;
					}
				}
	cout << max << endl;
	cout << loc[0] << loc[1] << loc[2] << loc[3];
	return 0;
}
int ArrSum(int Arr[][5], int sy, int sx, int ey, int ex){
	int sum=0;
	for(int i=sy; i<=ey; i++)
		for(int j=sx; j<=ex; j++)
			sum+=Arr[i][j];
	return sum;
}

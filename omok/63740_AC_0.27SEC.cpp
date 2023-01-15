#include <iostream>
using namespace std;

int FindFive(int nD[][20], int y, int x){
	int i;
	int d1,d2,d3,d4;
	d1=d2=d3=d4=0;

	for(i=1; i<=4; i++){
		if(x<=14)					if(nD[y][x+i] == nD[y][x])		d1++;
		if(x<=14 && y<=14)	if(nD[y+i][x+i] == nD[y][x])	d2++;
		if(y<=14)					if(nD[y+i][x] == nD[y][x])		d3++;
		if(y<=14 && x>=4)		if(nD[y+i][x-i] == nD[y][x])	d4++;
	}

	if(x!=0&&nD[y][x-1] == nD[y][x])					d1=0;
	if(x!=0&&y!=0&&nD[y-1][x-1] == nD[y][x])		d2=0;
	if(y!=0&&nD[y-1][x] == nD[y][x])					d3=0;
	if(y!=0&&nD[y-1][x+1] == nD[y][x])				d4=0;

	if(nD[y][x+5] == nD[y][x])		d1=0;
	if(nD[y+5][x+5] == nD[y][x])	d2=0;
	if(nD[y+5][x] == nD[y][x])		d3=0;
	if(nD[y+5][x-5] == nD[y][x])	d4=0;

	if(d1==4||d2==4||d3==4)		return 1;
	else if(d4==4)		return 2;
	else		return 0;
}

int main(void){

	int i,j;
	int nD[20][20];

	for(i=0; i<19; i++)
		for(j=0; j<19; j++)
			cin >> nD[i][j];

	for(i=0; i<19; i++)
	{
		for(j=0; j<19; j++)
		{
			if(nD[i][j]!=0&&FindFive(nD, i, j)==1)
			{
				cout << nD[i][j] << endl << i+1 << " " << j+1;
				return 0;
			}
			else if(nD[i][j]!=0&&FindFive(nD, i, j)==2)
			{
				cout << nD[i][j] << endl << i+5 << " " << j-3;
				return 0;
			}
		}
	}
	cout << "0";
	return 0;
}
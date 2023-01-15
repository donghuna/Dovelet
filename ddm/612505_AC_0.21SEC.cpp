#include <iostream>
using namespace std;

int abs(int a);

int main(void){

	int i, j;
	int arr[5][5];
	int chk = 0, sum = 0;

	for(i=0; i<5; i++){
		sum = 0;
		for(j=0; j<5; j++){
			cin >> arr[i][j];
			if(i!=j)	sum+=abs(arr[i][j]);
		}
		if(abs(arr[i][i]) < sum)	chk++;
	}

	if(chk)
		cout << "no";
	else
		cout << "yes";

	return 0;
}

int abs(int a){
	if(a<0)
		return a*-1;
}
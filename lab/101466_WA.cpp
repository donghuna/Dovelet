#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N;
	int max=0, tmp, index;

	cin >> N;
	int **nD = new int*[N];
	for(i=0; i<N; i++){
		nD[i] = new int[N];
		tmp = 0;
		for(j=0; j<N; j++){
			cin >> nD[i][j];
			tmp += nD[i][j];
		}
		if(tmp > max){
			max = tmp;
			index = i;
		}
	}
	cout << i << endl;

	return 0;
}
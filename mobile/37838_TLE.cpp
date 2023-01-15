#include <iostream>
using namespace std;

int main(void){

	int S;
	int order;
	int i, j;
	int x, y, A;
	int L,B,R,T;

	while(true){
		// 0. order
		cin >> order >> S;
		if(order == 0)
			break;
	}

	//data 동적할당
	int **data = new int*[S];
	for(i=0; i<S; i++){
		data[i] = new int[S];
		for(j=0; j<S; j++){
			data[i][j] = 0;
		}
	}

	while(true){
		cin >> order;
		if(order == 1){
			cin >> x >> y >> A;
			data[y][x] += A;
		}else if(order == 2){
			cin >> L >> B >> R >> T;
			int sum = 0;
			for(i=B; i<=T; i++)
				for(j=L; j<=R; j++)
					sum += data[i][j];
			cout << sum << endl;
		}else if(order == 3){
			break;
		}

	}
	return 0;
}
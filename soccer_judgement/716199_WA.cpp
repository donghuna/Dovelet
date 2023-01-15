#include <iostream>
using namespace std;

typedef struct Reff{
	int get;
	int total;
};

int main(void){

	int N, M, C, V;
	int i, j;
	double max = 0.0;
	int who;

	cin >> N >> M;	// num of Country, num of Reff
	Reff *R = new Reff[M];
	
	for(j=0; j<M; j++){	// init.
		R[j].total = 0;
		R[j].get = 0;
	}

	for(i=0; i<N; i++){
		cin >> C >> V;	// num of voting Citizen, num of taken voting Reff.

		for(j=0; j<V; j++){
			int tmp1, tmp2;	// ref num, voting.
			cin >> tmp1 >> tmp2;
			R[tmp1-1].total += C;
			R[tmp1-1].get += tmp2;
		}
	}

	for(i=0; i<M; i++){
		if(R[i].total != 0 && R[i].get / (double)R[i].total > max){
			who = i+1;
			max = R[i].get / (double)R[i].total;
		}
	}

	cout << who;

	return 0;
}
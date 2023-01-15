#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N, M;
	int start=0;
	
	cin >> N;
	int *nD = new int[N];
	for(i=0; i<N; i++)
		scanf("%d", &nD[i]);
	
	cin >> M;
	int *mD = new int[M];
	for(i=0; i<M; i++)
		scanf("%d", &mD[i]);

	//input fin

	for(i=0; i<M; i++){		// M;
		for(j=start; j<N; j++){	// N;
			if(nD[j]+mD[i] == 10000){
				cout << "YES";
				return 0;
			}
			if(nD[j]+mD[i] > 10000){
				start = j;
				break;
			}
		}
	}
	cout << "NO";	

	return 0;
}
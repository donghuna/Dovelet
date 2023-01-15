#include <iostream>
#include <vector>
using namespace std;

struct print{
	int num;
	int rank;
};

int cmt(const void *a, const void *b){
	int A = *((int*)a);
	int B = *((int*)b);
	return A<B;
}

int main(void){

	int i;
	int N, M, tmp;
	int ndIdx = 0, rdIdx = 0, cnt = 0;

	cin >> N >> M;
	vector<print> nD;
	int *rD = new int[N];

	for(i=0; i<N; i++){
		cin >> tmp;
		print intmp;
		intmp.num = i;
		intmp.rank = tmp;
		nD.push_back(intmp);		
		rD[i] = tmp;
	}
	
	qsort((void *)rD, N, sizeof(rD[0]), cmt);
	while(rdIdx <= N){
		if(nD[ndIdx].rank == rD[rdIdx]){
			cnt++;
			if(nD[ndIdx].num == M){
				cout << cnt << endl;
				return 0;
			}
			rdIdx++;
		}else{
			print intmp;
			intmp.num = nD[ndIdx].num;
			intmp.rank = nD[ndIdx].rank;
			nD.push_back(intmp);
		}
		ndIdx++;
	}
	return 0;
}
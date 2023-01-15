#include <iostream>
using namespace std;

int main(void){

	int count = 0,i;
	int N;
	cin >> N;
	int* nD = new int[N];
	for(i=0; i<N; i++)
		cin >> nD[i];


	while(true){
		//search
		int compare = nD[0];
		for(i=1; i<N; i++){
			if(compare != nD[i])
				break;
			else if(i==N-1){
				cout << count << " " << compare;
				return 0;
			}
		}
		// 안똑같으므로 호루라기를 분다
		count++;
		int temp1 = nD[0]/2;
		nD[0] /= 2;
		int temp2;
		for(i=1; i<N; i++){
			nD[i] /= 2;
			temp2 = nD[i];
			nD[i] += temp1;
			if(nD[i] % 2 !=0)	nD[i]++;	//홀수일때 한개더주기
			temp1 = temp2;
		}
		nD[0] += temp1;
		if(nD[0] %2 != 0)	nD[0]++;
	}
	return 0;
}
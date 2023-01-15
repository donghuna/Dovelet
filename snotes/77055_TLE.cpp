#include <iostream>
using namespace std;

int main(void){

	int i, j;
	int N, Q;
	int nD[100001] = {0};
	int data=-1, tmp, cnt=0;

	cin >> N >> Q;
	for(i=0; i<N; i++){
		cin >> tmp;
		data+=tmp;
		nD[cnt++] = data;
	}//input fin

	for(i=0; i<Q; i++){
		cin >> tmp;
		for(j=0; j<N; j++){
			if(nD[j] >= tmp){
				cout << ++j << endl;
				break;
			}
		}
	}

	return 0;
}
#include <iostream>
using namespace std;
int func(int nD[], int fnd, int s, int f);
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
int func(int nD[], int fnd, int s, int f){
	if( nD[(f-s)/2] == fnd ){
		return (f-s)/2;
	}else if( nD[(f-s)/2] > fnd ){
		func(nD, fnd, ((f-s)/2)+1, f);
	}else{
		func(nD, fnd, s, ((f-s)/2)-1);
	}
}
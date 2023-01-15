#include <iostream>
using namespace std;

int main(void){

	int nD[10000] = {0};
	int N;
	int cnt = 0, index = 1;
	nD[1] = 1;
	

	cin >> N;
	while(cnt < N){
		if(nD[index]!=0){
			nD[index*2]++;
			nD[index*5]++;
			nD[index*3]++;
			cnt++;
		}
		index++;
	}
	if(N==1){
		cout << "The 1'st ugly number is 1." << endl;
	}else if(N==2){
		cout << "The 2'nd ugly number is 2." << endl;
	}else{
		cout << "The " << N << "'th ugly number is " << index-1 << "." << endl;
	}
	return 0;
}
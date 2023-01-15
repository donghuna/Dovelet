#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){

	int N;
	cin >> N;
	int* nD = new int[N];

	vector<int> V;

	for(int i=0; i<N; i++)
		cin >> nD[i];

	int Tcount = 0;		//쓰러진 나무의 개수
	while(Tcount < N){
		int index = 0;
		int max = 0;
		//가장큰 나무 찾음
		for(int i=0; i<N; i++){
			if(nD[i] > max){
				max = nD[i];
				index = i;
			}
		}
		//가장큰나무 베기
		
		V.push_back(index+1);
		nD[index] = 0;
		Tcount++;
		//왼쪽으로 쓰러짐
		int before = max;
		for(int i=index-1; i>=0; i--){
			if(nD[i] < before && nD[i] != 0){
				before = nD[i];
				nD[i] = 0;
			}
			else
				break;
			Tcount++;
		}
		//오른쪽
		before = max;
		for(int i=index+1; i<N; i++){
			if(nD[i] < before && nD[i] != 0){
				before = nD[i];
				nD[i] = 0;
			}
			else
				break;
			Tcount++;
		}
	}
	
	sort(V.begin(), V.end());
	vector<int>::iterator mi;
	mi = V.begin();
	while( mi != V.end() ){
		cout << *mi << endl;
		mi++;
	}


	return 0;
}
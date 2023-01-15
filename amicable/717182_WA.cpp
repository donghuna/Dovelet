#include <iostream>
#include <list>
using namespace std;

int main(void){

	int arr[] = {220, 284, 496, 1184, 1210, 2620, 2924, 5020, 5564, 6232, 6368, 8128};
	int N, cnt;
	cin >> N;
	cnt = 0;
	for(int i=0; i<sizeof(arr)/4; i++){
		if(arr[i] <= N){
			cout << arr[i];
			if(cnt%2 == 0)
				cout << " ";
			else
				cout << endl;
			cnt++;
		}
	}


	return 0;
}
/*

	int N;
	int i, j;

	cin >> N;
	
	for(i=220; i<10000; i++){
		list<int> ami1, ami2;
		for(j=1; j<i; j++){
			if(i%j==0){
				ami1.push_front(j);
			}
		}
		int sum=0;
		list<int>::iterator iter;
		for(iter = ami1.begin(); iter != ami1.end(); iter++){
			sum += *iter;
		}
		//
		for(j=1; j<sum; j++){
			if(sum%j==0){
				ami2.push_front(j);
			}
		}
		sum = 0;
		list<int>::iterator iter2;
		for(iter2 = ami2.begin(); iter2 != ami2.end(); iter2++){
			sum += *iter2;
		}
		//
		if(sum == i)
			cout << i << endl; 
	}
*/
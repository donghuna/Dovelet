#include <iostream>
using namespace std;

int main(void){
	int N, temp, count=0, max=0;
	cin >> N;
	int* ND = new int[10000];
	for(int i=0; i<10000; i++)
		ND[i] = 0;
	for(int i=0; i<N; i++){
		cin >> temp;
		ND[temp-1]++;
		if(temp > max)
			max = temp;
	}
	for(int i=0; i<max; i++)
			if(ND[i] > 0)
				count++;
	cout << count;
	return 0;
}
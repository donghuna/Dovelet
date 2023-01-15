#include <iostream>
using namespace std;

int main(void){

	int i;
	int N[4];
	int min=INT_MAX, tmp;

	for(i=0; i<4; i++)	cin >> N[i];
	for(i=0; i<4; i++){
		tmp = N[i%4]*1000 + N[(i+1)%4]*100 + N[(i+2)%4]*10 + N[(i+3)%4];
		if(tmp < min)
			min = tmp;
	}
	cout << min - 1112;
	return 0;
}
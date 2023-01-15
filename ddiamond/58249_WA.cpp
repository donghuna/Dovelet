#include <iostream>
using namespace std;

int main(void){

	int N, i, j;
	cin >> N;

	for(i=1; i<=(N/2)+1; i++){
		for(j=1; j<=(N/2)+1-i; j++)
			cout << " ";
		for(j=1; j<=i; j++)
			cout << j;
		for(j=i; j>1; j--)
			cout << j-1;
		cout << endl;
	}
	for(i=1; i<=N/2; i++){
		for(j=1; j<=i; j++)
			cout << " ";
		for(j=1; j<=(N/2)+1-i; j++)
			cout << j;
		for(j=1; j<=(N/2)-i; j++)
			cout << j;
		cout << endl;
	}
	return 0;
}
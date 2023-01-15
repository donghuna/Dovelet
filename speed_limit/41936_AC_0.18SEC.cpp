#include <iostream>
using namespace std;

int main(void){

	int n, input[10][2]={0}, count=0;
	int miles=0;
	cin >> n;

	while(n--){
		cin >> input[count][0] >> input[count][1];
		count++;
	}

	miles = input[0][0] * input[0][1];
	for(int i=1; i<count; i++){
		miles += input[i][0] * (input[i][1] - input[i-1][1]);
	}
	cout << miles << " miles";

	return 0;
}
		



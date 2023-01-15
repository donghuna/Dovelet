#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(void){

	string alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int d, r, temp;
	stack<int> S;
	cin >> d >> r;

	while(d > 0){
		temp = d%r;
		if(temp >= 10)
			cout << alpha[temp-10];
		else
			if(temp == 0)
				S.push(0);
			else
				S.push(temp);
		d /= r;
	}
	while(!S.empty()){
		cout << S.top();
		S.pop();
	}
	return 0;
}
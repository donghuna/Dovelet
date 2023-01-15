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
			S.push(alpha[temp-10]);
		else
			if(temp == 0)
				S.push(0);
			else
				S.push(temp);
		d /= r;
	}
	while(!S.empty()){
		if(S.top() >=10)
			cout << (char)S.top();
		else
			cout << S.top();
		S.pop();
	}
	return 0;
}
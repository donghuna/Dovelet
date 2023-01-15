#include <iostream>
#include <stack>
#include <queue>
#include <string>
using namespace std;

int main(void){
	stack<int> S1;
	queue<int> S2;

	string input;
	cin >> input;
	for(int i=0; i<input.length(); i++){
		if(input[i] == '(')
			S1.push(i);
		if(input[i] == ')')
			S2.push(i);
	}
	if(S1.size() != S2.size())	cout << "not match";
	while(!S1.empty()){
		cout << S1.top() << " " << S2.front() << endl;
		S1.pop();
		S2.pop();
	}
	return 0;
}
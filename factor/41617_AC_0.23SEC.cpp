#include <iostream>
#include <stack>
using namespace std;

int main(void){

	int a;
	cin >> a;
	stack<int> S;
	
	for(int i=1; i<=a; i++){
		if(S.empty() == false)
			if(S.top() <= i)
				break;
		if(a%i == 0){
			if(i*i != a)
				S.push(a/i);
			cout << i << endl;
		}
	}
	while(S.empty() == false){
		cout << S.top() << endl;
		S.pop();
	}
	return 0;
}
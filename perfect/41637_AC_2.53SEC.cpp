#include <iostream>
#include <stack>
using namespace std;

int main(void){

	int a, sum=0;
	cin >> a;
	stack<int> S;
	
	for(int i=1; i<=a; i++){
		if(S.empty() == false)
			if(S.top() <= i)
				break;
		if(a%i == 0){
			if(i*i != a)
				S.push(a/i);
			sum += i;
		}
	}
	while(S.empty() == false){
		sum+=S.top();
		S.pop();
	}
	
	printf("%5d  ", a);
	if(sum-a == a)
		cout << "PERFECT";
	else if(sum-a < a)
		cout << "DEFICIENT";
	else
		cout << "ABUNDANT";

	return 0;
}
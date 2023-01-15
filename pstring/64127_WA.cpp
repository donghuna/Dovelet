#include <iostream>
#include <string>
using namespace std;

int main(){

	int count=1;
	int i;
	string S, C, D;
	cin >> S;

	C = S[0];
	for(i=1; i<S.size();){
		
		if(C!=S.substr(i,C.size())){
			C = S.substr(0,C.size()+1);
			count = 1;
			i++;
		}else{
			count++;
			i+=C.size();
		}
	}

	cout << count;
	return 0;
}
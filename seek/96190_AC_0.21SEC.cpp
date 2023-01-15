#include <iostream>
#include <string>
using namespace std;

int main(void){

	int Num;
	string S, com1, com2;
	cin >> S;

	for(int i=1; i<=S.size(); i++){
		com1 = S.substr(0, i);
		com2 = S.substr(S.size()-i,S.size());
		if(com1.compare(com2) == 0)
			cout << i << " ";
	}

	return 0;
}
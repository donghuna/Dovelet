#include <iostream>
#include <string>
using namespace std;

int main(void){

	string S;
	int i;

	cin >> S;
	for(i=0; i<S.length(); i++){
		if(S[i] == '9')
			cout << "99 Bottles of Beer on the Wall" << endl;
		else if(S[i] == 'h' || S[i] == 'H')
			cout << "Hello, world!" << endl;
		else if(S[i] == 'q' || S[i] == 'Q')
			cout << S << endl;
	}
	
	return 0;
}

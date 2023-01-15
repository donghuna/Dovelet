#include <iostream>
using namespace std;
#include <string>

int main(void){

	string s;
	cin >> s;
	for(int i=0; i<s.length(); i++){
		if( (s.length()-i)%3 == 0 && i!=0)
			cout << ",";
		cout << s[i];
	}

	return 0;
}
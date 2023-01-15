#include <iostream>
using namespace std;

int main(){
	int s, m=INT_MAX;
	for(int i=0; i<7; i++){
		cin >> s;
		if(s<m)	m=s;
	}
	cout << m;
	return 0;
}
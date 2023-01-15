#include <iostream>
using namespace std;
#include <string>

int main(void){

	int i;
	int a[3];
	string s;

	cin >> a[0] >> a[1] >> a[2];
	cin >> s;

	int tmp;
	if(a[0] > a[1]){
		int tmp = a[0];
		a[0] = a[1];
		a[1] = tmp;
	}
	if(a[1] > a[2]){
		int tmp = a[1];
		a[1] = a[2];
		a[2] = tmp;
	}
	
	for(i=0; i<3; i++){
		if(s[i] == 'A')
			cout << a[0] << " ";
		else if(s[i] == 'B')
			cout << a[1] << " ";
		else
			cout << a[2] << " ";
	}

	
	
	return 0;
}

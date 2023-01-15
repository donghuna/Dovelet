#include <iostream>
#include <string>
using namespace std;

int main(void){

	string a, b;
	int c1=0, c2=0;
	cin >> a >> b;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(a[i] == b[j]){
				if(i==j)
					c1++;
				else
					c2++;
			}
		}
	}

	cout << c1 << "A" << c2 << "B";


	return 0;
}

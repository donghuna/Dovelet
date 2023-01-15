#include <iostream>
using namespace std;

int main(void){

	int i;
	int x, m;
	cin >> x >> m;
	for(i=1; i<m; i++){
		if((x*i)%m == 1){
			cout << i;
			break;
		}
	}
	if(i==m)
		cout << "No such integer exists.";
}
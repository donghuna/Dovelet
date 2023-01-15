#include <iostream>
using namespace std;

int main(void){

	int x1, x2, y1, y2;
	int i, j;

	cin >> x1 >> y1;
	cin >> x2 >> y2;

	for(i=1;;i++){
		if(y1-x1*i == y2-x2*i){
			cout << i << " " << y2-x2*i;
			break;
		}
	}
	return 0;
}

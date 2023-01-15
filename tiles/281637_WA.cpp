#include <iostream>
using namespace std;

int main(void){
	int x, y;
	cin >> x >> y;
	cout << "The number of whole tiles is " << (x/8)*(y/8) 
		<< " part tiles is " << (y/8)*(x%8!=0)?1:0 + (x/8)*(y%8!=0)?1:0 + (y%8!=0&&x%8!=0)?1:0;


	return 0;
}
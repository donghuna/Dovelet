#include <iostream>
using namespace std;

int main(void){

	int r, e, c;
	int sum;
	int temp;
	cin >> r >> e >> c;

	sum = r+c;
	
	if( sum < e)
		cout << "advertise" << endl;
	else if(sum == e)
		cout << "does not matter" << endl;
	else
		cout << "do not advertise" << endl;

	return 0;
}
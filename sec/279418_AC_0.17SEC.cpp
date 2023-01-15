#include <iostream>
using namespace std;

int main(void){
	int input;

	cin >> input;
	cout << input/(60*60*24) << " " << input%(60*60*24)/(60*60)
		<< " " << input%(60*60)/60 << " " << input%60;

	return 0;
}
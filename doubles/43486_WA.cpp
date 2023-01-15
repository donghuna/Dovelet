#include <iostream>
#include <vector>
using namespace std;

int main(void){

	int data[100] = {0};
	vector<int> I;
	int input;
	int count=0;

	cin >> input;
	while( input ){
		data[input] = 1;
		I.push_back(input);
		cin >> input;
	}

	vector<int>::iterator mi;
	mi = I.begin();
	while( mi != I.end() ){
		if( data[*mi * 2] == 1 )
			count++;
		mi++;
	}
	cout << count << endl;
	return 0;
}
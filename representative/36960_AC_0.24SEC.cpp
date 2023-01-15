#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(void){

	vector<int> input;
	vector<int>::iterator mi;
	int sum = 0;
	int avr;
	int temp;
	int i;
	
	for(i=0; i<5; i++){
		cin >> temp;
		input.push_back(temp);
	}

	mi = input.begin();
	while( mi != input.end() ){
		sum += *mi;
		mi++;
	}
	avr = sum /5;

	sort(input.begin(), input.end());

	cout << avr << endl << input[2] << endl;
	
	return 0;
}
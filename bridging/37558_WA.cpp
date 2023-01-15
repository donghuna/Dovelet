#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main(void){


	int TC;
	cin >> TC;

	int i;
	int count = 0;

	int **input = new int*[TC+1];
	for(i=1; i<=TC; i++){
		int temp;
		cin >> temp;
		input[i] = new int[2];
		input[i][0] = temp;
		input[i][1] = -1;
	}
	
	for(int c=0; c<TC; c++){
		int min = INT_MAX;
		int to, from;
		for(i=1; i<=TC; i++){
			if(input[i][1] == -1 && abs(i - input[i][0]) <= min){
				from = i;
				to = input[i][0];
				min = abs(i - input[i][0]);
			}
		}

		int pass = 0;
		if(from < to){
			for(i=from; i<=to; i++){
				if(input[i][1] == -1) continue;
				if(input[i][1] < to)
					pass = 1;
			}	
		}else{
			for(i=to; i<=from; i++){
				if(input[i][1] == -1) continue;
				if(input[i][1] > to)
					pass = 1;
			}
		}

		
		if(pass == 1){
			input[from][1] = -1;
			break;
		}
		count++;
		input[from][1] = to;
	}
	cout << count << endl;	

	return 0;
}













	/*
	vector<int> input;
	vector<int> compare;

	int TC;
	cin >> TC;
	int temp;
	
	for(int i=0; i<TC; i++){
		cin >> temp;
		input.push_back(temp);
		input.push_back(0);
	}

	int min = INT_MAX;

	vector<int>::iterator curr;
	vector<int>::iterator mi;
	mi = input.begin();
	while( mi != input.end() ){
		if( *mi <= min &&){	min = *mi;	curr = mi; }
		mi++;
	}
	*/






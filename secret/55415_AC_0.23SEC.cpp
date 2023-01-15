#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void){

	char* data[] = {"000000", "001111", "010011", "011100", "100110", "101001", "110101", "111010"};
	char* output[] ={"A", "B", "C", "D", "E", "F", "G", "H"};
	int error[8] = {0};

	int i, j, k, l;
	int N;
	cin >> N;
	string input;
	vector<char> V;
	cin >> input;

	for(i=0; i<N*6; i++){
		for(j=0; j<8; j++){
			if(data[j][i%6] != input[i])	error[j]++;
		}
		if(i%6==5){
			for(j=0; j<8; j++){
				if(error[j] <= 1){	V.push_back(output[j][0]);	break; }
			}
			if(j==8){
				cout << V.size()+1;
				return 0;
			}
			for(j=0; j<8; j++)		error[j] = 0;
		}
	}
	vector<char>::iterator mi;
	mi = V.begin();
	do{
		cout << *mi;
		mi++;
	}while(mi!=V.end());
	
	return 0;
}
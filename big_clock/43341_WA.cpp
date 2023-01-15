#include <iostream>
#include <string>
using namespace std;

int main(void){

	int H, M, Fd;
	string temp;
	cin >> temp;

	Fd = temp.find_first_of(":");
	if(Fd == 2){
		H = (((int)temp[0])-48)*10 + ((int)temp[1]-48);
		M = (((int)temp[3])-48)*10 + ((int)temp[4]-48);
	}else if(Fd == 1){
		H = ((int)temp[0]-48);
		M = (((int)temp[2])-48)*10 + ((int)temp[3]-48);
	}
	if(M>0)
		cout << 0;
	else
		cout << H+12;
	return 0;
}
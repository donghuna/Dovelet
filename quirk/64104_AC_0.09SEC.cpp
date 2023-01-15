#include <iostream>
using namespace std;

int main(void){
	int N;
	cin >> N;
	if(N==2)		cout << "00" << endl << "01" << endl << "81";
	else if(N==4)	cout << "0000" << endl << "0001" << endl << "2025" << endl << "3025" << endl << "9801";
	else if(N==6)	cout << "000000" << endl << "000001" << endl << "088209" << endl << "494209" << endl << "998001";
	else if(N==8)	cout << "00000000" << endl << "00000001" << endl << "04941729" << endl << "07441984" << endl << "24502500" << endl << "25502500" << endl << "52881984" << endl << "60481729" << endl << "99980001";
	return 0;
}
#include <iostream>
using namespace std;

int main(void){

	int y, m;
	cin >> y >> m;

	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12){
		cout << "31" << endl; 
		return 0;
	}

	if(m==4 || m==6 || m==9 || m==11){
		cout << "30" << endl;
		return 0;
	}else{
		if(y%4 == 0)
			cout << "29" << endl;
		else
			cout << "28" << endl;
	}

	return 0;
}
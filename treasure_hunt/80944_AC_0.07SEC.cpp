#include <iostream>
#include <string>
using namespace std;

int main(void){

	int EW, NS, N;
	int cEW=0, cNS=0;
	int Dic;
	char Dir;
	int i;

	cin >> EW >> NS;
	cin >> N;
	for(i=0; i<N; i++){
		cin >> Dic;
		cin >> Dir;
		switch(Dir){
			case 'E':
				cEW += Dic;
				break;
			case 'W':
				cEW -= Dic;
				break;
			case 'N':
				cNS += Dic;
				break;
			case 'S':
				cNS -= Dic;
				break;
		}
	}

	if(cNS==NS && cEW==EW){
		cout << "Treasure Found" << endl;
	}else{
		cout << "Bad Map" << endl;
	}

	return 0;
}
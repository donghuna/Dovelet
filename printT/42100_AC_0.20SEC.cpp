#include <iostream>
using namespace std;

int main(void){

	int a;
	cin >> a;

	for(int i=1; i<=a; i++){
		if(i==1){
			for(int j=1; j<=a; j++)
				cout << "*";
			cout << endl;
		}else{
			for(int j=1; j<=(a/2); j++)
				cout << " ";
			cout << "*" << endl;
		}
	}
	return 0;
}
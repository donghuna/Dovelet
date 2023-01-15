#include <iostream>
using namespace std;

int main(void){

	int a;
	cin >> a;

	for(int i=1; i<=a; i++){
		if(i==1 || i==a){
			for(int j=1; j<=a; j++)
				cout << "*";
			cout << endl;
		}else{
			for(int k=1; k<=a-i; k++)
				cout << " ";
			cout << "*" << endl;
		}
	}
	return 0;
}